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
		newDate.Sum();
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

	void Sum() {
		if (month == 1) {
				enero();
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
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
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
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}
	void abril() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}
	void mayo() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}	
	void junio() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}
	void julio() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}
	void agosto() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}
	void septiembre() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}
	void octubre() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}
	void noviembre() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}
	void diciembre() {
		std::cout << "" << std::endl;
		int a;
		if (day >= 1 && day <= 31) {	//enero
			Date newDate(month, day, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 32 && day <= 59) { //febrero
			a = day - 31;
			Date newDate(month + 1, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 60 && day <= 90) {//marzo
			a = day - 59;
			Date newDate(month + 2, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 91 && day <= 120) {//abril
			a = day - 90;
			Date newDate(month + 3, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 121 && day <= 150) {//mayo
			a = day - 120;
			Date newDate(month + 4, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 151 && day <= 181) {//junio
			a = day - 150;
			Date newDate(month + 5, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 182 && day <= 212) {//julio
			a = day - 181;
			Date newDate(month + 6, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 213 && day <= 242) {//agosto
			a = day - 212;
			Date newDate(month + 7, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 243 && day <= 273) {//septiembre
			a = day - 242;
			Date newDate(month + 8, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 274 && day <= 303) {//octubre
			a = day - 273;
			Date newDate(month + 9, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 304 && day <= 334) {//noviembre
			a = day - 303;
			Date newDate(month + 10, a, year);
			std::cout << newDate << std::endl;
		}
		else if (day >= 335 && day <= 365) {//diciembre
			a = day - 334;
			month = 1;
			Date newDate(month, a, year++);
			std::cout << newDate << std::endl;
		}
	}
	//operador de conversion (convierte la fecha en una cadena de caracteres)
	operator const char* () {
		std::ostringstream formatDate;
		formatDate << month << "/" << day << "/" << year;
		dateInString = formatDate.str();
		return dateInString.c_str();
	}
};

