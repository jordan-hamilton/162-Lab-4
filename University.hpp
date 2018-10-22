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
#include "Person.hpp"


class University {

  public:
    University();
    University(std::string uniName);
    void printBuildingInfo();
    void printPeople();
    std::string getName();
    void setName(std::string uniName);

  private:
    std::string name;
    std::vector<std::unique_ptr<Building>> buildings;
    std::vector<std::unique_ptr<Person>> people;

};

#endif
