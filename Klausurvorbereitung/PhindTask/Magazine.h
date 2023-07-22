#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <string>
#include "LibraryItem.h"

class Magazine: public LibraryItem{
private:

public:
    std::string getAuthor();
    std::string getPublicationYear();
    std::string getTitle();
};

#endif