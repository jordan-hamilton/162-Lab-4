#include "University.hpp"

using std::cout;
using std::endl;
using std::string;

University::University() {
  setName("");
}


University::University(string uniName) {
  setName(uniName);
}


void University::printBuildingInfo() {
}


void University::printPeople() {

  for (int i = 0; i < people.size(); i++) {

    cout << "Name: " << people[i]->getName() << endl;
    cout << "Age: " << people[i]->getAge() << endl;
    people[i]->printScore() << endl;
    cout << endl;

  }

}


string University::getName() {
  return name;
}


void University::setName(string uniName) {
  name = uniName;
}
