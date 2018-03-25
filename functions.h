#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <fstream>
#include <iostream>
using namespace std;
class functions{
private:
  functions(){}
public:
  void load(string archive);
  void savefile(string file);
  void insert(List list,string String);
  void erase(List list,string String);
  void get(List list,string String)
};


#endif
