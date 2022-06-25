#ifndef REGISTRATION_H
#define REGISTRATION_H

#include"Course.h"

class Registration{
	private:
		int date;
		int currentUnit;
	public:
		Registration();
		int checkUnit(int studentcu,int courseUnit);	//must be called before checkAvailability()
		int checkAvailability(int currentUnit);
		int getUnit(int studentcu,int courseUnit);
		bool courseRegistration(int studentUnit);
		void invalidRegistration();
};

#endif
