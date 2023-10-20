#include <iostream>
#include "book.h"

int main(){
	Book b;
	b.setBookName("hello");
	b.setPrice(50);
	cout<<b.getBookId()<<b.getBookName()<<b.getPrice();
}
