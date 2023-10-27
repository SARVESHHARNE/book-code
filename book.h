#include <string>
#include <iostream>
using namespace std;

class Book {
	private: 
			int bookid;
			string bookname;
			double price;
	public:
		Book();
		void setBookName(string bookname);
		void setPrice(double price);
		int getBookId();
		string getBookName();
		double getPrice();
};
