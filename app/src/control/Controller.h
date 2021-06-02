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
#include "../model/Model.h"

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

		string analyseAirQualityInCircularArea(float latitude, float longitude, float radius, const Date& begin, const Date& end);
		// 	How to use : By indicating a geographical position in terms of lagitude and longitude, as well as the radius and the
		//	interval of time for which the Air Quality is searched, the function returns a Map indicating the level of each parameter measured 
		// 	(mapped by its accronym) and a string indicating whether the quality is Good, Medium, Degraded
		//	Bad, Very Bad or Extremely Bad
		//

		vector<Sensor> rankingSensorsSimilarity(const string& sensorId, const Date& begin, const Date& end);
		// 	How to use : Two sensors are considered to be similar if the sum of the differences between their mesures of each 
		//	parameter is close to zero;
		//	Precondition :
		//

		double CompareMeans(const vector<double>& mean1, const vector<double>& mean2) const;
		// 	How to use : Returns the sum of the absolute values of the differences between each of the corresponding values contained in mean1 
		// 	and in mean2
		// 	Precondition : Both vectors should have been initialized and contain the same attributes' position.
		//	

		//------------------------------------------------- Operators overloading
		friend ostream& operator<<(std::ostream&, const Controller&);

		//-------------------------------------------- Constructors - destructor
		Controller();

		virtual ~Controller();

	//------------------------------------------------------------------ PRIVATE
	private:

		//----------------------------------------------------- Private Attributes
		Model model;
};

#endif // Controller_H
