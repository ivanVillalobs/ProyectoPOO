// OperadoresC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <memory>
#include "Date.h"
/*
#include <vector>
#include <deque>
#include <set>
#include <map>
using namespace std;
template<typename keyType>
struct ReverseSort{
	bool operator()(const keyType& key1, const keyType& key2) {
		return key1 > key2;
	}
};*/

int main()
{
	/*
	map<int, string> mapIntToStr1;
	//multimap<int, string> mapIntToStr1;
	mapIntToStr1.insert(pair<int, string>(1000, "dinero"));
	mapIntToStr1.insert(pair<int, string>(2000, "quincena"));
	for (auto elem = mapIntToStr1.cbegin(); elem != mapIntToStr1.cend(); ++elem) {
		cout << elem->first << "->" << elem->second << endl;
	}
	cout<<mapIntToStr1.count(1000);



	






	vector<int> a;//siempre se inserta al final
	deque<int> b;//siempre se inserta al inicio
	set<int> c;//ordena cada vez que se inserta un valor y no permite valores repetidos


	a.push_back(50);
	a.push_back(2991);
	a.push_back(23);
	a.push_back(9999);

	b.push_back(50);
	b.push_back(2991);

	vector<int>::iterator arrIterator = a.begin();
	while(arrIterator != a.end()) {
		cout << *arrIterator << endl;
		++arrIterator;
	}
	vector<int>::iterator nodeFound = find(a.begin(), a.end(), 50);
	if(nodeFound != a.end())
	{
		int pos = distance(a.begin(), nodeFound);
		cout << "Tu node se encontro en la posicion: " << pos << endl<<"con el valor: "<< *nodeFound;
	}
	*/



	
/*	deque<int>::iterator arrIteratorDeque = b.begin();
	while(arrIteratorDeque != b.end()) {
		cout << *arrIteratorDeque << endl;
		++arrIteratorDeque;
	}*/











	/*
	std::unique_ptr<int> smartIntPtr(new int);
	*smartIntPtr = 42;

	std::cout << "Integer value is" << smartIntPtr << std::endl;
	std::unique_ptr<Date> smartDatePtr(new Date(01, 01, 2022));
	smartDatePtr->formatDate();*/

	
	Date a(04, 26, 2022);
	Date b = a+6;
	std::cout << a << std::endl;
	b.Sum();
}
