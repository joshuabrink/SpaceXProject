#include "StarlinkOrbitingSatellite.h"
/** 
 * @author      Tshegofatso Manthata
 * @class       StarlinkOrbitingSatellite
 */
StarlinkOrbitingSatellite::StarlinkOrbitingSatellite(/* args */)
{
}
/**
 * @fn          StarlinkOrbitingSatellite::Communicate(string message,string communication)
 * @brief       This is the Communicate() function
 * @todo        Output the message 
 * @param[out] message //string message that is going to be displayed
 * @param[in] communication // a string communication to show what kind of device is being communicated with 
 * @return      void 
 */
void  StarlinkOrbitingSatellite::Communicate(string message,string communication)
{
    if(communication=="radio waves")
    cout<<"Satellite is communicating with a ground user: "<<message<<endl;
    else{
            cout<<"Satellite is communicating with another Satellite: "<<message<<endl;
    }
}

/**
 * @fn          Satellite* StarlinkOrbitingSatellite::clone()
 * @brief       This is the clone() function
 * @todo        create new StarlinkOrbitingSatellite object
 * @return      Satellite*
 */

Satellite* StarlinkOrbitingSatellite::clone()
{
    return new StarlinkOrbitingSatellite();
} 
/**
 * @fn          SatelliteIterator* StarlinkOrbitingSatellite::createIterator()
 * @brief       This is the ConcreteSatelliteIterator() function
 * @todo        create new ConcreteSatelliteIterator() object
 * @return      SatelliteIterator*
 */
SatelliteIterator* StarlinkOrbitingSatellite::createIterator()
{
    return new ConcreteSatelliteIterator();
}
StarlinkOrbitingSatellite::~StarlinkOrbitingSatellite()
{
}
void StarlinkOrbitingSatellite::addList(Satellite* s)
{
    if(nullptr==nullptr)
    {

    }

}
