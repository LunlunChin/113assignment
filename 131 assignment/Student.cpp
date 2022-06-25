#include<iostream>
#include<fstream>
#include<iomanip>
#include"Student.h"
#include"Department.h"
using namespace std;

Student::Student(){
	if(counter==0){
		displayWelcome();	//from Department class
		counter++;
	}
	name="";
	password="";
	matricNo=0;
	unit=0;
	year=0;
	sem=0;
}
//setter
void Student::setName(string n){
	name=n;
}
void Student::setPassword(string pw){
	password=pw;
}
void Student::setMatricNo(int mn){
	matricNo=mn;
}
void Student::setYear(int y){
	year=y;
}
void Student::setSem(int s){
	sem=s;
}
void Student::setUnit(int u){
	unit=u;
}
//getter
string Student::getName(){
	return name;
}
int Student::getMatricNo(){
	return matricNo;
}
string Student::getPassword(){
	return password;
}
int Student::getYear(){
	return year;
}
int Student::getSem(){
	return sem;
}
int Student::getUnit(){
	return unit;
}


void Student::changeName(){
	cout<<"Please enter your name correctly: ";
	cin>>name;
}
	
void Student::print(){
	
	cout << " Here is your information: " << endl;
	cout << "________________________________________________________________________________________________________________________" << endl << endl;
	cout << setw(16) << "Name" << setw(20) << "Matric Number" << setw(20) << "Current Units" << setw(20) << "Study Year" << setw(20) << "Semester"  << endl ;	//table header
	cout << "________________________________________________________________________________________________________________________" << endl << endl << endl;
	cout << setw(16) << name << setw(20) << matricNo << setw(20) << unit << setw(20) << year << setw(20) << sem << setw(20) << endl << endl ;
	cout << "________________________________________________________________________________________________________________________" << endl << endl;
	
}
