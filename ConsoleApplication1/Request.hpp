#pragma once
#ifndef REQUEST_H
#define REQUEST_H
#define _CRT_SECURE_NO_WARNINGS
#include <curl/curl.h>
#include <string>
#include <stdio.h>
using namespace std;

class Request {
private:
	

public:
	Request();
	int request(string host,string fichier);
	int upload(string host,string fichier);
	string readFile(string fichier);
};


#endif