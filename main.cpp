//MAIN
#include <fstream>
#include <iostream>
#include "Book.h"
#include "list.h"
#include "isbn.h"
#include "stack.h"
#include "functions.h"

using namespace std;

#define SPANISH false
#define ENGLISH true

#if SPANISH
  string AA1 = "Bienvenido a BDLibManager V1.0"
#endif

#if ENGLISH
  string AA1 = "Welcome to BDLibManager V1.0"
  string AA2 = "Please type what you want to do:"
  string AA3 = "For a list of functions type help"
  string AA4 = "Type the name of the file you wish to load"
#endif

enum action {load,save,savef,index};

int main(){
  action what;
  STACK<string, 100> stack;
  List DataBase;
  cout << AA1 << endl << AA2 << endl << AA3 << endl;
  cin >> what;
  string b;
  switch (what) {
    case (1):
      cout << AA4 << endl;
      cin >> b;
      b = b + ".txt";
      functions::load(b);

    case (2):
      cout << AA5 << endl;
      functions::save()
    case (3):
      cout << AA4 << endl;
      cin >> b;
      b = b + ".txt";
      functions::savefile(b);
    case (4):
      //INDEX CODE

    case (5):

  }
}
