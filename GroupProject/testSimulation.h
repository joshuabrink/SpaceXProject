#include <iostream>
#include <random>
#include <vector>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

class Payload
{
};

class Crew : public Payload
{
};
class Cargo : public Payload
{
};
class PayloadFactory
{
};

template <typename Type>
class CollectionIterator
{
protected:
    Type *ptr;

public:
    CollectionIterator(){};
    CollectionIterator(Type *_ptr) { ptr = _ptr; };
    Type &operator*() { return *ptr; };
    CollectionIterator<Type> &operator++()
    {
        ptr++;
        return *this;
    };
    CollectionIterator<Type> &operator--()
    {
        ptr--;
        return *this;
    };
    bool operator==(const CollectionIterator<Type> &r_ptr)
    {
        return (ptr == r_ptr.getPtr());
    };
    Type *getPtr() const { return ptr; }
    ~CollectionIterator(){};
};

class StarlinkCommunication
{
};

class StarlinkGroundUser : public StarlinkCommunication
{
};

class StarlinkOrbitingSatellite : public StarlinkCommunication
{
};

class Satellite : public StarlinkCommunication
{
};

class StarlinkCollection
{
public:
    typedef CollectionIterator<StarlinkCommunication *> iterator;
    virtual void add(StarlinkCommunication *newNode) = 0;

    virtual void remove() = 0;

    virtual StarlinkCollection::iterator begin() = 0;
    virtual StarlinkCollection::iterator end() = 0;
};
class StarlinkVector : public StarlinkCollection
{
private:
    std::vector<StarlinkCommunication *> nodeCollection;

public:
    StarlinkVector(){};

    void add(StarlinkCommunication *newNode)
    {
        nodeCollection.push_back(newNode);
        // StarlinkCollection::add(newNode);
    }

    void remove()
    {
        nodeCollection.pop_back();
    }

    StarlinkCollection::iterator begin()
    {
        return iterator(&this->nodeCollection.front());
    };

    StarlinkCollection::iterator end()
    {
        return iterator(&this->nodeCollection.back());
    };
};

class CommunicationNetwork
{
public:
    void addStarlinkCollection(StarlinkCollection *col) {}
};

class TransportEntity
{
};
class TransportEntityCargo : public TransportEntity
{
};
class TransportEntityCrew : public TransportEntity
{
};

class TransportEntityCollection
{
public:
    void display(){};
    void add(TransportEntity *te){};
    TransportEntity *remove() { return nullptr; };
};
class TECargoCollection : public TransportEntityCollection
{
public:
    void add(TransportEntity *){};
};
class TECrewCollection : public TransportEntityCollection
{
public:
    void add(TransportEntity *){};
};
class SpaceCraft
{
public:
    void setTEC(TransportEntityCollection *){};
    TransportEntityCollection *getTEC() { return nullptr; };
};
class DragonSpaceCraft : public SpaceCraft
{
};
class CrewDragonSpaceCraft : public SpaceCraft
{
};
class SpaceCraftFactory
{
public:
    virtual SpaceCraft *buildSpaceCraft() = 0;
};
class DragonFactory : public SpaceCraftFactory
{
public:
    SpaceCraft *buildSpaceCraft() { return new DragonSpaceCraft(); }
};

class CrewDragonFactory : public SpaceCraftFactory
{
public:
    SpaceCraft *buildSpaceCraft() { return new CrewDragonSpaceCraft(); }
};

class Destination
{
public:
    Destination() {}
    Destination(string name) : name(name) {}
    string name;
};
class Earth : public Destination
{
public:
    Earth() : Destination("Earth") {}
};
class ISS : public Destination
{
public:
    ISS() : Destination("International Space Station") {}
};
class LowOrbit : public Destination
{
public:
    LowOrbit() : Destination("Low Orbit") {}
};
class Rocket
{
public:
    Destination *destination;
    SpaceCraft *spaceCraft;
    void setDestination(Destination *d)
    {
        destination = d;
    }
    void loadSpaceCraft(SpaceCraft *sc) { spaceCraft = sc; }
};
class RocketFactory
{
public:
    Rocket *createRocket() { return new Rocket(); }
};
class Falcon9Factory : public RocketFactory
{
};
class FalconHeavyFactory : public RocketFactory
{
};
class SatelliteFactory
{
public:
    Satellite *createSatellite() { return new Satellite(); };
};
class Command
{
private:
public:
    Command() {}
    virtual Rocket *executeBuild() { return nullptr; };
};

class BuildRocket : public Command
{
private:
    RocketFactory *myRocketFactory = new RocketFactory();

public:
    BuildRocket() {}
    BuildRocket(RocketFactory *, double) {}
    Rocket *executeBuild() { return myRocketFactory->createRocket(); }
};

class SimulationBackup
{
public:
    SimulationBackup(Rocket *, double){};
    Rocket *myRocket;
    double price;
};
class SimulationBackupStore
{
private:
    vector<SimulationBackup *> mementoVector;

public:
    SimulationBackup *getMemento()
    {
        if (mementoVector.empty())
        {
            return nullptr;
        }
        else
        {
            SimulationBackup *temp = mementoVector.back();
            mementoVector.pop_back();
            return temp;
        }
    }

    void setMemento(SimulationBackup *m)
    {
        mementoVector.push_back(m);
    }

    SimulationBackup *getAt(int index)
    {
        return mementoVector.at(index);
    }
};

class Simulation
{
public:
    Simulation()
    {
        destinations[0] = new Earth();
        destinations[1] = new LowOrbit();
        destinations[2] = new ISS();

        groundUsers->add(new StarlinkGroundUser());
        groundUsers->add(new StarlinkGroundUser());
        groundUsers->add(new StarlinkGroundUser());

        comNetwork->addStarlinkCollection(groundUsers);
    }

private:
    Destination **destinations = new Destination *[3];
    int backupCount = 0;
    SimulationBackupStore *backupStore = new SimulationBackupStore();
    Rocket *rocket;
    SpaceCraft *spaceCraft;
    Command *buildCommand;
    CommunicationNetwork *comNetwork = new CommunicationNetwork();
    StarlinkCollection *satellites = new StarlinkVector();
    StarlinkCollection *groundUsers = new StarlinkVector();
    double price;
    void setBuild(Command *c)
    {
        buildCommand = c;
    }
    void buildRocket()
    {
        rocket = buildCommand->executeBuild();
    }
    void launch() {}
    void setTripDestination(Destination *d)
    {
        rocket->setDestination(d);
    }
    void makeBackup()
    {
        backupStore->setMemento(new SimulationBackup(rocket, price));
        backupCount++;
    }

    void restore(SimulationBackup *backup)
    {
        this->price = backup->price;
        this->rocket = backup->myRocket;
    }

    void beginCountdown()
    {

        for (int i = 10; i > 0; i--)
        {
            cout << "Launch in " << i << endl;
            sleep(1);
        }

        launch();
    }

    int getMenu(string *menuArr, int arrSize)
    {
        cout << "0 - Go Back" << endl;
        int index = 0;
        for (int i = 0; i < arrSize; i++)
        {
            cout << (i + 1) << " - " << menuArr[i] << endl;
        }
        cout << "Command: ";
        cin >> index;
        cout << endl;
        return index;
    }

public:
    void start()
    {
        random_device rd;
        default_random_engine eng(rd());
        uniform_real_distribution<double> distr(0, 1000);

    MAIN_MENU:
        int choice = 0;
        cout << "MAIN MENU" << endl;
        if (rocket == nullptr)
            cout << "0 - Build Rocket" << endl;
        else
            cout << "0 - Edit Rocket" << endl;

        cout << "1 - Begin Launch" << endl;
        cout << "2 - Restore Previous Simulation" << endl;
        cout << "3 - Exit Simulation" << endl;
        cout << "Command: ";
        cin >> choice;
        cout << endl;

        if (choice == 0)
        {
        BUILD_MENU:
            if (rocket == nullptr)
            {
                RocketFactory *factory;
                SatelliteFactory *satelliteFactory;

                cout << "SELECT ROCKET TYPE" << endl;
                string rocketMenu[4] = {"Falcon 9", "Falcon Heavy"};
                short rocketIndex = getMenu(rocketMenu, 2);

                if (rocketIndex == 0)
                    goto MAIN_MENU;
                else if (rocketIndex == 1)
                {
                    factory = new Falcon9Factory();
                }
                else if (rocketIndex == 2)
                {
                    factory = new FalconHeavyFactory();
                }
                setBuild(new BuildRocket(factory, distr(eng)));
                this->buildRocket();

            CONFIGURE_ROCKET:
                cout << "CONFIGURE ROCKET" << endl;
                string configMenu[2] = {"Add Satellites", "Build Space Craft"};
                short configIndex = getMenu(configMenu, 2);

                if (configIndex == 0)
                    goto MAIN_MENU;
                else if (configIndex == 1)
                {
                    short satelliteCount = 0;
                    cout << "How many satellites? (1-60) ";
                    cin >> satelliteCount;

                    for (int i = 0; i < satelliteCount; i++)
                    {
                        satellites->add(satelliteFactory->createSatellite());
                    }
                    goto CONFIGURE_ROCKET;
                }
                else if (configIndex == 2)
                {
                    SpaceCraftFactory *spaceCraftFactory;
                    cout << "SELECT SPACE CRAFT TYPE" << endl;
                    string typeMenu[2] = {"Dragon", "Crew Dragon"};
                    short typeMenuIndex = getMenu(typeMenu, 2);
                    if (typeMenuIndex == 0)
                        goto CONFIGURE_ROCKET;
                    if (typeMenuIndex == 1)
                    {
                        spaceCraftFactory = new DragonFactory();
                    }
                    else if (typeMenuIndex == 2)
                    {
                        spaceCraftFactory = new CrewDragonFactory();
                    }

                    spaceCraft = spaceCraftFactory->buildSpaceCraft();

                CONFIGURE_SPACECRAFT:
                    string spaceCraftMenu[2] = {"Add Cargo"};
                    short spaceCraftIndex;
                    if (typeMenuIndex == 2)
                    {
                        spaceCraftMenu[1] = "Add Crew";
                        spaceCraftIndex = getMenu(spaceCraftMenu, 2);
                    }
                    else
                    {
                        spaceCraftIndex = getMenu(spaceCraftMenu, 1);
                    }

                    if (spaceCraftIndex == 0)
                        goto CONFIGURE_ROCKET;
                    else if (spaceCraftIndex == 1)
                    {
                        int numAddCargo;
                        cout << "Please enter the number of Cargo to add: ";
                        cin >> numAddCargo;
                        TECrewCollection *tec;
                        for (int i = 0; i < numAddCargo; ++i)
                        {
                            TransportEntityCargo *addCargo = new TransportEntityCargo();
                            tec->add(addCargo);
                        }
                        TransportEntityCollection *temp = spaceCraft->getTEC();
                        spaceCraft->setTEC(tec);
                        delete temp;
                    }
                    else if (spaceCraftIndex == 2)
                    {
                        int numAddCrew;
                        cout << "Please enter the number of Crew to add: ";
                        cin >> numAddCrew;
                        TECrewCollection *tec;
                        for (int i = 0; i < numAddCrew; ++i)
                        {
                            TransportEntityCrew *addCrew = new TransportEntityCrew();
                            tec->add(addCrew);
                        }
                        TransportEntityCollection *temp = spaceCraft->getTEC();
                        spaceCraft->setTEC(tec);
                        delete temp;
                    }
                    goto CONFIGURE_SPACECRAFT;
                }
            }
            else
            {
                cout << "EDIT ROCKET" << endl;
                string editMenu[2] = {"Change destination", "Edit Spacecraft"};
                short editIndex = getMenu(editMenu, 2);

                if (editIndex == 0)
                    goto MAIN_MENU;
                else if (editIndex == 1)
                {
                    string destinationMenu[3] = {"Low Orbit", "International Space Station", "Earth"};
                    short destinationIndex = getMenu(destinationMenu, 3);

                    if (destinationIndex == 0)
                        goto BUILD_MENU;

                    destinationIndex--;

                    setTripDestination(destinations[destinationIndex]);
                }
                else if (editIndex == 2)
                {
                    cout << "EDIT SPACECRAFT" << endl;
                    string editSCMenu[2] = {"Edit Crew", "Edit Cargo"};
                    short editSCIndex = getMenu(editSCMenu, 2);

                    if (editSCIndex == 0)
                        goto BUILD_MENU;
                    else if (editSCIndex == 1)
                    {
                        cout << "CREW OPTIONS" << endl;
                        string cOptions[3] = {"Display Crew", "Add Crew", "Remove Crew"};
                        short cOptionsIndex = getMenu(cOptions, 3);
                        if (cOptionsIndex == 0)
                            goto BUILD_MENU;
                        else if (cOptionsIndex == 1)
                        {
                            spaceCraft->getTEC()->display();
                        }
                        else if (cOptionsIndex == 2)
                        {
                            int numAddCrew;
                            cout << "Please enter the number of Crew to add: ";
                            cin >> numAddCrew;
                            TECrewCollection *tec;
                            for (int i = 0; i < numAddCrew; ++i)
                            {
                                TransportEntityCrew *addCrew = new TransportEntityCrew();
                                tec->add(addCrew);
                            }
                            TransportEntityCollection *temp = spaceCraft->getTEC();
                            spaceCraft->setTEC(tec);
                            delete temp;
                        }
                        else if (cOptionsIndex == 3)
                        {
                            TransportEntityCollection *temp = spaceCraft->getTEC();
                            spaceCraft->setTEC(nullptr);
                            delete temp;
                        }
                        // Edit crew
                    }
                    else if (editSCIndex == 2)
                    {
                        cout << "CARGO OPTIONS" << endl;
                        string cOptions[3] = {"Display Cargo", "Add Cargo", "Remove Cargo"};
                        short cOptionsIndex = getMenu(cOptions, 3);
                        if (cOptionsIndex == 0)
                            goto BUILD_MENU;
                        else if (cOptionsIndex == 1)
                        {
                            spaceCraft->getTEC()->display();
                        }
                        else if (cOptionsIndex == 2)
                        {
                            int numAddCargo;
                            cout << "Please enter the number of Cargo to add: ";
                            cin >> numAddCargo;
                            TECrewCollection *tec;
                            for (int i = 0; i < numAddCargo; ++i)
                            {
                                TransportEntityCargo *addCargo = new TransportEntityCargo();
                                tec->add(addCargo);
                            }
                            TransportEntityCollection *temp = spaceCraft->getTEC();
                            spaceCraft->setTEC(tec);
                            delete temp;
                        }
                        else if (cOptionsIndex == 3)
                        {
                            TransportEntityCollection *temp = spaceCraft->getTEC();
                            spaceCraft->setTEC(nullptr);
                            delete temp;
                        }
                    }
                }
            }

            goto MAIN_MENU;
        }
        else if (choice == 1)
        {

            if (rocket == nullptr)
            {
                cout << "Need to build rocket before launching" << endl;
                goto MAIN_MENU;
            }

            string destinationMenu[3] = {"Low Orbit", "International Space Station", "Earth"};
            short destinationIndex = getMenu(destinationMenu, 3);

            if (destinationIndex == 0)
                goto MAIN_MENU;

            destinationIndex--;

            setTripDestination(destinations[destinationIndex]);

            makeBackup();

            beginCountdown();
        }
        else if (choice == 2)
        {
            short backupIndex = 0;
            cout << "0 - Go Back" << endl;
            cout << "Choose backup:" << endl;
            for (int i = 0; i < backupCount; i++)
            {
                cout << (i + 1) << " - "
                     << "Backup ";
                cout << backupStore->getAt(i)->myRocket->destination->name;
            }

            cin >> backupIndex;

            if (backupIndex == 0)
                goto MAIN_MENU;

            backupIndex--;

            rocket = backupStore->getAt(backupIndex)->myRocket;
            price = backupStore->getAt(backupIndex)->price;
            goto MAIN_MENU;
        }
        else
        {
            return;
        }
    }
};
