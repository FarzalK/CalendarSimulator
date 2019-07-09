#include <iostream>
#include <iomanip>
using namespace std;

#include "SchoolEvent.h"

SchoolEvent::SchoolEvent(string n, int p)
  :Event(n,p)
{
}

bool SchoolEvent::operator<(Event *e){
  if(this->date < e->getDate()){
    return true;
  }
  return false;
}
