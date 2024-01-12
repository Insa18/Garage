#include <iostream>
#include "Vehicule.h"
using namespace std;
#include <string>

int main()
{
	Vehicule vehicule1("Ford", 95, 50000);
	Vehicule vehicule2("Seat", 110, 3000);
	Voiture v1("Audi", 150, 34500,"");
	Voiture v2( "Land Rover", 130, 400,"");
	Bus b1("Iveco", 200, 150000,60,2);
	cout << "Type du vehicule 1 : " << endl;
	v1.setType();
	cout << endl << "Type du vehicule 2 : " << endl;
	v2.setType();
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


