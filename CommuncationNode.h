#ifndef COMMUNCATIONNODE_H
#define COMMUNCATIONNODE_H
// Collegue AND Node

class CommuncationNode
{

public:
    const int id;

    CommuncationNode(const int id) : id(id){};
    virtual ~CommuncationNode(){};
    virtual bool operator==(const CommuncationNode &rhs) const
    {
        return id == rhs.id;
    };
};

#endif