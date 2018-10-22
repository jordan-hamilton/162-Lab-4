#include "University.hpp"

using std::cout;
using std::endl;
using std::move;
using std::string;
using std::unique_ptr;

University::University() {
  setName("");
  peopleMenu = unique_ptr<Menu>(new Menu);
}


University::University(string uniName) {
  setName(uniName);
  peopleMenu = unique_ptr<Menu>(new Menu);
}


void University::addBuilding(unique_ptr<Building> newBuilding) {
  buildings.push_back(move(newBuilding));
}


void University::addPerson(unique_ptr<Person> newPerson) {
  peopleMenu->addMenuItem(newPerson->getName());
  people.push_back(move(newPerson));

}


void University::pickWorker() {

  int choice = peopleMenu->getIntChoiceFromPrompt("Select a person who you'd like to do work:", 1, peopleMenu->getMenuChoices(), true);

  people[choice - 1]->do_work();

}


void University::printBuildingInfo() {

  for (unsigned int i = 0; i < buildings.size(); i++) {

    cout << "Name: " << buildings[i]->getName() << endl;
    cout << "Address: " << buildings[i]->getAddress() << endl;
    cout << "Size: " << buildings[i]->getSize() << " square feet" << endl;
    cout << endl;

  }

}


void University::printPeople() {

  for (unsigned int i = 0; i < people.size(); i++) {

    cout << "Name: " << people[i]->getName() << endl;
    cout << "Age: " << people[i]->getAge() << endl;
    people[i]->printScore();
    cout << endl << endl;

  }

}


string University::getName() {
  return name;
}


void University::setName(string uniName) {
  name = uniName;
}
