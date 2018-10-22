#include "Person.hpp"

using std::string;

Person::Person() {
  setAge(-1);
  setName("");
}

Person::Person(int personAge, std::string personName) {
  setAge(personAge);
  setName(personName);
}


Person::~Person() {

}


int Person::getAge() {
  return age;
}


std::string Person::getName() {
  return name;
}


void Person::setAge(int personAge) {
  age = personAge;
}


void Person::setName(string personName) {
  name = personName;
}
