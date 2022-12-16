#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class employee
{
    public:
        employee(char* nom,char* prenom,int salaire);
        employee();
        char* Getnom() { return nom; }
        void Setnom(char* val) { nom = val; }
        char* Getprenom() { return prenom; }
        void Setprenom(char* val) { prenom = val; }
        int Getsalaire() { return salaire; }
        void Setsalaire(int val) { salaire = val; }
        void saisir();
        void afficher();

    protected:

    private:
        char* nom;
        char* prenom;
        int salaire;
};

#endif // EMPLOYEE_H
