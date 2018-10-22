#include "Student.hpp"

using std::cout;
using std::endl;
using std::rand;

void Student::do_work() {
  int work = rand() % 9 + 2;
  cout << this->getName() << "did " << work << "hours of homework." << endl;
}


void Student::printScore() {
  cout << "GPA: " << getGPA();
}


double Student::getGPA() {
  return GPA;
}


void Student::setGPA(double studentGPA) {
  GPA = studentGPA;
}
