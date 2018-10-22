#include "Person.hpp"

using std::rand;
using std::string;


/***********************************************************************************************
** Description: Default constructor that initalizes data members for age and name.
***********************************************************************************************/
Person::Person() {
  setAge(-1);
  setName("");
}


/***********************************************************************************************
** Description: Overloaded constructor that takes a string for the name, and randomizes the age.
***********************************************************************************************/
Person::Person(std::string personName) {
  randomizeAge();
  setName(personName);
}


/***********************************************************************************************
** Description: Virtual destructor for Person objects.
***********************************************************************************************/
Person::~Person() {

}


/***********************************************************************************************
** Description: Sets the age data member to a random integer between 18 and 110.
***********************************************************************************************/
void Person::randomizeAge() {
  setAge(rand() % 93 + 18);
}


/***********************************************************************************************
** Description: Returns an integer representing the person's age.
***********************************************************************************************/
int Person::getAge() {
  return age;
}


/***********************************************************************************************
** Description: Returns a string representing the person's name.
***********************************************************************************************/
std::string Person::getName() {
  return name;
}


/***********************************************************************************************
** Description: Takes an integer and assigns the person's age.
***********************************************************************************************/
void Person::setAge(int personAge) {
  age = personAge;
}


/***********************************************************************************************
** Description: Takes a string and assigns the person's name.
***********************************************************************************************/
void Person::setName(string personName) {
  name = personName;
}
