#include<string>
#include<iostream>
#include<fstream>
#include<iomanip>
#include <stdio.h>
#include <stdlib.h>
#include"Student.h"
#include"Department.h"
#include"Course.h"
#include"Registration.h"
using namespace std;

int main(){
	
	//initialize all needed variables
	Student stu[10];						//Student class array object
	int student=10;							//by default indexing the last student in student array		
	fstream fobj;							//file object to read student list from file
	fobj.open("studentList.txt",ios::in);
	string name,pw;
	int matricNo,year,sem,unit;
	int i=0;								//counter for student array
	bool check=false,check2=false;			//Used in while loop
	char changeInfo;						//ask whether want to change info
	char toChange;							//used in switch for changing info
	char registerMore;						//ask if want to register more course
	string courseName[7];
	int courseUnit[7];
	int numRegistered=0;					//number courses registered
	int currentUnit=0;						//unit of student after course registration
	
	//store students' info into student class array 
	while(fobj && i<10){
		getline(fobj,name,'\t');
		stu[i].setName(name);
		getline(fobj,pw,'\t');
		stu[i].setPassword(pw);
		fobj>>matricNo;
		stu[i].setMatricNo(matricNo);
		fobj>>year;
		stu[i].setYear(year);
		fobj>>sem;
		stu[i].setSem(sem);
		fobj>>unit;
		stu[i].setUnit(unit);
		fobj.get();
		i++;
	}
	fobj.close();	//close file after read
	
	//Log in students by matric number
	cout << endl;
	cout << "\t\t\t\t ________________________ LOG IN _______________________\n\n";
	cout << "\t\t\t\t|\tPlease enter you matric number and password.\t|\n";
	cout << "\t\t\t\t|\t\t\t\t\t\t\t|\n";
	cout << "\t\t\t\t \tMatric Number	: "; 
	cin >> matricNo; 
	for(int i=0;i<10;i++){
		if(matricNo==(stu[i].getMatricNo())){
			check=true;
			break;
		}
		else
			check=false;
	}
	if(!check){
		cout << "\t\t\t\t ___________________________________________________\n\n";
		cout << "\t\t\t\tYour name is not on the student list." << endl;
		cout << "\t\t\t\tPlease register your self before access to this registration system."<< endl;
		cout << "\t\t\t\tNow exiting the program..." << endl;
		abort();
	}
	
		//Check password to login
		do{
			cout << "\t\t\t\t \tPassword	: "; 
			cin>>pw;
			cout << "\t\t\t\t|\t\t\t\t\t\t\t|\n";
			cout << "\t\t\t\t|_______________________________________________________|\n\n";
			cout << "\t\t\t      *************************************************************\n";
			cout << "\t\t\t\t\t\t\t Loading...\n";
			cout << "\t\t\t      *************************************************************\n\n";
		
			for(int i=0;i<10;i++){
				if(matricNo==(stu[i].getMatricNo())){
					
					if(pw==(stu[i].getPassword())){
						student=i;		//confirm for this student object's index
						check2=true;
					}
				}
			}
			if(check2==false){
				cout << "Wrong password! Please enter again." << endl;
			}
			
		}while(check2==false);
	
		//successfully loged in, display student information
		stu[student].print();
		cout << "Do you need to make any correction on your name? (if YES, enter 'Y/y')" << endl;
		cin>>changeInfo;
		
		//update student information
		if(changeInfo=='y' || changeInfo=='Y'){
			(stu[student].changeName()); 
		}
		
		cout << endl;	
	
	//main menu
	system("pause");
	system("cls");
	cout << "\nDisplay all courses in CS school..." << endl;
	stu[student].initializeCourses();
	stu[student].initializeMajor();
	stu[student].initializeOpenCourses();
	stu[student].displayAllCourses();
	
	//go to next terminal 
	system("pause");
	system("cls");
	cout << "\nStart registration..." << endl;
	
	//call function of base Department class
	//core courses
	cout<<endl;
	cout<<"The following are core courses(T) available for you to register at the current moment:"<<endl;
	stu[student].printCoreCourses((stu[student].getYear()),(stu[student].getSem()));
	cout<<endl;
	//major courses
	string major;
	if((stu[student].getYear()>1) && (stu[student].getSem()>=1)){
		do{		//continue looping if entered invalid major
			cout<<endl;
			cout << "\t\t\t\t ________________________Reminder_______________________\n";
			cout << "\t\t\t\t|\t                                                |\n";
			cout << "\t\t\t\t|\tCPC	: Intelligent Computing                 |\n";
			cout << "\t\t\t\t|\tCSE	: Software Engineering                  |\n";
			cout << "\t\t\t\t|\tCST	: Computing Infrastructure              |\n";
			cout << "\t\t\t\t|_______________________________________________________|\n\n";
			cout << "\t\t\t     **************************************************************";
			cout << "\n\t\t\t    Please enter what major you are in (CPC/CSE/CST): ";
			cin >> major;
			cout << "\t\t\t     **************************************************************\n";
		
		}while((major!="CPC") && (major!="CSE") && (major!="CST"));
		
		cout<<endl;
		cout<<"The following are major courses(M) available for you to register at the current moment:"<<endl;
		stu[student].printMajorCourses((stu[student].getYear()),(stu[student].getSem()),major);	//print out all available major courses
	}else{
		cout << "You can't register for major course at the current moment." << endl;
	}
	//open courses
	cout<<endl;
	cout<<"The following are open courses(U) available for you to register at the current moment:"<<endl;
	stu[student].printOpenCourses();
	

	//registration
	currentUnit=stu[student].getUnit();
	cout<<endl;
	currentUnit=stu[student].registerCourse(courseName,courseUnit,numRegistered,currentUnit);	//call register funciton
	
	while(currentUnit<22){		//register more course if units less than target units
		cout<<"Do u want to register more courses? ('y'/'Y' for yes): ";
		cin>>registerMore;
		if(registerMore=='y' || registerMore=='Y')
			currentUnit+=stu[student].registerCourse(courseName,courseUnit,numRegistered,currentUnit);
		else
			break;
	}

	
	//display final page	
	system("pause");
	system("cls");
	cout << "\n\t\t\t\t_______________________Final Page_______________________\n\n";
    cout << "\n\t\t\t\t*********************** Summary ************************\n";
    cout << "\t\t\t\t__________________________________________________________\n";

	cout << "\n\t\t\t\t\tStudent Name: \t\t " << setw(15) << (stu[student].getName()) << endl;
	
	cout << "\t\t\t\t\tMatric No: \t\t " << setw(15) << (stu[student].getMatricNo()) << endl;

	cout << "\t\t\t\t\tYear: \t\t\t " << setw(15) << (stu[student].getYear()) << endl;

	cout << "\t\t\t\t\tSem: \t\t\t " << setw(15) << (stu[student].getSem()) << endl;
	
	cout << "\t\t\t\t\tUnit: \t\t\t " << setw(15) << (stu[student].getUnit()) << endl;
	
	cout << "\t\t\t\t\tUnit after register: \t " << setw(15) << currentUnit << endl;
	
	cout << "\t\t\t\t__________________________________________________________\n\n";
	cout << "\t\t\t\t\tRegistered Courses:  " << setw(15) ; 
	for(int i=0;i<numRegistered;i++)
	{
		cout << courseName[i]<<" with unit: "<<courseUnit[i] << endl;
	}   
    cout << "\t\t\t\t__________________________________________________________\n\n\n";
    cout << "\t\t\t\tYou have completed your registration.\n\n"; 
 
 
 	//write to text file
	fobj.open("recordRegister.txt",ios::out);
	for(int i=0;i<=10;i++){
		
		fobj<<(stu[i].getName())<<"\t"<<(stu[i].getPassword())<<"\t"<<(stu[i].getMatricNo())<<"\t"<<(stu[i].getYear())<<"\t";
		fobj<<(stu[i].getSem())<<"\t"<<currentUnit;
		
		if((stu[i].getName())==(stu[student].getName())){
			for(int i=0;i<numRegistered;i++){
				fobj<<"\t"<<courseName[i]<<"\t"<<courseUnit[i];
			}
		}
		fobj << endl;
	}
	fobj.close();

	return 0;
}
