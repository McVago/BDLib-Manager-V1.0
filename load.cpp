#include <fstream>
#include <iostream>
#define UNIT_TESTING true

void load(std::string archive){
  std::ifstream infile;
  infile.open(archive, std::ifstream::in);
  std::string b;
  while (infile.good()){//While file not ended, will read to the end
    char a = infile.get();
    int c = a;
    if(c == 59 || c == 10){//To ignore ASCII 59 (;) and ASCII 10 (\n)
    b = b + " ";
  }
    else{
      b = b + a;
    }
  }
  std::cout <<  b;
  infile.close();
}
#if UNIT_TESTING
//This main is mainly for unit Testing, remove when compiling with header of file
int main(){
  std::string file = "file.txt";
  load(file);
  std::cout << "Press enter to leave";
  std::cin.get();
}
#endif
