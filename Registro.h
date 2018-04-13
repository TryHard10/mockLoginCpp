#ifndef REGISTRO_H_INCLUDED
#define REGISTRO_H_INCLUDED

class Registro{
    private:
        string user;
        string pass;
        string rol;
    public:
        Registro();
        Registro(string,string,string);
        string getUser();
        string getPass();
        string getRol();
};

#endif // REGISTRO_H_INCLUDED
