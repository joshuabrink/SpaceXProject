/** @file StarlinkCollection.h
 *  @class StarlinkCollection
 *  @headerfile  StarlinkCollection.h "StarlinkCollection.h"
 *  @brief StarlinkCollection is an Aggregate participant in the Iterator design pattern
 *
 *  StarlinkCollection defines an interface for creating an Iterator object
 *
 *  @author Joshua Brink
 *  @bug No known bugs.
 */
#ifndef STARLINKCOLLECTION_H
#define STARLINKCOLLECTION_H
// Aggregate
class StarlinkCommunication;

#include "CollectionIterator.h"
class StarlinkCollection
{
public:
    typedef CollectionIterator<StarlinkCommunication*> iterator;
    /** 
 *  @fn     StarlinkCollection() 
 *  @brief  StarlinkCollection default constructor
 *		
 */
    StarlinkCollection(){};
 /** 
 *  @fn     virtual StarlinkCollection::iterator begin() = 0
 *  @details begin() is defined as a pure virtual function that will be
 *		    implemented in the concrete Aggregate participants in the Iterator
 *		    design pattern named,StarlinkVector and SatrlinkQueue.
 *  
 *  @return StarlinkCollection::iterator		
 */ 
    virtual StarlinkCollection::iterator begin() = 0;
  
 /** 
 *  @fn     virtual StarlinkCollection::iterator end() = 0
 *  @details begin() is defined as a pure virtual function that will be
 *		    implemented in the concrete Aggregate participants in the Iterator
 *		    design pattern named,StarlinkVector and SatrlinkQueue.
 *  
 *  @return StarlinkCollection::iterator		
 */ 
    virtual StarlinkCollection::iterator end() = 0;

 /** 
 *  @fn     virtual void add(StarlinkCommunication *node) = 0;
 *  @details add() is defined as a pure virtual function that will be
 *		    implemented in the concrete Aggregate participants in the Iterator
 *		    design pattern named,StarlinkVector and SatrlinkQueue.
 *  
 *  @param[in] node , a StarlinkCommunication pointer
 *  @return void	
 */ 
    // Adds to the end of collection
    virtual void add(StarlinkCommunication *node) = 0;
 /** 
 *  @fn      virtual void remove() = 0;
 *  @details remove() is defined as a pure virtual function that will be
 *		     implemented in the concrete Aggregate participants in the Iterator
 *		     design pattern named,StarlinkVector and SatrlinkQueue.
 *  
 *  @return void	
 */ 
    // Removes first element
    virtual void remove() = 0;

  /** 
 *  @fn     ~StarlinkCollection() 
 *  @brief  StarlinkCollection destructor
 */
    virtual ~StarlinkCollection(){};
};

#endif