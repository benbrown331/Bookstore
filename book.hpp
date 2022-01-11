/* 
************************
Benjamin Brown
Programming Assignment 2
Instructor: Yvon Feaster
CPSC 1020
Due: 6/14/2021
************************
*/

#ifndef BOOK_H
#define BOOK_H
#include "person.hpp"

using namespace std;





class Book {

    private:

        Person author;
        string title;
        int ISBN;
        string catagory;

    public:

        Book(Person aut, string titl, int sNum, string cat) :
        author(aut), title(titl), ISBN(sNum), catagory(cat) {}

        /*
        this function will print out the majority
        of the information about the book itself,
        and will call the printPerson function to print
        authot data.
        */
        void printBook(ofstream& outputFile);

        //setters and getters

        string getCatagory();
        Person getPerson();



};

#endif