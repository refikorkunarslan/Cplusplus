#ifndef LECTURER_H
#define LECTURER_H
#include <iostream>
#include <string>
#include <vector>
#include "YOK.h"
#include "university.h"
#include "complex.h"
#include "employee.h"
#include "ra.h"
#include "secretary.h"
#include "officer.h"
using namespace std;

class Lecturer:public Employee
{
	public:
	/*Lecturer()
	{
		setPid(-1);
		setName("");
		setSurname("");
		setHappiness(0);
	}*/
	/*Lecturer(const Lecturer& other)
	{
		other.pid=pid;
		other.
		
	}*/
	
	
	int work(action act);
	void giveLesson();
	void giveHW();
	void seeSuccessfulStudent();
	void makePublish();
	void drinkTea();
	void submitPetition();
	
};
#endif
