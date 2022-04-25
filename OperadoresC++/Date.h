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
			if (day >= 60 && day <= 90 ) {
				marzo();
			}
		}
		else if (month == 4) {
			if (day >= 91 && day <= 120 ) {
				abril();
			}
		}
		else if (month == 5) {
			if (day >= 121 && day <= 151 ) {
				mayo();
			}
		}
		else if (month == 6) {
			if (day >= 152 && day <= 181 ) {
				junio();
			}
		}
		else if (month == 7){
			if(day >= 182 && day <= 212 ) {
				julio();
			}
		}
		else if (month == 8) {
			if (day >= 213 && day <= 243 ) {
				agosto();
			}
		}
		else if (month == 9) {
			if (day >= 244 && day <= 273 ) {
				septiembre();
			}
		}
		else if (month == 10) {
			if (day >= 274 && day <= 304 ) {
				octubre();
			}
		}
		else if (month == 11) {
			if (day >= 305 && day <= 334 ) {
				noviembre();
			}
		}
		else if (month == 12) {
			if (day >= 334 && day <= 365 ) {
				diciembre();
			}
		}
	}
	/*int enero = 31, febrero = 28, marzo = 31, abril = 30, mayo = 31, junio = 30, julio = 31, agosto = 31, septiembre = 30, octubre = 31, noviembre = 30, diciembre = 31;*/
	void enero(){
		Date newDate(month, day, year);
		std::cout << newDate<<std::endl;
	}
	void febrero() {
		int a;
		if (day >= 1 && day <= 28) {			
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else {
			if (day > 28) {
				a = day - 28;				
				if (a >= 1 && a <= 31) {//marzo
					month = 3;
					Date newDate(month, a, year);
					std::cout << newDate << std::endl;
				}
				else if (a >= 32 && a <= 91) {//abril
					int aux;
					aux = a - 31;
					if (a >= 1 && a <= 30) {
							month = 4;
							Date newDate(month, aux, year);
							std::cout << newDate << std::endl;
					}
					else if(aux >= 31 && aux <= 61){
						aux = aux-29;
						month = 5;
						Date newDate(month, aux, year);
						std::cout << newDate << std::endl;
					}
					else if (aux >= 62 && aux <= 92) {
						aux = aux - 30;
						month = 6;
						Date newDate(month, aux, year);
						std::cout << newDate << std::endl;
					}
				}
				else if (a >= 92 && a <= 122) {//mayo
					int aux;
					aux = a - 91;
					month = 5;
					Date newDate(month, aux, year);
					std::cout << newDate << std::endl;
				}
				else if (a >= 123 && a <= 152) {//junio
					month = 6;
					Date newDate(month, a, year);
					std::cout << newDate << std::endl;
				}
				else if (a >= 153 && a <= 183) {//julio
					month = 7 ;
					Date newDate(month, a, year);
					std::cout << newDate << std::endl;
				}
				else if (a >= 184 && a <= 214) {//agosto
					month = 8 ;
					Date newDate(month, a, year);
					std::cout << newDate << std::endl;
				}
				else if (a >= 215 && a <= 244) {//septiembre
					month = 9;
					Date newDate(month, a, year);
					std::cout << newDate << std::endl;
				}
				else if (a >= 245 && a <= 275) {//octubre
					month = 10 ;
					Date newDate(month, a, year);
					std::cout << newDate << std::endl;
				}
				else if (a >= 275 && a <= 305) {//noviembre
					month = 11;
					Date newDate(month, a, year);
					std::cout << newDate << std::endl;
				}
				else if (a >= 306 && a <= 336) {//diciembre
					month = 12;
					Date newDate(month, a, year);
					std::cout << newDate << std::endl;
				}
				else if (a >= 337 && a <= 365) {//enero
					month = 1;
					Date newDate(month, a, year);
					std::cout << newDate << std::endl;
				}
			}
			else {
				a = 28 - day;
				month ++;
			}

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

