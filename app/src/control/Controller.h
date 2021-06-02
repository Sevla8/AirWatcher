/*************************************************************************
                           Controller  -  description
                             -------------------
    beginning                : $07/05/2021$
    copyright            : (C) $2021$ by $B3204 and B3025 $
    e-mail               : $adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
                            brandon.da-silva-alves@insa-lyon.fr / jade.prevot@insa-lyon.fr$
*************************************************************************/

//---------- Interface of <Controller> (file Controller.h) ----------------
#ifndef Controller_H
#define Controller_H

//--------------------------------------------------- Used Interfaces
#include <string>
#include <vector>
#include <map>
#include "../model/Model.h"

//------------------------------------------------------------- Constants

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role of <Controller>
//
//
//------------------------------------------------------------------------

class Controller {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		const Model& getModel();
    	// How to use :
    	//
    	// Precondition :
    	//

		map<string, float> analyseAirQualityInCircularArea(float, float, float, const Date&, const Date&, bool isPeriod);
    	// How to use :
    	//
		// Precondition :
    	//

		vector<Sensor> rankingSensorsSimilarity(const string& sensorId, const Date& begin, const Date& end);
    	// How to use :
    	//
		// Precondition :
    	//

		double CompareMeans(const vector<double>& mean1, const vector<double>& mean2) const;
    	// How to use :
    	//
		// Precondition :
    	//

      	map<string, float> CalculateMeans(const vector<Measurement>& measurements) const;
    	// How to use :
    	//
		// Precondition :
    	//

		string CalculateAirQualityValue(const map<string, float>& mapMeans) const;
    	// How to use :
    	//
		// Precondition :
    	//

		//------------------------------------------------- Operators overloading
		friend ostream& operator<<(std::ostream&, const Controller&);
    	// How to use :
    	//
    	// Precondition :
    	//

		//-------------------------------------------- Constructors - destructor
		Controller();
		// How to use : Constructs a Controller
    	//
    	// Precondition :
    	//

		virtual ~Controller();
		// How to use :
    	//
    	// Precondition :
    	//


	//------------------------------------------------------------------ PROTECTED
	protected:
		//----------------------------------------------------- Protected Methods

		//----------------------------------------------------- Protected Attributes

	//------------------------------------------------------------------ PRIVATE
	private:
		//----------------------------------------------------- Private Methods

		//----------------------------------------------------- Private Attributes
		Model model;
};

//-------------------------------- Other definitions depending on <Controller>

#endif // Controller_H
