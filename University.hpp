/*********************************************************************
** Description: Specification file for the University class.
*********************************************************************/

#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "Building.hpp"
#include "Menu.hpp"
#include "Person.hpp"

class University {

  public:
    University();
    University(std::string uniName);
    void addBuilding(std::unique_ptr<Building> newBuilding);
    void addPerson(std::unique_ptr<Person> newPerson);
    void pickWorker();
    void printBuildingInfo();
    void printPeople();
    void updateMenu(std::string menuItem);
    std::string getName();
    void setName(std::string uniName);



  private:
    std::string name;
    std::unique_ptr<Menu> peopleMenu;
    std::vector<std::unique_ptr<Building>> buildings;
    std::vector<std::unique_ptr<Person>> people;

};

#endif
