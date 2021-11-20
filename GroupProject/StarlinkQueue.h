/** @file StarlinkQueue.h
 *  @class StarlinkQueue
 *  @headerfile  StarlinkQueue.h "StarlinkQueue.h"
 *  @brief StarlinkQueue is a concrete Aggregate participant in the Iterator design pattern
 *
 *  StarlinkQueue implements the interface that creates an Iterator object
 *
 *  @author Joshua Brink
 *  @bug No known bugs.
 */
#ifndef StarlinkQueue_H
#define StarlinkQueue_H
// Concrete Aggregate
#include <deque>
#include "StarlinkCollection.h"

// class StarlinkQueueIterator;
class StarlinkQueue : public StarlinkCollection
{
    // friend class StarlinkQueueIterator;

private:
    std::deque<StarlinkCommunication *> nodeCollection;
    /* data */
public:
/** 
 *  @fn     StarlinkQueue() 
 *  @brief  StarlinkQueue default constructor
 *		
 */
    StarlinkQueue(){};
  
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
 *  @details remove() removes the first node from the list
 *
 *  @return void	
 */ 
    void remove()
    {
        nodeCollection.pop_front();
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
 *  @fn     ~StarlinkQueue() 
 *  @brief  StarlinkQueue destructor
 *		
 */
    ~StarlinkQueue(){};
};

#endif