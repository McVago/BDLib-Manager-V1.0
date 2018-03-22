#include <iostream>
#include "Book.h"
using namespace std;

  Book::Book(ISBN isbn, string paramtitle, string paramautor, string paramyear, int paramamount):
  ISBN{isbn}, title{paramtitle}, autor{paramautor}, year{paramyear}, amount{paramamount}, total{paramamount};{
    *next = null;
    *previous = null;
  }
  void Book::lend(){
    if (amount != 0) amount--;
    else throw amountException;
  }

