#include <iostream>
#include "book.h"
using namespace std;

int main(){
	Book b;
	b.setBookName("hello");
	b.setPrice(50);
	cout<<"book Id : "<<b.getBookId()<<"\nbook Name : "<<b.getBookName()<<"\nbook price : "<<b.getPrice();
}
