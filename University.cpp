#include "University.hpp"

using std::cout;
using std::endl;
using std::move;
using std::string;
using std::unique_ptr;


/***********************************************************************************************
** Description: Default constructor that initalizes data members for name and the Menu object.
***********************************************************************************************/
University::University() {
  setName("");
  peopleMenu = unique_ptr<Menu>(new Menu);
}


/***********************************************************************************************
** Description: Overloaded constructor that initalizes data members for name to the passed
** string, and the Menu object.
***********************************************************************************************/
University::University(string uniName) {
  setName(uniName);
  peopleMenu = unique_ptr<Menu>(new Menu);
}


/***********************************************************************************************
** Description: Takes a unique pointer to a building and adds it the the buildings vector with
** a move statement.
***********************************************************************************************/
void University::addBuilding(unique_ptr<Building> newBuilding) {
  buildings.push_back(move(newBuilding));
}


/***********************************************************************************************
** Description: Takes a unique pointer to a person object and adds it the the people vector with
** a move statement. The Person object's name is added to the menu vector.
***********************************************************************************************/
void University::addPerson(unique_ptr<Person> newPerson) {
  peopleMenu->addMenuItem(newPerson->getName());
  people.push_back(move(newPerson));

}


/***********************************************************************************************
** Description: Displays all values in the people Menu and prompts the user to select a Person,
** then calls the do_work function for the selected person.
***********************************************************************************************/
void University::pickWorker() {

  int choice = peopleMenu->getIntChoiceFromPrompt("Select a person who you'd like to do work:", 1, peopleMenu->getMenuChoices(), true);

  people[choice - 1]->do_work();

}


/***********************************************************************************************
** Description: Loops through the buildings vector and outputs the data members of each object
** to the screen.
***********************************************************************************************/
void University::printBuildingInfo() {

  for (unsigned int i = 0; i < buildings.size(); i++) {

    cout << "Name: " << buildings[i]->getName() << endl;
    cout << "Address: " << buildings[i]->getAddress() << endl;
    cout << "Size: " << buildings[i]->getSize() << " square feet" << endl;
    cout << endl;

  }

}


/***********************************************************************************************
** Description: Loops through the people vector and outputs the data members of each object
** to the screen.
***********************************************************************************************/
void University::printPeople() {

  for (unsigned int i = 0; i < people.size(); i++) {

    cout << "Name: " << people[i]->getName() << endl;
    cout << "Age: " << people[i]->getAge() << endl;
    people[i]->printScore();
    cout << endl << endl;

  }

}


/***********************************************************************************************
** Description: Returns a string representing the University's name.
***********************************************************************************************/
string University::getName() {
  return name;
}


/***********************************************************************************************
** Description: Takes a string and assigns it to the University's name.
***********************************************************************************************/
void University::setName(string uniName) {
  name = uniName;
}
