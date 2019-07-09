#ifndef VIEW_H
#define VIEW_H
#include <iostream>
#include <string>

using namespace std;

#include "Calendar.h"

class View
{
  public:
    int mainMenu();
    void userInput(string&, int&, int&, int&, int&, int&, int&);
    void eventType(string&);
    void printCalendar(Calendar&);
};

#endif
