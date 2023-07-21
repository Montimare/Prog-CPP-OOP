#include "LibraryItem.h"
#include <string>

using namespace std;

int LibraryItem::counter = 0;

LibraryItem::LibraryItem(){
    counter++;
}

int LibraryItem::getTotalItems(){
    return counter;
}