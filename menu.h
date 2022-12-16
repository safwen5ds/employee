#ifndef MENU_H
#define MENU_H
#include "menu.h"
#include "list.h"
#include "employee.h"

class menu
{
    public:
        menu();
        int choix();
        bool traiter_choix(list* l, int choix);
        void m(list* l);

    protected:

    private:
};

#endif // MENU_H
