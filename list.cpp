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
void List::add(ISBN isbn, string title, string autor,string year,int amount){
	if (empty()){first = new Book (isbn,title,autor,year,amount); last = first}
	else{
		bookp added = new Book (isbn,title,autor,year,amount);
		bookp aux = first;
		if (aux->ISBN) 
	}
}
void List::erase(){

}
int List::lenght(){
	int cont = 0;
    bookp aux = first;
    if(empty()){
        return cont;
    }else{
        while(aux!=first){
          aux=aux->first;
          cont++;
        }
    	return cont;}
}
