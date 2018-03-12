class Book{
  int ISBN;
  std::string title,autor,year;
  int amount;
  Book *next;
  Book *previous;

  Book(int isbn, std::string paramtitle, std::string paramautor, std::string paramyear, int paramamount):
  ISBN{isbn}, title{paramtitle}, autor{paramautor}, year{paramyear}, amount{paramamount};{
    *next = null;
    *previous = null;
  }

//  Book::Book(int ISBN, std::string title, std::string autor, std::string year, int amount){

  }
}
