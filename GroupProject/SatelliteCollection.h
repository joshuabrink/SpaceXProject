/** @file SatelliteCollection.h
 *  @class SatelliteCollection
 *  @headerfile  SatelliteCollection.h "StarlinkCollection.h"
 *  @brief StarlinkCollection is an Aggregate participant in the Iterator design pattern
 *
 *  StarlinkCollection defines an interface for creating an Iterator object
 *
 *  @author Tshegofatso Manthata
 *  @bug No known bugs.
 */
#ifndef SATELLITECOLLECTION_H
#define SATELLITECOLLECTION_H
#include "SatelliteIterator.h"
#include <vector>
using namespace std;
class SatelliteIterator;
class SatelliteCollection
{
protected:
public:
       /** 
 *  @fn     SatelliteCollection() 
 *  @brief  SatelliteCollection default constructor
 *		
 */

    SatelliteCollection(/* args */);
 /** 
 *  @fn         virtual void addList(StarlinkOrbitingSatellite*)=0;
 *  @details addList() is defined as a pure virtual function that will be
 *		    implemented in the concrete Aggregate participant in the Iterator
 *		    design pattern named,SatelliteVector
 *  
 *  @param[in] node , a StarlinkOrbitingSatellite pointer
 *  @return void	
 */ 
    virtual void addList(StarlinkOrbitingSatellite*)=0;
    virtual SatelliteIterator* createIterator()=0;
    virtual vector<StarlinkOrbitingSatellite*> getVector()=0;
   
    ~SatelliteCollection();
};
SatelliteCollection::SatelliteCollection(/* args */)
{
}  


SatelliteCollection::~SatelliteCollection()
{
}


#endif