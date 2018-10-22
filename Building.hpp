/*********************************************************************
** Description: Specification file for the Building class.
*********************************************************************/

#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <string>

class Building {

  private:
    std::string address, name;
    int size;

  public:
    Building();
    Building(std::string buildingAddress, std::string buildingName, int sqft);
    std::string getAddress();
    std::string getName();
    int getSize();
    void setAddress(std::string buildingAddress);
    void setName(std::string buildingName);
    void setSize(int sqft);

};

#endif
