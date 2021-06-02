
#include <iostream>
#include "Usuario.h"
#include"SessionManager.h"




int main()
{
    std::cout << "Hello, Universidad Nacional!" << std::endl;
	
	Usuario* usuario = new Usuario("ValeriaAC", "est.2021");
	Usuario* usuario2 = new Usuario("MarcoDL", "est.2021");
	try
    {

	  //1  SessionManager::login(usuario);
		   SessionManager *sessionManager = SessionManager::getInstance();
		//3 SessionManager::logout();
		//2 SessionManager::login(usuario2);
		
	}

	catch (const std::string e)
	{
		std::cout << "The exception has a value of : " << e << '\n';
	}

}
