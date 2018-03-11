#include <iostream>
#include <fstream>
#define UNIT_TESTING false
void save(std::string file){
  std::string buffer;// be careful here
  long size;
  std::ofstream outfile (file, std::ofstream::binary);
  //this is for now, of course save will get data, not strings
  cin >> buffer;
  //read content of infile
  outfile.write(buffer, size);
  //always remember to close files
  outfile.close();
}




#if UNIT_TESTING
int main(){
  std::string file = "file.txt";
  save(file);
  std::cout << "Press enter to leave";
  std::cin.get();
}
#endif
