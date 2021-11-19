#include "ComNodeQueue.h"
#include "Satellite.h"
#include "GroundComNode.h"
#include "TECargoCollection.h"
#include "TransportEntityCrew.h"
#include "TransportEntityCargo.h"
#include "SpaceCraftCrewDragon.h"
#include "SpaceCraftDragon.h"

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{

    ComNodeQueue *que = new ComNodeQueue();
    CommuncationNode *s0 = new Satellite();
    CommuncationNode *s1 = new Satellite();
    CommuncationNode *g0 = new GroundComNode();
    CommuncationNode *s2 = s1->clone();
    // Satellite s4 = Satellite();
    que->add(s0);
    que->add(s1);
    que->add(g0);
    que->add(s2);
    // que->add(&s4);

    CommuncationNetwork network = CommuncationNetwork(que);

    // broadcast all
    cout << "Ground control communicates to all nodes" << endl;
    g0->communicate("Rocket reached low orbit");
    cout << endl;

    // satellite to ground com
    cout << "Satellite communicates with ground control" << endl;
    s1->communicate("Send communcation packet", 2);
    cout << endl;

    // all to satellite 1
    cout << "All nodes communicates with Satellite 1" << endl;
    ComNodeCollection::iterator it = que->begin();
    while (!(it == que->end()))
    {
        (*it)->communicate("Send communcation packet", 1);
        cout << endl;
        ++it;
    }
    (*it)->communicate("Send communcation packet", 1);

    delete que;
    delete s0;
    delete s1;
    delete s2;
    delete g0;
    
    TransportEntity* crew = new TransportEntityCrew();

    TransportEntityCollection* trans = new TECargoCollection();
    trans->add(crew);

    SpaceCraft* crewCraft = new SpaceCraftDragon();
    crewCraft->addEntities(trans);

    return 0;
}