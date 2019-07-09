#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "Date.h"


class Event
{
  friend ostream& operator<<(ostream, Event&);
  public:
    Event(std::string="Default", int=0);
    virtual ~Event();
    void  setDate(int=0, int=0, int=0, int=0, int=0);
    Date& getDate();
    int   getPriority();
    void  print();
    virtual bool operator<(Event*) = 0;

  protected:
    std::string name;
    Date   date;
    int    priority;
};

#endif

