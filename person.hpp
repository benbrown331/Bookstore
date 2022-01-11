/* 
************************
Benjamin Brown
Programming Assignment 2
Instructor: Yvon Feaster
CPSC 1020
Due: 6/14/2021
************************
*/

#ifndef PERSON_H
#define PERSON_H
#include "address.hpp"

using namespace std;

class Person
{
  private:
    string first;
    string last;
    Address address;


  public:
    //Constructors
    Person();
    Person(string f, string l, Address a);

    //Destructor
    ~Person();

    //Setters
    void setName(string, string);

    /*other setters*/
    void setFirst(string);
    void setLast(string);
    void setStrNum(Address);
    void setStreet(Address);
    void setCity(Address);
    void setState(Address);
    void setZip(Address);

    string getFirst();
    string getLast();

    int getStrNum();
    string getStreet();
    string getCity();
    string getState();
    int getZip();

    /*
    this function will print out person
    data and then call the print address function to
    print the address information.
    It is also called by the printBook
    function
    */

    void printPerson(ofstream&);

};

#endif