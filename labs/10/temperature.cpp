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
 kelvin_ = celsius + 273.15;
}

void Temperature::SetTempFromFahrenheit(double fahrenheit) {
 kelvin_ = (5.0 * (fahrenheit - 32) / 9) + 273.15;
}

double Temperature::GetTempAsKelvin() const {

  return kelvin_;
}

double Temperature::GetTempAsCelsius() const {
  kelvin_ = kelvin_ + 273.15;
 return kelvin_;
}

double Temperature::GetTempAsFahrenheit() const {
 kelvin_ = ((kelvin_ * 9) / 5) + 32;
 return kelvin_;
}

string Temperature::ToString(char unit) const {
  unit = 'K';
  return "";
}