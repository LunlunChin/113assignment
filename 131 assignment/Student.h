#ifndef STUDENT_H
#define STUDENT_H

#include<string>
#include<iostream>
#include"Department.h"
using namespace std;

static int counter=0;

class Student:public Department{
	private:
		string name,password;
		int matricNo,unit;
		int year,sem;
	public:
		Student();
		Student(string n,string password,int mNo,int y,int u);
		//setter
		void setName(string n);
		void setPassword(string pw);
		void setMatricNo(int mn);
		void setYear(int y);
		void setSem(int s);
		void setUnit(int u);
		//getter
		string getName();
		int getMatricNo();
		string getPassword();
		int getYear();
		int getSem();
		int getUnit();
		//function to change info
		void changeName();
		void changeYear();
		void changeSem();
		void print();
};

#endif
