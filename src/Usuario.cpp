//
// Created by Valer on 01/06/2021.
//

#include "Usuario.h"
Usuario::Usuario() {}
Usuario::~Usuario() {}
Usuario::Usuario(string username, string password) : username(username), password(password) {}
void Usuario::setPassword(string password) { this->password = password; }
void Usuario::setUsername(string username) { this->username = username; }
string  Usuario::getUsername() { return username; }
string  Usuario::getPassword() { return password; }
