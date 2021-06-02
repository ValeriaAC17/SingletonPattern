//
// Created by Valer on 01/06/2021.
//

#ifndef SINGLETONPATTERN_SESSIONMANAGER_H
#define SINGLETONPATTERN_SESSIONMANAGER_H
#include<iostream>
#include <mutex>
#include"Usuario.h"
using namespace std;

class SessionManager
{

private:
    SessionManager();
    Usuario* usuario;
    static SessionManager* sessionManager;
    static std::mutex mute;

public:
    static SessionManager* getInstance();
    static void login(Usuario* usuario);
    static void logout();



};

#endif //SINGLETONPATTERN_SESSIONMANAGER_H
