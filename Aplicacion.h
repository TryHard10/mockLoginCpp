#ifndef APLICACION_H_INCLUDED
#define APLICACION_H_INCLUDED
#include <string.h>
#include "Usuario.h"
#include "Registro.h"

using namespace std;
class Aplicacion {
    private:
        Usuario _usuario;
    public:
        Aplicacion();
        bool Login();
        void ConectarBD(string, Registro&);
        void imprimirMenu();
};

#endif // APLICACION_H_INCLUDED
