/** @file StarlinkVector.h
 *  @class StarlinkVector
 *  @headerfile  StarlinkVector.h "StarlinkVector.h"
 *  @brief StarlinkVector is a concrete Aggregate participant in the Iterator design pattern
 *
 *  StarlinkVector implements the interface that creates an Iterator object
 *
 *  @author Joshua Brink
 *  @bug No known bugs.
 */
#ifndef StarlinkVector_H
#define StarlinkVector_H
// Concrete Aggregate
#include <vector>
#include "StarlinkCollection.h"

// class StarlinkVectorIterator;
class StarlinkVector : public StarlinkCollection
{

private:
    std::vector<StarlinkCommunication *> nodeCollection;
    /* data */
public:
       /** 
 *  @fn     StarlinkVector() 
 *  @brief  StarlinkVector default constructor
 *		
 */
    StarlinkVector(){};
   /** 
 *  @fn     void add(StarlinkCommunication *node) 
 *  @details add() inserts a newnode onto the back of the list
 * 
 *
 *  @param[in] newnode , a StarlinkCommunication pointer
 *  @return void	
 */ 
    void add(StarlinkCommunication *newNode)
    {
        nodeCollection.push_back(newNode);
        // StarlinkCollection::add(newNode);
    }
     /** 
 *  @fn     void remove() 
 *  @details remove() removes the last node from the list
 *
 *  @return void	
 */ 
    void remove()
    {
        nodeCollection.pop_back();
        // StarlinkCollection::remove();
    }
         /** 
 *  @fn     StarlinkCollection::iterator begin()
 *  @details begin() returns the first node in the list
 *
 *  @return StarlinkCollection::iterator	
 */ 
    StarlinkCollection::iterator begin()
    {
        return iterator(&this->nodeCollection.front());
    };
     /** 
 *  @fn     StarlinkCollection::iterator end()
 *  @details begin() returns the last node in the list
 *
 *  @return StarlinkCollection::iterator	
 */ 
    StarlinkCollection::iterator end()
    {
        return iterator(&this->nodeCollection.back());
    };
          /** 
 *  @fn     ~StarlinkVector() 
 *  @brief  StarlinkVector destructor
 *		
 */
    ~StarlinkVector(){};
};

#endif