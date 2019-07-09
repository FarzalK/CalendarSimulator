#ifndef WORKEVENT_H
#define WORKEVENT_H

#include <string>
#include "Event.h"


class WorkEvent : public Event
{
  friend ostream& operator<<(ostream, WorkEvent&);
  public:
    WorkEvent(std::string="Default", int=0);
    bool  operator<(Event*);
};

#endif
