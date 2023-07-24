/*
Assignment: Library Management System in C++

Objective: The goal of this assignment is to understand the concepts of 'virtual', 'inheritance', 'polymorphism', 'static methods and attributes' in C++.

Task:

    Create a Base Class:
        Define a class named LibraryItem.
        This class should have three virtual methods: getTitle(), getAuthor(), and getPublicationYear(). These methods should return some default values.
        Add a static data member counter to this class. Initialize it to 0.
        In the constructor of LibraryItem, increment the counter each time an object is created.

    Create Derived Classes:
        Define two classes Book and Magazine that inherit from LibraryItem.
        Override the getTitle(), getAuthor(), and getPublicationYear() methods in these classes to return values specific to Book and Magazine.

    Create a Static Method:
        Add a static method getTotalItems() to the LibraryItem class. This method should return the value of counter.

    Test Your Classes:
        In the main() function, create some Book and Magazine objects.
        Call the getTitle(), getAuthor(), and getPublicationYear() methods on these objects and print the results.
        Also, print the total number of library items by calling the getTotalItems() method.

Submission: Once you have completed the assignment, submit your code for review. Make sure your code is well-commented, with comments explaining what each part of the code does.

Grading: You will be graded on the following aspects:

    Correct implementation of the 'virtual', 'inheritance', 'polymorphism', 'static methods and attributes' concepts.
    Correctness of the code.
    Clarity and cleanliness of the code.
    Quality of the comments.

Good luck!

sauce: https://www.phind.com/agent?cache=clkcle7ka000jl908amncq21b
*/

#include <iostream>
#include <string>
#include "Book.h"
#include "Magazine.h"

using namespace std;

void identify()
{
    cout << endl;
}

int main()
{
    Book book1;
    cout << "BÜCHER ANZAHL" << book1.getTotalItems();
    Magazine magazine1;
    cout << "BÜCHER ANZAHL" << book1.getTotalItems();
    Book book2;
    cout << "BÜCHER ANZAHL" << book1.getTotalItems();
    Book book3;
    cout << "BÜCHER ANZAHL" << book1.getTotalItems();
    cout << "BOOKS" << endl;
    cout << book1.getTitle() << endl
         << book2.getAuthor() << endl
         << book3.getPublicationYear() << endl;
    cout << "MAGAZINE" << endl;
    cout << magazine1.getTitle() << endl
         << magazine1.getAuthor() << endl
         << magazine1.getPublicationYear() << endl;
    cout << book1.testing() << endl;
}