/* 
************************
Benjamin Brown
Programming Assignment 2
Instructor: Yvon Feaster
CPSC 1020
Due: 6/14/2021
************************
*/

#include "book.hpp"

using namespace std;

void Book::printBook(ofstream& outputFile) {
    outputFile << "Book Title: \n" << title << "\n" << endl << "Author Info:" << endl;
    author.printPerson(outputFile);
    outputFile << "Books ISBN: \n" << ISBN << endl;
}

//setters and getters 

string Book::getCatagory() {
    return catagory;
}

Person Book::getPerson() {
    return author;
}