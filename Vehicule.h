#pragma once
#include <string>
using namespace std;


/*#########################Class Vehicule#########################*/

class Vehicule
{
protected:
	string marque;
	unsigned int puissance, kilometrage;
public:
	Vehicule(string _marque, unsigned int puiss, unsigned int kilo);
	string getMarque();
	void parcourir(int distance);
	void getCarac();
	int getKilo();
};

/*#########################Class Voiture#########################*/

class Voiture : public Vehicule
{
private:
	string type;
public:
	Voiture(string _marque, unsigned int puiss, unsigned int kilo, string _type);
	string getType();

};

/*#########################Class Bus#########################*/

class Bus : public Vehicule
{
private:
	int nb_place, nb_essieux;
public:
	Bus(string _marque, unsigned int puiss, unsigned int kilo, int _nb_place, int _nb_essieux);
	int getEssieux();
	int getPlace();
};