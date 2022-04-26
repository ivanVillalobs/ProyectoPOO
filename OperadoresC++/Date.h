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
		return newDate;
		newDate.alaverga();
	}
	//operador para restar dias
	Date operator -(int daysToAdd) {
		Date newDate(month, day - daysToAdd, year);		
		return newDate;
	}
	/*
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
	}*/

	void alaverga() {
		if (month == 1) {
			if (day >= 1 && day <= 31) {
				enero();
			}
		}
		else if (month == 2) {
			febrero();
		}
		else if (month == 3) {
				marzo();
		}
		else if (month == 4) {
				abril();
		}
		else if (month == 5) {
				mayo();
		}
		else if (month == 6) {
				junio();
		}
		else if (month == 7) {
				julio();
		}
		else if (month == 8) {
				agosto();
		}
		else if (month == 9) {
				septiembre();
		}
		else if (month == 10) {
				octubre();
		}
		else if (month == 11) {
				noviembre();
		}
		else if (month == 12) {
				diciembre();
		}
	}
	/*int enero = 31, febrero = 28, marzo = 31, abril = 30, mayo = 31, junio = 30, julio = 31, agosto = 31, septiembre = 30, octubre = 31, noviembre = 30, diciembre = 31;*/
	void enero(){
		Date newDate(month, day, year);
		std::cout << newDate<<std::endl;
	}
	void febrero() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 28) {	//febrero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}else if(day >= 29 && day <= 59){ //marzo
			a = day - 28;			
			Date newDate(month+1, a, year);
			std::cout << newDate << std::endl;
		}else if (day >= 60 && day <= 89) {//abril
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}else if (day >= 90 && day <= 120) {//mayo
			a = day - 89;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}else if (day >= 121 && day <= 150) {//junio
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//julio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}else if (day >= 182 && day <= 212) {//agosto
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}else if (day >= 213 && day <= 242) {//septiembre
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}else if (day >= 243 && day <= 273) {//octubre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}else if (day >= 274 && day <= 303) {//noviembre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}else if (day >= 304 && day <= 334) {//diciembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}

	}
	void marzo() {
		int auxDay = 59 - day;
		Date newDate(month + 2, auxDay, year);
		std::cout << newDate << std::endl;
	}
	void abril() {
		int auxDay = 90 - day;
		Date newDate(month+3, auxDay, year);
		std::cout << newDate << std::endl;
	}
	void mayo() {
		int auxDay =120 - day;
		Date newDate(month + 4, auxDay, year);
		std::cout << newDate << std::endl;
	}	
	void junio() {
		int auxDay = 151 - day;
		Date newDate(month + 5, auxDay, year);
		std::cout << newDate << std::endl;
	}
	void julio() {
		int auxDay = 212 - day;
		Date newDate(month + 6, auxDay, year);
		std::cout << newDate << std::endl;
	}
	void agosto() {
		int auxDay = 243 - day;
		Date newDate(month + 7, auxDay, year);
		std::cout << newDate << std::endl;
	}
	void septiembre() {
		int auxDay = 273 - day;
		Date newDate(month + 8, auxDay, year);
		std::cout << newDate << std::endl;
	}
	void octubre() {
		int auxDay =  304 - day;
		Date newDate(month + 9, auxDay, year);
		std::cout << newDate << std::endl;
	}
	void noviembre() {
		int auxDay = 334 - day;
		Date newDate(month + 10, auxDay, year);
		std::cout << newDate << std::endl;
	}
	void diciembre() {
		int auxDay = 365 - day;
		Date newDate(month + 11, auxDay, year);
		std::cout << newDate << std::endl;
	}
	//operador de conversion (convierte la fecha en una cadena de caracteres)
	operator const char* () {
		std::ostringstream formatDate;
		formatDate << month << "/" << day << "/" << year;
		dateInString = formatDate.str();
		return dateInString.c_str();
	}
};

