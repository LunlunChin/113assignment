#include<string>
#include<iostream>
#include"Course.h"
using namespace std;

Course::Course(){}
//setter
void Course::setCourseId(string cid){
	courseId=cid;
}
void Course::setCourseName(string cn){
	courseName=cn;
}
void Course::setCourseType(char ct){
	courseType=ct;
}
void Course::setCourseUnit(int cu){
	courseUnit=cu;
}
//getter	
string Course::getCourseId(){
	return courseId;
}
string Course::getCourseName(){
	return courseName;
}
char Course::getCourseType(){
	return courseType;
}
int Course::getCourseUnit(){
	return courseUnit;
}

ostream &operator<<(ostream &os,const Course cobj){
	os<<cobj.courseId<<"\t"<<cobj.courseName<<"\t"<<cobj.courseType<<"\t"<<cobj.courseUnit;
	return os;
}
