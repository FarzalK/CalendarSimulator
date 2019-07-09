#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"

Event::Event(string n, int p)
{
      name = n;
  priority = p;
}

Event::~Event()
{
}

void Event::setDate(int d, int m, int y, int h, int min)
{
  date.set(d, m, y, h, min);
}

Date& Event::getDate()
{
  return date;
}

int Event::getPriority()
{
  return priority;
}

void Event::print()
{
  cout << setfill(' ') << setw(20) << priority <<" "<< name << ": ";
  date.printLong();
}
