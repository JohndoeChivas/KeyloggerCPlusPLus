#ifndef CHOICE_H
#define CHOICE_H
#include <string>

using namespace std;


class Choice {
private:
	int c;
	string fileName;
	string website;


public:
	void askChoice();

	int getChoice();
	void setChoice(int c);

	string getFile();
	void setFile(string file);

	string getSite();
	void setSite(string site);

	void setConfig();
	



};

#endif
