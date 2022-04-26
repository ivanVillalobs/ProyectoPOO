// OperadoresC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <memory>
#include "Date.h"

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
};

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
	cout<<mapIntToStr1.count(1000);*/



	






	vector<int> a;//siempre se inserta al final
	deque<int> b;//siempre se inserta al inicio
	set<int> c;//ordena cada vez que se inserta un valor y no permite valores repetidos


	a.push_back(50);
	a.push_back(2991);
	a.push_back(23);
	a.push_back(9999);

	vector<int>::iterator arrIterator = a.begin();
	while(arrIterator != a.end()) {
		cout << *arrIterator << endl;
		++arrIterator;
	}
	vector<int>::iterator nodeFound = find(a.begin(), a.end(), 50);
	if(nodeFound != a.end())
	{
		int pos = distance(a.begin(), nodeFound);
		cout << "Tu node se encontro en la posicion: " << pos << endl<<"con el valor: "<< *nodeFound<<endl;
	}




	/*
	deque<int>::iterator arrIteratorDeque = b.begin();
	while(arrIteratorDeque != b.end()) {
		cout << *arrIteratorDeque << endl;
		++arrIteratorDeque;
	}*/










	/*
	b.push_back(50);
	b.push_back(2991);
	std::unique_ptr<int> smartIntPtr(new int);
	*smartIntPtr = 42;

	std::cout << "Integer value is" << smartIntPtr << std::endl;
	std::unique_ptr<Date> smartDatePtr(new Date(01, 01, 2022));
	smartDatePtr->formatDate();*

	
	/*
	Date a(04, 26, 2022);
	Date b = a+6;
	std::cout << a << std::endl;
	b.Sum();*/

	/*profe no me tuerza tan gacho, ya que no tuve mucho tiempo en vacaciones pues sali y regrese hasta el miercoles 
	de la semana de pascua, lo que me dejo 3 dias para hacer los trabajaos de otras materias y los otros 3 para los 
	proyectos que dejo, ya que a donde fui y no tuve computadora para poder ni señal de wifi para poder hacer los 
	proyectos que dejo mas que el de la fecha, y en ese me tarde 3 dias para terminarlo, solo espero que me ayude
	a ver como se hace, ya que dandole una repasada al libro vi muy superficialmente lo que son los nodos y templates, 
	ya que mi ingles no es muy bueno. y quisiera ver mas a profundidad esos 2 para entenderles mas
	lo subo a esta hora porque tengo que ir a un mandado y regresare algo noche, por lo que no se si pueda subir el trabajo
	a esa hora y por eso lo subo ahorita, sin mas por el momento, me despido y lo veo en clase*/
}
