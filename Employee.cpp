//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Employee.cpp
//  @ Date : 3/14/2017
//  @ Author : Austin Acosta
//
//


#include "Employee.h"
#include <sstream>

Employee::Employee() {
    name = "";
    number = 0;
    letter = 0;
}

Employee::Employee(string newName, int newNumber, char newLetter) {
    //TODO Change the member variables
    name = newName;
    number = newNumber;
    letter = newLetter;
}

Employee::Employee(string newName) {
    name = newName;
}

Employee::Employee(int newNumber) {
    number = newNumber;
}

Employee::Employee(char newLetter) {
    letter = newLetter;
}

string Employee::getName() {
    return name;
}

string Employee::getID() {
    string result1;
    ostringstream convert;
    convert << number;
    result1 = convert.str();

    convert << int(letter);
    string result2 = convert.str();
    // TODO Return the ID with the matching format
    return result2;

}

void Employee::setName(string newName) {
    name = newName;
}

void Employee::setID(int newNumber, char newLetter) {
    // TODO Change the corresponding member variables
    number = newNumber;
    letter = newLetter;
}
