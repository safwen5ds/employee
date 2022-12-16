#include "employee.h"
#include <iostream>
#include <cstring>
using namespace std;
employee::employee(char* nom,char* prenom,int salaire)
{
    this->nom = nom;
    this->prenom = prenom;
    this->salaire = salaire;
}
employee::employee()
{

}

void employee::saisir()
{
    char name[100];
    char prenom[100];
    int salaire;
    cout <<"Saisir nom employee !"<<endl;
    cin >> name;
    cout <<"Saisir prenom employee !"<<endl;
    cin >> prenom ;
    cout <<"Saisir salaire employee !"<<endl;
    cin >> salaire;
    strcpy(this->nom,name);
    strcpy(this->prenom,prenom);
    this->salaire = salaire;


}
void employee::afficher()
{
    cout << "NOM_EMP = " <<this->nom<<endl;
    cout << "PRENOM_EMP = " <<this->prenom<<endl;
    cout << "SALAIRE_EMP = " <<this->salaire<<endl;


}





