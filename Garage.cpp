#include <iostream>
#include "Vehicule.h"
using namespace std;
#include <string>

string setType() {
	string type;
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
	return type;
}


int main()
{
	Vehicule vehicule1("Ford", 95, 50000);
	Vehicule vehicule2("Seat", 110, 3000);
	string c1 = setType();
	cout << endl;
	string c2 = setType();
	Voiture v1("Audi", 150, 34500,c1);
	Voiture v2( "Land Rover", 130, 400,c2);
	Bus b1("Iveco", 200, 150000,60,2);
	cout << endl;
	vehicule1.getCarac();
	cout << endl;
	vehicule2.getCarac();
	vehicule2.parcourir(500);
	cout << "Apres avoir parcouru 500km le compteur est a " << vehicule2.getKilo() << "km" << endl;
	v1.getCarac();
	cout << "Type de vehicule : " << v1.getType() << endl;
	cout << endl;
	v2.getCarac();
	cout << "Type de vehicule : " << v2.getType() << endl;
	cout << endl;
	b1.getCarac();
	cout << "Nombre de place du bus : " << b1.getPlace() << " et le nombre d'essieux : " << b1.getEssieux() << endl;
}


