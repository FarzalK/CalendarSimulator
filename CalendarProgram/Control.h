#ifndef CONTROL_H
#define CONTROL_H

#include "SchoolEvent.h"
#include "WorkEvent.h"
#include "Calendar.h"
#include "View.h"
#include "EventServer.h"

class Control
{
  public:
    void launch();
    Control();
    ~Control();

  private:
    Calendar school;
    Calendar work;
    View view;
    EventServer server;
};

#endif
