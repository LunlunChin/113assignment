#ifndef COURSE_H
#define COURSE_H

#include<string>
using namespace std;

class Course{
	private:
		string courseId,courseName;
		char courseType;
		int courseUnit;
	public:
		Course();
		//setter
		void setCourseId(string cid);
		void setCourseName(string cn);
		void setCourseType(char ct);
		void setCourseUnit(int cu);
		//getter
		string getCourseId();
		string getCourseName();
		char getCourseType();
		int getCourseUnit();
		
		friend ostream &operator<<(ostream &os,const Course cobj);
};

#endif
