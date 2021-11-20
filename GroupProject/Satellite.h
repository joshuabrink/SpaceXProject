/** @file Satellite.h
 *  @class Satellite
 *
 *  @brief Satellite is a prototype participant in the Prototype design pattern
 *  @brief Satellite is an aggregate participant the iterator design pattern
 *
 *  Satellite defines an interface for cloning.
 *  Satellite also defines an interface for creating an iterator object.
 *
 *  @author Tshegofatso Manthata
 *  @bug No known bugs.
 */

//#ifndef SATELLITE_H
//#define SATELLITE_H
//#include <iostream>
//#include <vector>
//using namespace std;
////#include "SatelliteIterator.h"
////#include "CommuncationNode.h"
//#include "Falcon9.h"
//
//class Falcon9;
//class SatelliteIterator;
//
//class Satellite
//{
//    friend class SatelliteIterator;
//private:
//  
//
//protected:
//    bool isLaunched;
//    int id;
//
//public:
/** 
 *  @fn     Satellite()
 *  @brief  Satellite constructor
 *		
 */
    //Satellite(/* args */);

/** 
 *  @fn    	bool launchSatellite(FalconRockets *transport)
 *  @brief 	The LaunchSatellite() checks if the rocket that the satellites are
 *  		attached to has launched. If the rocket has been launched “true” ** 
 *		will be returned if not “false” will be returned. 
 *
 *  @param[in] transport, a FalconRockets pointer
 *  @return bool
 */
   /* bool launchSatellite(Falcon9 *transport);*/

/** 
 *  @fn     virtual Satellite *clone() = 0
 *  @brief  clone() is defined as a pure virtual function that will be 	   
 *		implemented in the concrete Prototype participant in the prototype  
 *		design pattern named,StarlinkOrbitingSatellite.
 *
 *  @return Satellite* , a Satellite pointer
 */
   /* virtual Satellite *clone() = 0;*/

/** 
 *  @fn     virtual SatelliteIterator *createIterator() = 0
 *  @brief  createIterator() is defined as a pure virtual function that will be
 *		implemented in the concrete Aggregate participant in the iterator 
 *		design pattern named,StarlinkOrbitingSatellite.
 *		
 *
 *  @return SatelliteIterator* , a SatelliteIterator pointer
 */
   /* virtual SatelliteIterator *createIterator() = 0;*/

/** 
 *  @fn     virtual void addList(Satellite*)=0
 *  @brief  addList() is defined as a pure virtual function that will be
 *		implemented in the concrete Aggregate participant in the iterator 
 *		design pattern named,StarlinkOrbitingSatellite.
 *		
 *  @param[in] Satellite*, a Satellite pointer
 *  @return void.
 */
  /*  virtual void addList(Satellite*)=0;*/
/** 
 *  @fn     int getid()
 *  @brief  get function that returns a unique Id for the specified satellite
 *		
 *  @return int, an integer
 */ 
    /*int getid();*/
/** 
 *  @fn     ~Satellite()
 *  @brief  Satellite destructor
 *		
 */
  /*  ~Satellite();
};

#endif*/