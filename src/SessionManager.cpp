//
// Created by Valer on 01/06/2021.
//


#include "SessionManager.h"
std::mutex SessionManager::mute;
SessionManager* SessionManager::sessionManager{ nullptr };
SessionManager::SessionManager() {}


SessionManager* SessionManager::getInstance()
{
    if (sessionManager == nullptr)
    {

        throw std::string{ "Sesion no iniciada" };


    }
    return sessionManager;

}



void SessionManager::login(Usuario* usuario)
{
    std::lock_guard<std::mutex> lock(mute);

    if (sessionManager == nullptr )
    {
        sessionManager = new SessionManager();



    }
    else
    {
        throw std::string{ "La sesion ya existe" };

    }


}

void SessionManager::logout()
{
    std::lock_guard<std::mutex> lock(mutex);

    if (sessionManager != nullptr)
    {
        sessionManager = nullptr;

    }
    else
    {
        throw std::string{ "Sesion no iniciada" };

    }

}