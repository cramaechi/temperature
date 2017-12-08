//Program uses a class called Temperature to store and output temperatures in
//different degrees.
#include <iostream>
#include <cstdlib>
#include "temperature.h"

using namespace std;

void input(Temperature& temp);
//Fills temp with temperature data either in Kelvin, Celsius, or Fahrenheit.

void output(Temperature& temp);
//Precondition: temp is intialized with valid temperature data.
//Postcondition: Prints out the description of the temperature data stored in
//temp.

int main()
{
    Temperature t;
    input(t);
    output(t);

    return 0;
}

void input(Temperature& temp)
{
    cout<<"\nTemperature Scale choices\n";
    cout<<"-------------------------\n";
    cout<<"(F) = Fahrenheit\n";
    cout<<"(C) = Celsius\n";
    cout<<"(K) = Kelvin\n";
    cout<<"-------------------------\n\n";

    cout<<"Select temeperature scale: "; 
    char tempScale;
    cin>>tempScale;
    cout<<endl;

    cout<<"Enter temperature: ";
    double degrees;
    cin>>degrees;
    cout<<endl;

    if (tempScale == 'F')
        temp.setTempFahrenheit(degrees);
    else if (tempScale == 'C')
        temp.setTempCelsius(degrees);
    else if (tempScale == 'K')
        temp.setTempKelvin(degrees);
}

void output(Temperature& temp)
{
    cout<<"The temperature in degrees Celsius: "<<temp.getTempCelsius()<<"°C\n";   
    cout<<"The temperature in degrees Fahrenheit: "<<temp.getTempFahrenheit()<<"°F\n";   
    cout<<"The temperature in degrees Kelvin: "<<temp.getTempKelvin()<<"°K\n";   
}
