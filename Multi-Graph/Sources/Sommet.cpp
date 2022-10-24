#include "../Headers/Sommet.hpp"
#include <iostream>
using namespace std;

Sommet::Sommet(string _etiquette):
    etiquette{_etiquette}{}

Sommet::Sommet(Sommet &s): //Constructeur par copie
    Sommet(s.etiquette){}

Sommet::~Sommet(){}

string Sommet::get_etiquette() const
{
    return etiquette;
}


//Surcharge de l'opérateur <<
ostream& operator<<(ostream& out, Sommet const &s)
{
    out << "Etiquette : " << s.get_etiquette() << endl;
    return out;
}