/*---------------------------------------------------------------------------
This is the implementation for the class Temperature. The interface is in the
file temperature.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
---------------------------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include "temperature.h"

using namespace std;

void Temperature::setTempKelvin(double newTempKelvin)
{
    if (newTempKelvin >= 0 && newTempKelvin <= 373.15)
        tempKelvin = newTempKelvin;
    else
    {
        cout<<"Invalid argument found in mutator function: Aborting program.";
        exit(1);
    }
}

void Temperature::setTempFahrenheit(double newTempFahrenheit)
{
    if (newTempFahrenheit >= -459.67 && newTempFahrenheit <= 212)
        tempKelvin = 273.15 + ((newTempFahrenheit - 32)* (5/9));
    else
    {
        cout<<"Invalid argument found in mutator function: Aborting program.";
        exit(1);
    }
}

void Temperature::setTempCelsius(double newTempCelsius)
{
    if (newTempCelsius >= -273.15 && newTempCelsius <= 100)
        tempKelvin = tempKelvin + 273.15;
    else
    {
        cout<<"Invalid argument to mutator function: Aborting program.";
        exit(1);
    }
}

double Temperature::getTempKelvin()
{
    return tempKelvin;
}

double Temperature:: getTempFahrenheit()
{
    return (((tempKelvin-273.15)*9)+160)/5;
}

double Temperature::getTempCelsius()
{
    return tempKelvin-273.15;
}
