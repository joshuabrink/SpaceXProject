#include <iostream>
#include <random>
#include <vector>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

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

class Satellite
{
};

class StarlinkCommunication
{
};
class StarlinkCollection
{
public:
    typedef CollectionIterator<StarlinkCommunication *> iterator;
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
    void setDestination(Destination *d)
    {
        destination = d;
    }
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
class SatelliteFactory {};
class Command
{
private:
public:
    Command() {}
    virtual Rocket *executeBuild() { return nullptr; };
};

class Build : public Command
{
private:
    RocketFactory *myRocketFactory = new RocketFactory();

public:
    Build() {}
    Build(RocketFactory *, double) {}
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
    }

private:
    Destination **destinations = new Destination *[3];
    int backupCount = 0;
    SimulationBackupStore *backupStore = new SimulationBackupStore();
    Rocket *rocket;
    Command *buildCommand;
    double price;
    void setBuild(Command *c)
    {
        buildCommand = c;
    }
    void BuildRocket()
    {
        rocket = buildCommand->executeBuild();
    }
    void Launch() {}
    void setTripDestination(Destination *d)
    {
        rocket->setDestination(d);
    }
    void *makeBackup()
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

        for (int i = 0; i < 10; i++)
        {
            cout << "Launch in " << i << endl;
            sleep(1);
        }

        Launch();
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
                Command *buildRocket = new Build(factory, distr(eng));
                setBuild(buildRocket);
                BuildRocket();

                cout << "CONFIGURE ROCKET" << endl;
                string configMenu[3] = {"Add Satellites", "Add Space Craft", "Set Cost"};
                short configIndex = getMenu(configMenu, 3);

                if (configIndex == 0)
                    goto BUILD_MENU;
                else if (configIndex == 1)
                {
                    short satelliteCount = 0;
                    cout << "How many satellites? (1-60) ";
                    cin >> satelliteCount;
                    for (int i = 0; i < satelliteCount; i++)
                    {
                    }
                }
                else if (configIndex == 2)
                {
                    factory = new FalconHeavyFactory();
                }
            }
            else
            {
                cout << "EDIT ROCKET" << endl;
                string editMenu[3] = {"Change destination", "Edit Spacecraft", "Change Rocket Type"};
                short editIndex = getMenu(editMenu, 3);

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
                    cout << "EDIT SPACE CRAFT" << endl;
                    string editSCMenu[4] = {"Edit Satellites", "Edit Crew", "Edit Cargo", "Change Space Craft Type"};
                    short editSCIndex = getMenu(editSCMenu, 4);

                    if (editSCIndex == 0)
                        goto BUILD_MENU;
                    else if (editSCIndex == 1)
                    {
                        // Edit satellites
                    }

                    else if (editSCIndex == 2)
                    {
                        // Edit crew
                    }

                    else if (editSCIndex == 3)
                    {
                        // Edit cargo
                    }
                    else if (editSCIndex == 4)
                    {
                        // Edit space craft
                    }
                }
                else
                {
                    // change rocket type
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
            cout << "0 - Go Back" << endl;

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