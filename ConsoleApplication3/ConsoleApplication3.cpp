// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <io.h> 
#include <cstdlib>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <tchar.h>
#include <urlmon.h>
#include <Windows.h>


using namespace std;
#pragma comment(lib, "urlmon.lib")


int main()
{
	
	string password;
	std::cout << "\n\n";
	std::cout << "                                                    Decrypt password: ";
	
	getline(cin, password, '\n');
	if ( password == "btc")
	{
		
	}
	else
	{
		cout << "" << "\n";
		
		return 0;
	}


	std::cout << "\n\n\n\n\n\n\n\n";
	std::cout << "************************************************************************************************************************\n\n";
	std::cout  << "                                                       Eason Enterprise\n";
	std::cout  << "                                           This Will Set Static DNS and Disable IPV6. \n";
	std::cout << "                                            Then will downalod Malwarebytes antivirus.\n"; 
	std::cout << "                                                         Please wait. \n\n";
	std::cout << "************************************************************************************************************************\n";
	

	keybd_event(VK_RETURN,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	std::cout << system("powershell Disable-NetAdapterBinding -Name 'Ethernet' -ComponentID ms_tcpip6");

	keybd_event(VK_RETURN,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	std::cout << system("powershell Set-DnsClientServerAddress -InterfaceAlias 'Ethernet' -ServerAddresses ('8.8.8.8','8.8.4.4','10.0.0.1')");

	keybd_event(VK_RETURN,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	std::cout << system("ipconfig /flushdns");
	std::cout << system("cls");
	std::cout << "************************************************************************************************************************\n\n";
	std::cout << "                                                Malwarebytes is going to downalod\n";
	std::cout << "                                                    Save To Disk And Install. \n";
	std::cout << "************************************************************************************************************************\n";
	std::cout << system("PAUSE");
	ShellExecute(0, 0, L"https://downloads.malwarebytes.com/file/mb3/", 0, 0, SW_SHOW);

	
}


