#include "temperature.h"

// CLASS FUNCTION DEFINITIONS GO HERE
Temperature::Temperature() {
 kelvin_ = 0;
}

Temperature::Temperature(double kelvin) {
  kelvin_ = kelvin;
}
 
Temperature::Temperature(double temp, char unit) {
 if (unit == 'F' || unit == 'f') {
 SetTempFromFahrenheit(temp);
 } else if (unit == 'C' || unit == 'c') {
 SetTempFromCelsius(temp);
 } else {
 SetTempFromKelvin(temp);
 }

}

void Temperature::SetTempFromKelvin(double kelvin) {
 kelvin_ = kelvin;
}

void Temperature::SetTempFromCelsius(double celsius) {
 kelvin_ = celsius;
}

void Temperature::SetTempFromFahrenheit(double fahrenheit) {
 kelvin_ = fahrenheit;
}

double Temperature::GetTempAsKelvin() const {
  return kelvin_;
}

double Temperature::GetTempAsCelsius() const {
  
 return kelvin_;
}

double Temperature::GetTempAsFahrenheit() const {
 return kelvin_;
}

string Temperature::ToString(char unit = 'K') const {
  unit = 'K'
  return "";
}