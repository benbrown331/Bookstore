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
#include "bookstore.hpp"

using namespace std;

bool argsCheck(int argc);
bool inputCheck(ifstream& inputFile);
bool outputCheck(ofstream& outputFile);


int main(int argc, char const *argv[]) {

    //Call check args to make sure correct number of arguments entered
    if (argsCheck(argc)==false) {
        exit(0);
    }

    //create and Open input file
    ifstream inputFile;
    inputFile.open(argv[1]);

    //check for correct input file open

    if (inputCheck(inputFile)==false) {
        exit(0);
    }

    //open output file
    ofstream outputFile;
    outputFile.open(argv[2]);
    //check for proper opening

    if (outputCheck(outputFile)==false) {
        exit(0);
    }

    //use readInventory to read file data into bookstore object

    BookStore thisBook(inputFile);

    //close input file
    inputFile.close();

    //call print inventory function
    //thisBook.printInventory(outputFile);

    //close output file
    outputFile.close();

    return 0;


}

/*
This function takes in the argc int
as a parameter, and checks to see
if the correct number of arguments were 
entered, returning a boolean value
*/

bool argsCheck(int argc) {

    if (argc<3) {

        cout <<"Not enough command line arguments. Enter executable," 
        << "input file, output file" << endl;
        return false;
    }

    else if (argc>3) {

        cout <<"Not enough command line arguments. Enter executable," 
        << "input file, output file" << endl;
        return false;

    }
    else {
        return true;
    }
}

/*
This function takes in the input file
as a parameter, checks to see if it was
opened properly, and returns a boolean 
value
*/

bool inputCheck(ifstream& inputFile) {

    if (!inputFile.is_open()) {
        cout << "Input file was not opened successfully.\n";
        inputFile.close();
        return false;
    }
    else {
        return true;
    }

}

/*
This function takes in the ouput file
as a parameter, checks to see if it was
opened properly, and returns a boolean 
value
*/

bool outputCheck(ofstream& outputFile) {

    if (!outputFile.is_open()) {
        cout << "Output file was not opened successfully.\n";
        outputFile.close();
        return false;
    }
    else {
        return true;
    }

}

/* Parameters: string for file name
Returns vector of Persons
This function takes in a file name, opens the input data,
and then processes the data into the
Address and Person objectss

vector<Person> readData(string name) {



    //create local variables to store input.

    string fName;
    string lName;
    int streetNum;
    string streetName;
    string city;
    string state;
    int zip;

    vector<Person>perVector;

    while(!inputFile.eof()) {
        
        //Read input file data into appropriate variables
        inputFile >> fName >> lName >> streetNum;
        inputFile >> streetName >> city >> state >> zip;

        //Pass address data into address object

        Address Addy(streetNum, streetName, city, state, zip);


        perVector.push_back(Person(fName, lName, Addy));
    }
    inputFile.close();
    return perVector;
    
}
*/