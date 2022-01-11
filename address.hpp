/* 
************************
Benjamin Brown
Programming Assignment 2
Instructor: Yvon Feaster
CPSC 1020
Due: 6/14/2021
************************
*/

#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iostream>

using namespace std;

class Address
{
  private:
    int streetNum;
    string streetName;
    string city;
    string state;
    int zip;
    string webAddy;
    

  public:

    Address(int sNum=100, string sName="Charles", string c="Columbia", string st="SC", int z=29072, 
    string webAd="ben.com");
    void setStreetNum(int sNim);
    void setStreetName(string sName);
    void setCity(string c);
    void setState(string st);
    void setZip(int z);
   

    int getSNum();
    string getStreet();
    string getCity();
    string getState();
    int getZip();

    /*
    this function takes in a refrence to the output
    file, and prints the rest of the data
    to the output file that printPerson did
    not
    */

    void printAddress(ofstream& out);
};

#endif