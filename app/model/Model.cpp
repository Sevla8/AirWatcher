/*************************************************************************
                           Model  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Implementation of <Model> (file Model.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include of system files
#include <iostream>
using namespace std;

//------------------------------------------------------ Include of local files
#include "Model.h"
#include "../factory/Reader.h"
#include "Sensor.h"
#include "PrivateUser.h"
#include "../factory/Reader.h"
#include "../factory/Reader.h"
#include "../factory/Reader.h"

//------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Public Methods
// type Model::Method ( Parameters list )
// Algorithm :
//
//{
//} //----- End of Method
list <Sensor>* Model::getSensors()
{
    return listSensors;
} //----- End of getListSensors

list <PrivateUser>* Model::getPrivateUsers()
{
    return listPrivateUsers;
} //----- End of getListPrivateUsers

list <Measurement>* Model::getMeasurements()
{
    return listMeasurements;
} //----- End of getMeasurements

list <Attribute>* Model::getAttributes()
{
    return listAttributes;
} //----- End of getAtributes

list <Cleaner>* Model::getCleaners()
{
    return listCleaners;
}//----- End of getCleaners

list <Provider>* Model::getProviders()
{
    return listProviders;
}//----- End of getProviders




//------------------------------------------------- Operators overloadinf
Model & Model::operator = ( const Model & aModel )
// Algorithm :
//
{
} //----- End of operator =


//-------------------------------------------- constructors - destructor
Model::Model ( const Model & aModel )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Model>" << endl;
#endif
} //----- End of Model (copy constructor)


Model::Model ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling constructor of <Model>" << endl;
#endif
} //----- End of Model


Model::~Model ( )
// Algorithm :
//
{
#ifdef MAP
    cout << "Calling destructor of <Model>" << endl;
#endif

listSensors = Reader::readSensors("../../dataset/sensors.csv");
listPrivateUsers = Reader::readPrivateUsers("../../dataset/users.csv");
listMeasurements = Reader::readMeasurements("../../dataset/measurements.csv");
listAttributes = Reader::readAttributes("../../dataset/attributes.csv");
listCleaners = Reader::readCleaners("../../dataset/cleaners.csv");
listProviders = Reader::readProviders("../../dataset/providers.csv");

} //----- End of ~Model


//------------------------------------------------------------------ PROTECTED

//----------------------------------------------------- Protected Methods

//------------------------------------------------------------------ PRIVATE

//----------------------------------------------------- Private Methods
