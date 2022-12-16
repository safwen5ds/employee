#include "list.h"
#include "employee.h"
#include <iostream>
#include <cstring>
using namespace std;
list::list()
{
   this->nb = 0;
}

int list::ajoute(employee e)
{
    if (this->nb == this->liste_nb_max)
    {
        return -1;

    }
    else
    {
        this->t[this->nb] = e;
        this->nb++;
    }
    return 0;

}
void list::affiche()
{
    if (this->nb==0)
    {
        cout << "Liste Vide !"<< endl;
    }else{
        for (int i = 0;i<this->nb;i++)
        {
            this->t[i].afficher();
        }


   }
}
void list::recherche(list *l2,char* nom)
{
     for (int i = 0;i<this->nb;i++)
    {

        if (strcmp(this->t[i].Getnom(),nom)==0)
        {
            l2->ajoute(this->t[i]);
        }

    }
    l2->affiche();

}

