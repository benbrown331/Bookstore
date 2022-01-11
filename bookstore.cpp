/* 
************************
Benjamin Brown
Programming Assignment 2
Instructor: Yvon Feaster
CPSC 1020
Due: 6/14/2021
************************
*/

#include "bookstore.hpp"
#include "person.hpp"

using namespace std;

void BookStore::setFiction(Book& fBook) {
    fiction.push_back(fBook);
}
void BookStore::setNonFiction(Book& nfBook) {
    nFiction.push_back(nfBook);
}
void BookStore::setChild(Book& children) {
    child.push_back(children);
}

void BookStore::readInventory(ifstream& inputFile) {

    //declare local variables to read into

    //book variables

    Person author;
    string title;
    int ISBN;
    string catagory;

    //person variables
    string first;
    string last;
    Address address;

    //address variables
    int streetNum;
    string streetName;
    string city;
    string state;
    int zip;
    string webAddy;

    //read data from input into variables until EOF

    while (!inputFile.eof()) {

    inputFile >> first >> last >> streetNum >> streetName >> city
    >> state >> zip >> webAddy >> catagory >> ISBN;

    Book thisBook(Person(first, last, Address(streetNum, streetName, city, state, zip, webAddy)),title, ISBN, catagory);

    //call addBook to add to correct vector

    addBook(thisBook);

    }

}

void BookStore::addBook(Book& aBook) {


    if (aBook.getCatagory()=="Fiction") {

        setFiction(aBook);

    }

    else if (aBook.getCatagory()=="NonFiction") {
        
        setNonFiction(aBook);

    }

    else {
        
        setChild(aBook);

    }


}
/*
void BookStore::printInventory(ofstream &outputFile) {

    for (auto i : fiction) {

    outputFile << "Catagory: Fiction" << endl;
    sort(fiction.begin(),fiction.end(),BookStore::compare);
    i.printBook(outputFile);
    }

    for (auto i : nFiction) {

    outputFile << "Catagory: NonFiction" << endl;
    sort(nFiction.begin(),nFiction.end(),BookStore::compare);
    i.printBook(outputFile);
    }

    for (auto i : child) {

    outputFile << "Catagory: Children" << endl;
    sort(child.begin(),child.end(),BookStore::compare);
    i.printBook(outputFile);

    }
}

bool BookStore::compare(Book& lhs, Book& rhs) {


    return (lhs.getPerson().getLast()<rhs.getPerson().getLast());
        
}
*/
