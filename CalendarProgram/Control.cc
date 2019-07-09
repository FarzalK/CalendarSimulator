#include "Control.h"

Control::Control(){
  Array schoolArray;
  Array workArray;

  server.retrieve(schoolArray, workArray);

  for(int i=0; i < schoolArray.getSize(); i++){
    school.add(schoolArray.get(i));
  }

  for(int i=0; i < workArray.getSize(); i++){
    work.add(workArray.get(i));
  }
}

Control::~Control(){
  Array schoolArray;
  Array workArray;

  school.copyEvents(schoolArray);
  work.copyEvents(workArray);
  server.update(schoolArray, workArray);
}

void Control::launch()
{
  SchoolEvent *newSEvent;
  WorkEvent   *newWEvent;
  int numDates = 0;
  int day, month, year, hour, minute, priority;
  string title, eventType;
  int menuSelection;

   while (1) {
    menuSelection = view.mainMenu();

    if (menuSelection == 0) 
      break;
    else if (menuSelection == 1) {
      view.userInput(title, day, month, year, hour, minute, priority);
      view.eventType(eventType);

      if (eventType == "School"){
	newSEvent = new SchoolEvent(title, priority);
	newSEvent->setDate(day, month, year, hour, minute);
	school.add(newSEvent);
      }

      else if (eventType == "Work"){
	newWEvent = new WorkEvent(title, priority);
	newWEvent->setDate(day, month, year, hour, minute);
	work.add(newWEvent);
      }
      
      ++numDates;
    }
   }

   if(school.getNumEvents() > 0){
      cout << endl;
      cout << "School Calendar" << endl;
      view.printCalendar(school);
      cout << endl;
    }

   if(work.getNumEvents() > 0){
      cout << endl;
      cout << "Work Calendar" << endl;
      view.printCalendar(work);
      cout << endl;
    }
}
