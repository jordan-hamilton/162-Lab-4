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

  for (int i = 0; i < buildings.size(); i++) {

    cout << "Name: " << buildings[i]->getName() << endl;
    cout << "Address: " << buildings[i]->getAddress() << endl;
    cout << "Size: " << buildings[i]->getSize() << " square feet" << endl;
    cout << endl;

  }

}


void University::printPeople() {

  for (int i = 0; i < people.size(); i++) {

    cout << "Name: " << people[i]->getName() << endl;
    cout << "Age: " << people[i]->getAge() << endl;
    people[i]->printScore();
    cout << endl;

  }

}


string University::getName() {
  return name;
}


void University::setName(string uniName) {
  name = uniName;
}
