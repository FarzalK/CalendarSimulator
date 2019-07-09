#ifndef LIST_H
#define LIST_H

#include "Event.h"
#include "Array.h"

using namespace std;

template <class T>
class List
{
  template <class V>
  class Node
  {
    friend class List;
    private:
      V         data;
      Node<T>*  next;
  };

  public:
    List();
    ~List();
    void add(T);
    void print();
    void copy(Array&);
    
  private:
    Node<T>* head;
};


template <class T>
List<T>::List()
{
  head = NULL;
}

template <class T>
List<T>::~List()
{
  Node<T> *currNode, *nxtNode;

  currNode = head;

  while (currNode != NULL) {
    nxtNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nxtNode;
  }
}

template <class T>
void List<T>::copy(Array& array){
  Node<T> *currNode, *nextNode;
  currNode = head;
  
  while (currNode != NULL){
    array.add(currNode->data);
    nextNode = currNode->next; 
    currNode = nextNode;        
  }
}

template <class T>
void List<T>::add(T e)
{
  Node<T>* tempNode;
  Node<T>* currNode;
  Node<T>* prevNode;

  tempNode = new Node<T>;
  tempNode->data = e;
  tempNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if(*e < currNode->data){  
      //if(e->lessThan(currNode->data)){
      break;
    }
    prevNode = currNode;
    currNode = currNode->next;
  }
    
  if (prevNode == NULL) {
    head = tempNode;
  }
  else {
    prevNode->next = tempNode;
  }

  tempNode->next = currNode;
}

template <class T>
void List<T>::print()
{
  Node<T>* currNode = head;
  while(currNode != NULL){
    currNode->data->print();
    currNode = currNode->next;
  }
}


#endif
