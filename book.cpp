#include "book.h"

		Book::Book(){
			this->bookid=1;
			this->bookname="new book";
			this->price=0;
		}
		void Book::setBookName(string bookname){
			this->bookname=bookname;
		}
		void Book::setPrice(double price){
			this->price=price;
		}
		int Book::getBookId(){
			return bookid;
		}
		string Book::getBookName(){
			return bookname;
		}
		double Book::getPrice(){
			return price;
		}
