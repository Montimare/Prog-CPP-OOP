#ifndef BOOK_H
#define BOOK_H
#include "LibraryItem.h"
#include <string>

class Book: public LibraryItem{
private:
    std::string test = "oh no";
public:
    std::string getTitle();
    std::string getAuthor();
    std::string getPublicationYear();
    std::string static testing(); 
};

#endif