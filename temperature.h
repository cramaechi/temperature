/*-------------------------------------------------------------------------
Description: This is the header file tree.h. This is the interface for the
class Temperature. Values of this type store temperature in degress Kelvin.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
-------------------------------------------------------------------------*/

class Temperature
{
public:
	void setTempKelvin(double newTempKelvin);
	//Precondition: newTempKelvin >= 0  && newTempKelvin <= 373.15
	//Postcondition: The variable tempKelvin is set to the value of
    //newTempKelvin.

	void setTempFahrenheit(double newTempFahrenheit);
	//Precondition: newTempFahrenheit >= -459.67 && <= 212
	//Postcondition: The variable tempFahrenheit is initialized to the value of
    //newTempFahrenheit.

	void setTempCelsius(double newTempCelsius);
	//Precondition: newTempCelsius >= -273.15 && <= 100
	//Postcondition: The variable tempCelsius is initialized to the value of
    //newTempCelsius.

	double getTempKelvin();
	//Returns the value of tempKelvin.

	double getTempFahrenheit();
	//Converts the value of tempKelvin to fahrenheit degrees and returns its
    //value.

	double getTempCelsius();
	//Converts the value of tempKelvin to celsius degrees and returns its 
    //value.
private:
	double tempKelvin;
};
