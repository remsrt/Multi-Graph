#include <iostream>
#include "../Headers/Arete.hpp"
using namespace std;

void test_creation_aretes()
{
    Sommet s1("A");
    Sommet s2(s1);

    Arete a1("C", "D", 1);
    Arete a2(&s1,&s2,2);

    cout << a1 << endl;
    cout << a2 << endl;
}
