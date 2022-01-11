/* 
************************
Benjamin Brown
Programming Assignment 2
Instructor: Yvon Feaster
CPSC 1020
Due: 6/14/2021
************************
*/

#include "address.hpp"
#include "person.hpp"

using namespace std;

    Person::~Person() {}

    Person::Person(string fName, string lName, Address Addy) {
        first=fName;
        last=lName;
        address=Addy;
    }

    //Setters
    void Person::setName(string fName, string lName) {
        first=fName;
        last=lName;
    }

    /*other setters*/
    void Person::setFirst(string fName) {
      first=fName;
    }
    void Person::setLast(string lName) {
      last=lName;
    }
    void Person::setStrNum(Address Addy) {
      address.setStreetNum(Addy.getSNum());
    }
    void Person::setStreet(Address Addy) {
      address.setStreetName(Addy.getStreet());
    }
    void Person::setCity(Address Addy) {
      address.setCity(Addy.getCity());
    }
    void Person::setState(Address Addy) {
      address.setState(Addy.getState());
    }
    void Person::setZip(Address Addy) {
      address.setZip(Addy.getZip());
    }

    string Person::getFirst() {
      return first;
    }
    string Person::getLast() {
      return last;
    }

    int Person::getStrNum() {
      return address.getSNum();
    }

    string Person::getStreet() {
      return address.getStreet();
    }
    string Person::getCity() {
      return address.getCity();
    }
    string Person::getState() {
      return address.getState();
    }
    int Person::getZip() {
      return address.getZip();
    }

    void Person::printPerson(ofstream& file) {
      file << first << " " << last << endl;
      address.printAddress(file);
    }
