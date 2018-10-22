#include "Person.hpp"

using std::rand;
using std::string;

Person::Person() {
  setAge(-1);
  setName("");
}

Person::Person(std::string personName) {
  randomizeAge();
  setName(personName);
}


Person::~Person() {

}


void Person::randomizeAge() {
  setAge(rand() % 93 + 18);
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
