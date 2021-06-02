//
// Created by Valer on 01/06/2021.
//

#ifndef SINGLETONPATTERN_USUARIO_H
#define SINGLETONPATTERN_USUARIO_H
#include<iostream>
#include<sstream>
#include <string>
using namespace std;

class Usuario
{
private:
    string username, password;

public:
    Usuario(string username, string password);
    Usuario();
    ~Usuario();
    string getUsername();
    string getPassword();
    void setUsername(string username);
    void setPassword(string password);
};

#endif //SINGLETONPATTERN_USUARIO_H
