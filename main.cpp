/*
 * main.cpp
 *
 *  Created on: Sep 21, 2019
 *      Author: Christopher
 */


#include<iostream>
using namespace std;
#include "book.hpp"

int main(){
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={2,5,2,6,8,6,4,8,9,2};
	int arr3[10]={1,1,1,1,1,1,1,1,1,1};
	int arr4[10]={0,0,0,0,0,0,0,0,0,0};
	int arr5[10]={10,10,10,10,10,10,10,10,10,10};

	Book Book1("Chris","Tiso","How to Code in C++",2019,arr1);
	Book Book2("Bobby","Stahl","How to get your PhD",2014,arr2);
	Book Book5("Bill","Gates","How to get rich ",1999,arr5);
	Book Book4("Steve","Jobs","From nothing to something",1995,arr4);
	Book Book3("Mike","Wazowski","How to Get a job at Monsters Inc",1998,arr3);

	Book arr[5]={Book1,Book2,Book3,Book4,Book5};
	Book1>arr;
	Book1.PrintInfo();

	Book* arr23=new Book[2];
	arr23[0]=Book3;
	arr23[1]=Book4;
	for(int i=0;i<2;i++){
		arr23[i].PrintInfo();
	}
	return 0;
}
