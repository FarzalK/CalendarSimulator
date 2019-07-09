#ifndef SCHOOLEVENT_H
#define SCHOOLEVENT_H

#include <string>
#include "Event.h"


class SchoolEvent : public Event
{
  friend ostream& operator<<(ostream, SchoolEvent&);
  public:
    SchoolEvent(std::string="Default", int=0);
    bool operator<(Event*);
};

#endif
