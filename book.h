#include <string>
#include <iostream>

class Book {
	private: 
			int bookid;
			string bookname;
			double price;
	public:
		Book()=0;
		void setBookName(string bookname)=0;
		void setPrice(double price)=0;
		int getBookId()=0;
		string getBookName()=0;
		double getPrice()=0;
};
