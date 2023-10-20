#include "book.h"

		Book::Book(){
			this->bookid=1;
			this->bookname="new book";
			this->price=0;
		}
		void setBookName(string bookname){
			this->bookname=bookname;
		}
		void setPrice(double price){
			this->price=price;
		}
		int getBookId(){
			return bookid;
		}
		string getBookName(){
			return bookname;
		}
		double getPrice(){
			return price;
		}
