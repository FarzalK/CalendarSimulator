#include <iostream>
#include <iomanip>
using namespace std;

#include "WorkEvent.h"

WorkEvent::WorkEvent(string n, int p)
  :Event(n,p)
{
}

bool WorkEvent::operator<(Event *e){
  if(this->priority < e->getPriority()){
    return true;
  }
  return false;
}
