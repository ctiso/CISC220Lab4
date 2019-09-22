/*
 * book.cpp
 *
 *  Created on: Sep 21, 2019
 *      Author: Christopher
 */


#include "book.hpp"
#include<iostream>
using namespace std;
#include <string>

Book::Book(std::string first,std::string last,std::string book,int num){
	authorFirst=first;
	authorLast=last;
	bookName=book;
	year=num;
	for(int i=0;i<10;i++){
		ratings[i]=0;
	}
}
Book::Book(std::string first,std::string last,std::string book,int num,int* arr){
	authorFirst=first;
	authorLast=last;
	bookName=book;
	year=num;
	ratings=arr;
}
