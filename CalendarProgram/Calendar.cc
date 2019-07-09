#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Calendar.h"

//define the constructor
Calendar::Calendar()
{
  numEvents = 0;
}

//define the deconstructor
Calendar::~Calendar()
{
}

void Calendar::copyEvents(Array& array){
  calenderList.copy(array);
}

int Calendar::getNumEvents()
{
  return numEvents;
}

void Calendar::add(Event* e)
{
  calenderList.add(e);
   numEvents++;
}

//print out the calendar
void Calendar::print()
{
  calenderList.print();
}
