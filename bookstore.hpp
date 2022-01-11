/* 
************************
Benjamin Brown
Programming Assignment 2
Instructor: Yvon Feaster
CPSC 1020
Due: 6/14/2021
************************
*/

#ifndef BOOKSTORE_H
#define BOOKSTORE_H
#include "book.hpp"

using namespace std;

class BookStore {

    private:

        vector<Book>fiction;
        vector<Book>nFiction;
        vector<Book>child;

    public:

        BookStore(ifstream& inputFile);


        /*
        This function will take in the input
        file, read the information into appropriate variables,
        create an instance of book, and then call the addBook
        function to add the book into the proper vector
        */

        void readInventory(ifstream& inputFile);

        /*
        This function will determine the genre of the book
        that was entered as its parameter, and then
        place it into the appropriate vector in 
        BookStore
        */

        void addBook(Book& book);

        /*
        This function will read the book data that was collected
        and print it to the output file. Takes the output file as a refrence. It
        will call the print Book function, which will
        call print person, and then print address.
        */

        void printInventory(ofstream& outputFile);

        /*
        This function enables the sort function
        to compare the two string values of each book.
        will return true if left authors name is earlier in
        alphabet, otherwise false
        */
        bool compare(Book& lhs,Book& rhs);

        //Setters 
        
        void setFiction(Book& fBook);
        void setNonFiction(Book& nfBook);
        void setChild(Book& children);



};



#endif