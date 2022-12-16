#ifndef LIST_H
#define LIST_H
#include "employee.h"

class list
{

    public:

        list();

        int Getnb() { return nb; }
        void Setnb(int val) { nb = val; }
        int ajoute(employee e);
        void affiche();
        void recherche(list *l2,char* nom);
    protected:

    private:
            int liste_nb_max = 100;
            int nb ;
            employee t[100];




};

#endif // LIST_H
