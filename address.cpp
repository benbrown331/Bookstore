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


using namespace std;


    Address::Address(int sNum, string sName, string c, string st, int z, string webAd) {
        streetNum=sNum;
        streetName=sName;
        city=c;
        state=st;
        zip=z;
        webAddy=webAd;
    }

    //Setters to set private data
    void Address::setStreetNum(int sNum) {
      streetNum=sNum;
    }
    void Address::setStreetName(string sName) {
      streetName=sName;
    }
    void Address::setCity(string c) {
      city=c;
    }
    void Address::setState(string st) {
      state=st;
    }
    void Address::setZip(int z) {
      zip=z;
    }
   
    //Getters to retrieve private data 
    int Address::getSNum() {
      return streetNum;
    }
    string Address::getStreet() {
      return streetName;
    }
    string Address::getCity() {
      return city;
    }
    string Address::getState() {
      return state;
    }
    int Address::getZip() {
      return zip;
    }

    void Address::printAddress(ofstream& out) {
      out << Address::getSNum() << " " << Address::getStreet() << endl <<
      Address::getCity() << ", " << Address::getState() << " " <<  Address::getZip() << endl << "\n";
    }

