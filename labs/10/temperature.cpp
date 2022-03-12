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
  return kelvin_ - 273.15;
}

double Temperature::GetTempAsFahrenheit() const {
  return (((kelvin_ - 273.15) * 9.0) / 5) + 32;
}

string Temperature::ToString(char unit) const {
  std::stringstream ss;
  if (unit == 'K' || unit == 'k') {
    ss << std::fixed << std::setprecision(2) << kelvin_ << " " << "Kelvin";
  } else if (unit == 'C' || unit == 'c') {
    ss << std::fixed << std::setprecision(2) <<
    kelvin_ - 273.15;
    ss << " " << "Celsius";
  } else if (unit == 'F' || unit == 'f') {
    ss << std::fixed << std::setprecision(2) <<
    (((kelvin_ - 273.15) * 9.0) / 5) + 32;
    ss << " " << "Fahrenheit";
  } else {
    ss << "Invalid Unit";
  }
  return ss.str();
}
