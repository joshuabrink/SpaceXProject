#include "ComNodeQueue.h"
#include "ComNodeQueueIterator.h"
#include "Satellite.h"
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{

  /*  ComNodeQueue que = ComNodeQueue();
    Satellite s = Satellite(1);
    Satellite s1 = Satellite(2);
    Satellite s2 = Satellite(3);
    Satellite s3 = Satellite(4);
    Satellite s4 = Satellite(5);
    que.add(s);
    que.add(s1);
    que.add(s2);
    que.add(s3);
    que.add(s4);
    ComNodeQueueIterator it = que.begin();
    
    // ComNodeQueueIterator it = dynamic_cast<ComNodeQueueIterator&>(*iter);

    while (!(it == que.end()))
    {
        // CommuncationNode cur = *(*it);
        cout << (*it).id << endl;
        ++(it);
    }
    
    // delete iter;

   /* code */
   return 0;
}