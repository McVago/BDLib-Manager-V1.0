#include "list.h"
#include <iostream>
#define UNIT_TESTING false
using namespace std;

List::List(){first = NULL; last = NULL;}

bool List::empty(){if (!first) return true;else return false;}

void List::addfirst(ISBN isbn, string title, string autor,string year,int amount){
   if (empty()){
     first = new Book(isbn,title,autor,year,amount);
     last = first;
   }else{
   	bookp added = new Book(isbn,title,autor,year,amount);
   	added->next = first;
   	first->previous = added;
   	first = added;
   }
}
void List::addlast(ISBN isbn, string title, string autor,string year,int amount){
	if (empty()){
		first = new Book(isbn,title,autor,year,amount);
	}else{
		bookp added = new Book (isbn,title,autor,year,amount);
		added->previous = last;
		last->next = added;
		last = added;
	}
}
void List::erase(ISBN isbn){
  if(empty()){throw "Empty list"}
  else{
    bookp temp = first;
    for (int i = 0; i<list.lenght(); i++){
        temp = temp->next;
        if(temp->ISBN == isbn){
          if (temp->amount != temp->total){
            throw "Someone has the book";
          }
        }

    }

    if (temp->previous->next){temp->previous->next = temp->next;}
    if(temp->next->previous){temp->next->previous = temp->previous;}
    delete temp;
  }
}
int List::lenght(){
	int cont = 0;
    bookp aux = first;
    if(empty()){
        return cont;
    }else{
        while(aux){
          aux=aux->first;
          cont++;
        }
    	return cont;}
}
void List::lend(ISBN isbn){
  bool could = false;
  if (empty()){throw "Empty list"}
  else{
    bookp aux = first;
    while(aux){
      if(isbn == aux->ISBN){
        aux.lend();
        could == true;
        break;
      }
      aux = aux->next;
    }
    if(!could){throw "Book not found";}
  }
}
