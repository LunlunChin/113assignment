#include<string>
#include<iostream>
#include"Registration.h"
using namespace std;

Registration::Registration(){}

int Registration::checkUnit(int studentcu,int courseUnit){
	currentUnit=studentcu+courseUnit;
	return currentUnit;
}

int Registration::checkAvailability(int currentUnit){
			
	if(currentUnit<15)
		return -1;
	else if(currentUnit>=22)
		return 0;
	else
		return 1;
	
}

bool Registration::courseRegistration(int studentUnit){
	int currentUnit=studentUnit;
		//number of courses registered
	int checkAvailable;	//check if current units exceed,equal or less than required units

	char registerMore;

	//check if available to register this course
	checkAvailable=checkAvailability(currentUnit);		
	if(checkAvailable<0){
		cout<<"Your current units "<<currentUnit<<" is below the minimum required units. Please register for more courses."<<endl;
		return true;
	}
	else if(checkAvailable==0){
		cout<<"You have reached max units "<<currentUnit<<".Can't register for other courses.";
		return false;
	}
	else{
		cout<<"Your current units "<<currentUnit<<" HAVEN'T reach max unit. "<<endl;
		return true;
	}
	
	cout<<endl;
	system("pause");
	system("cls");	
}
