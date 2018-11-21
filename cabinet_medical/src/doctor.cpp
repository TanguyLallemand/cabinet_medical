#include "doctor.hpp"

doctor::doctor() : person()
{
    set_speciality();
}

doctor::doctor(string speciality) : person()
{
    set_speciality(speciality);
}

//setters
void doctor::set_speciality(string speciality)
{
    this->_speciality = speciality;
}

void doctor::set_speciality()
{
    std::cin >> this->_speciality;
}

//getters
string doctor::get_speciality()
{
    return _speciality;
}
