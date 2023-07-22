#ifndef BOOK_H
#define BOOK_H
#include "LibraryItem.h"
#include <string>

class Book: public LibraryItem{
private:

public:
    std::string getTitle();
    std::string getAuthor();
    std::string getPublicationYear();
};

#endif