#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;
typedef Book* bookp;
class List{
private:
	bookp first;
	bookp current;
	bookp last;
public:
	List();
	search(ISBN isbn);
	int lenght();
	void addfirst(ISBN isbn, string title, string autor,string year,int amount);
	void addlast(ISBN isbn, string title, string autor,string year,int amount);
	void lend(ISBN isbn);
	bool empty();

};
#endif //LIST_H