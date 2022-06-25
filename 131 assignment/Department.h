#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include<string>
#include<iostream>
#include"Registration.h"
#include"Course.h"

class Department{
	private:
		int courseNumber;
		//composition objects
		Course coreCourses[6];		//total of 6 core courses
		Course majorCourses[6];		//total 5 major courses
		Course openCourses[2];		//total of 2 open courses 
		Registration robj;
	public:
		void displayWelcome();
		//core courses
		void initializeCourses();
		void printCoreCourses(int studentYear,int sem);
		void displayAllCourses();
		void displayCoursesDetails(string cid);
		//major courses
		void initializeMajor();
		void printMajorCourses(int studentYear,int studentSem,string major);	
		int registerCourse(string courseIds[],int courseUnits[],int &numRegistered,int studentUnit);
		//open courses
		void initializeOpenCourses();
		void printOpenCourses();
		//check course validation
		int getCoursesUnit(string courseId,char courseType);		//for registration purpose
		bool coreCourseCheck(string courseId);
		bool majorCourseCheck(string courseId);
		bool openCourseCheck(string courseId);
};

#endif
