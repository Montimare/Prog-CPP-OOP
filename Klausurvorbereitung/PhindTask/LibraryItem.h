#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <string>


class LibraryItem{
private:
int static counter;
public:
virtual std::string getTitle()=0;
virtual std::string getAuthor()=0;
virtual std::string getPublicationYear()=0;
int getTotalItems();
LibraryItem();
};

#endif