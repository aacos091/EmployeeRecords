//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Employee.h
//  @ Date : 3/14/2017
//  @ Author : Austin Acosta
//
//


#if !defined(_EMPLOYEE_H)
#define _EMPLOYEE_H
#include <string>

using namespace std;
class Employee {
public:
	Employee();
	Employee(string newName, int newNumber, char newLetter);
	Employee(string newName);
	Employee(int newNumber);
	Employee(char newLetter);
	string getName();
	string getID();
	void setName(string newName);
	void setID(int newNumber, char newLetter);
private:
	string name;
	int number;
	char letter;
};

#endif  //_EMPLOYEE_H
