#include "Vehicule.h"
#include <iostream>
#include <string>
using namespace std;

/*#########################Class Vehicule#########################*/

Vehicule::Vehicule(string _marque, unsigned int puiss, unsigned int kilo)
{
	marque = _marque;
	puissance = puiss;
	kilometrage = kilo;
}

string Vehicule::getMarque()
{
	return marque;
}

void Vehicule::parcourir(int distance)
{
	kilometrage += distance;
}

void Vehicule::getCarac()
{
	cout << "Marque du vehicule : " << marque << endl;
	cout << "Puissance du vehicule : " << puissance << "ch" << endl;
	cout << "Kilometrage du vehicule : " << kilometrage << "km" << endl;
}

int Vehicule::getKilo()
{
	return kilometrage;
}

/*#########################Class Voiture#########################*/

Voiture::Voiture(string _marque, unsigned int puiss, unsigned int kilo, string _type) :Vehicule(_marque, puiss, kilo)
{
	type = _type;
}

string Voiture::getType()
{
	return type;
}

/*#########################Class Bus#########################*/

Bus::Bus(string _marque, unsigned int puiss, unsigned int kilo, int _nb_place, int _nb_essieux):Vehicule(_marque, puiss, kilo)
{
	nb_place = _nb_place;
	nb_essieux = _nb_essieux;
}

int Bus::getEssieux()
{
	return nb_essieux;
}

int Bus::getPlace()
{
	return nb_place;
}
