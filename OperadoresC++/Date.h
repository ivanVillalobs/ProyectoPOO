#pragma once
#include <string>
#include <iostream>
#include <sstream>
class Date
{
private:
	int day, month, year;
	std::string dateInString;
public:
	Date(int inMonth, int inDay, int inYear) : month(inMonth), day(inDay), year(inYear) {};
	void formatDate() {
		std::cout << month << "/" << day << "/" << year;
	}
	void increment() {
		day = day++;
	}
	//operador para sumar dias
	Date operator +(int daysToAdd) {
		Date newDate(month, day + daysToAdd, year);
		int a,b, c;
			daysToAdd = a;
			if (a>=59 && a<=1){
				c = 31 - a;
			}
		Date newDate(month+1, day + c, year);
		return newDate;
	}
	//operador para restar dias
	Date operator -(int daysToAdd) {
		Date newDate(month, day - daysToAdd, year);
		return newDate;
	}
	
	//Esto es para prefix (es si ponemos un operador antes de una variable)
	Date& operator ++() {
		++day;
		return *this;
	}
	Date& operator --() {
		--day;
		return *this;
	}	

	//esto es para profix (despues de la variable)
	Date& operator ++(int) {
		Date copy(month, day, year);
		++day;
		return copy;
	}
	
	Date& operator --(int) {
		Date copy(month, day, year);
		--day;
		return copy;
	}
	//operador de conversion (convierte la fecha en una cadenad e caracteres)
	operator const char* () {
		std::ostringstream formatDate;
		formatDate << month << "/" << day << "/" << year;
		dateInString = formatDate.str();
		return dateInString.c_str();
	}
};

