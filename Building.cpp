#include "Building.hpp"


/***********************************************************************************************
** Description: Default constructor that initalizes data members for address, name and size.
***********************************************************************************************/
Building::Building() {
  setAddress("");
  setName("");
  setSize(-1);
}


/***********************************************************************************************
** Description: Overloaded constructor that takes a string for the building address, a string
** for the building name, and an int for the building's size, then assigns these values to
** data members.
***********************************************************************************************/
Building::Building(std::string buildingAddress, std::string buildingName, int sqft) {
  setAddress(buildingAddress);
  setName(buildingName);
  setSize(sqft);
}


/***********************************************************************************************
** Description: Returns a string representing the building's address.
***********************************************************************************************/
std::string Building::getAddress() {
  return address;
}


/***********************************************************************************************
** Description: Returns a string representing the building's name.
***********************************************************************************************/
std::string Building::getName() {
  return name;
}


/***********************************************************************************************
** Description: Returns an integer representing the building's size in square feet.
***********************************************************************************************/
int Building::getSize() {
  return size;
}


/***********************************************************************************************
** Description: Takes a string and assigns the building's address.
***********************************************************************************************/
void Building::setAddress(std::string buildingAddress) {
  address = buildingAddress;
}


/***********************************************************************************************
** Description: Take a string and assigns the building's name.
***********************************************************************************************/
void Building::setName(std::string buildingName) {
  name = buildingName;
}


/***********************************************************************************************
** Description: Takes an integer and assigns the building's size.
***********************************************************************************************/
void Building::setSize(int sqft) {
  size = sqft;
}
