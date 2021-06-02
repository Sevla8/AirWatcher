/*************************************************************************
						   Controller  -  description
							 -------------------
	beginning			: 	$07/05/2021$
	copyright			: 	(C) $2021$ by $B3204 and B3025 $
	e-mail			   	: 	$adrien.jaillet@insa-lyon.fr / william.jean@insa-lyon.fr / matheus.de-barros-silva@insa-lyon.fr
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
//	This class uses the data
//
//------------------------------------------------------------------------

class Controller {
	//----------------------------------------------------------------- PUBLIC
	public:
		//----------------------------------------------------- Public methods
		const Model& getModel();
		// 	How to use : Returns a reference to the Controller's attribute model
    	//
    	// Precondition :
		//

		string analyseAirQualityInCircularArea(float latitude, float longitude, float radius, const Date& begin, const Date& end);
		// How to use :
    	//
		// Precondition :
    	//

		double CompareMeans(const vector<double>& mean1, const vector<double>& mean2) const;
		// 	How to use : Returns the sum of the absolute values of the differences between each of the corresponding values contained in mean1
		// 	and in mean2
		// 	Precondition : Both vectors should have been initialized and contain the same attributes' position.
		//

		map<string, float> analyseAirQualityInCircularArea(float, float, float, const Date&, const Date&, bool isPeriod);
		// 	How to use : By indicating a geographical position in terms of lagitude and longitude, as well as the radius and the
		//	interval of time for which the Air Quality is searched, the function returns a Map indicating the level of each parameter measured
		// 	(mapped by its accronym) and a string indicating whether the quality is Good, Medium, Degraded
		//	Bad, Very Bad or Extremely Bad
		//


		vector<Sensor> rankingSensorsSimilarity(const string& sensorId, const Date& begin, const Date& end);
		// 	How to use : Two sensors are considered to be similar if the sum of the differences between their mesures of each
		//	parameter is close to zero;

      	map<string, float> CalculateMeans(const vector<Measurement>& measurements) const;
    	// 	How to use : For a given Measurements' vector, this function returns a map containing the mean of each type of measure
    	//
		// Precondition :
    	//

		string CalculateAirQualityValue(const map<string, float>& mapMeans) const;
    	// 	How to use :	Accordingly to values in mapMeans this function calculates whether the quality is Good, Medium, Degraded
		//	Bad, Very Bad or Extremely Bad
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
