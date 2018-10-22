#include "Building.hpp"

Building::Building() {
  setAddress("");
  setName("");
  setSize(-1);
}


Building::Building(std::string buildingAddress, std::string buildingName, int sqft) {
  setAddress(buildingAddress);
  setName(buildingName);
  setSize(sqft);
}

std::string Building::getAddress() {
  return address;
}


std::string Building::getName() {
  return name;
}


int Building::getSize() {
  return size;
}


void Building::setAddress(std::string buildingAddress) {
  address = buildingAddress;
}


void Building::setName(std::string buildingName) {
  name = buildingName;
}


void Building::setSize(int sqft) {
  size = sqft;
}
