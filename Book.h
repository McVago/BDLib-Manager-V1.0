#ifndef BOOK_H
#define BOOK_H
#include <iostream>

using namespace std;
class Book{
	private:
		ISBN ISBN;
  		string title,autor,year;
  		int amount, total;
  		Book *next;
  		Book *previous;
  	//Functions
  	public:
  		Book(ISBN isbn, string paramtitle, string paramautor, string paramyear, int paramamount);
  		void lend();
};


#endif //BOOK_H