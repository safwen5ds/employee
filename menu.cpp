#include "menu.h"
#include <iostream>
#include <cstring>
#include "employee.h"
#include "list.h"
using namespace std;
char c1 =130;
char c2 = 133;
menu::menu()
{

}
int menu::choix()
{
   cout << "|1| Afficher La Liste"<<endl;
   cout << "|2| Ajouter Un Employ"<< c1 <<"e "<<endl;
   cout << "|3| Rechercher Tous Les Employ"<< c1 <<"es Portant Un Nom Donn"<< c1 <<endl;
   cout << "|0| Quitter"<<endl;
   cout << "Saisir Votre Choix ! " << endl;
   int c;
   cin >> c;
   while (c<0 || c>4)
   {
        cout << "Choix Invalide !" << endl;
        cout << "Saisir Votre Choix ! " << endl;
        cin >> c;
   }
   return c;
}
bool menu::traiter_choix(list* l, int choix)
{
    if (choix!=0)
    {
        int k;
   if (choix == 1)
   {
       l->affiche();
   }else if (choix == 2)
   {
         employee *e1 = new employee();
         e1->saisir();
         k = l->ajoute(*e1);
         if (k==-1)
         {
            cout << "Le Tableau Est Plein !" << endl;;
         }else
             cout << "L'employee Est Ajout"<< c1 <<"e !" << endl;
  }else if (choix == 3)
   {
          list* l2 = new list();
          cout << "Saisir Nom "<< c2 <<" Rechercher !"<<endl;
          char c[100];
          cin >> c;
          l->recherche(l2,c);


   }
    return true;
    }
  return false;
}
void menu::m(list* l)
{
    int c = choix();
    while (traiter_choix(l,c)== true)
    {

        c = choix();

    }
    cout << "Fin Programme !";
}


