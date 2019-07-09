#ifndef CALENDAR_H
#define CALENDAR_H

#include "Event.h"
#include "List.h"

class Calendar
{
  public:
    Calendar();
    ~Calendar();
    void add(Event*);
    void print();
    int  getNumEvents();
    void copyEvents(Array&);

  private:
    std::string name;
    List<Event*> calenderList;
    int numEvents;
};

#endif
