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

void Voiture::setType()
{
	while (true) {
		int a;
		cout << "1. Berline" << endl;
		cout << "2. SUV" << endl;
		cout << "3. 4x4" << endl;
		cout << "4. Break" << endl;
		cout << "Choisissez un type (avec le num) : ";
		cin >> a;
		if (a < 1 || a > 4) {
			cout << endl << "Pas compris entre 1 et 4" << endl;
		}
		if (1 <= a && a <= 4) {
			if (a == 1) {
				type = "berline";
				break;
			}
			if (a == 2) {
				type = "suv";
				break;
			}
			if (a == 3) {
				type = "4x4";
				break;
			}
			if (a == 4) {
				type = "break";
				break;
			}
		}
	}
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
