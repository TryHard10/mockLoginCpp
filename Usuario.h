#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED
#include <string.h>

using namespace std;

class Usuario {
    private:
        string user;
        string pass;
        string rol;
    public:
        Usuario();
        Usuario(string,string,string);
        string getUser();
        string getPass();
        string getRol();
};

#endif // USUARIO_H_INCLUDED
