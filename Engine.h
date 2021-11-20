#ifndef ENGINE_H
#define ENGINE_H
#include <string>

using namespace std;

class Engine
{
public:
	Engine();
	Engine(Engine* e){name = e->getName();};
	~Engine();
    string getName(){return name;};
private:
    string name = "engine";
};

#endif