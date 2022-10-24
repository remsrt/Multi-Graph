#ifndef _VERTEX
#define _VERTEX
#include <string>

class Sommet
{
    private:
        std::string etiquette;
        int marquage;
    public:
        Sommet(std::string _etiquette);
        Sommet(Sommet &s);
        ~Sommet();
        std::string get_etiquette() const;
};

std::ostream& operator<<(std::ostream& out, Sommet const &s);

#endif