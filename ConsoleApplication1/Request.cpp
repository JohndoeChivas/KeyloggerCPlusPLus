#include "Request.hpp"
#include <iostream>
#include <fstream>





Request::Request()
{
    
}

string Request::getText()
{
    return text;
}

void Request::setText(string words)
{
    text = words;
}

bool Request::emptyText()
{
    if (getText() == "") {
        return true;
    }
    return false;
}

int Request::request(string host,string fichier)
{

    CURL* curl;
    string text = readFile(fichier);
    if (text != "") {
        std::string postParam("text=");
        postParam += text;
        cout << postParam;
        curl = curl_easy_init();
        if (curl) {

            /* SPECIFY REQUEST */
            curl_easy_setopt(curl, CURLOPT_URL, host.c_str());
            curl_easy_setopt(curl, CURLOPT_POST, 1);
            curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postParam.c_str());


            /* Perform the request, res will get the return code */
            auto res = curl_easy_perform(curl);
            /* Check for errors */
            if (res != CURLE_OK)
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));

            /* always cleanup */
            curl_easy_cleanup(curl);
        }
        curl_global_cleanup();

    }


	return 0;
}

int Request::upload(string host,string fichier)
{

    FILE* file;
    CURL* curl;
    file = fopen(fichier.c_str() , "wb");
    curl = curl_easy_init();
    /* HOST AND PATH TO DOWNLOAD */
    curl_easy_setopt(curl, CURLOPT_URL, host);
    /* WHERE WRITE AND PAST DATA  */
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, file);
    /* SETUP ERROR */
    curl_easy_setopt(curl, CURLOPT_FAILONERROR, 1L);

    auto res = curl_easy_perform(curl);

    if (res == CURLE_OK) {
        printf("Download successfull \n");
    }
    else {
        printf("ERRORR: ", curl_easy_strerror(res));
    }
    fclose(file);
    curl_easy_cleanup(curl);

    return 0;


}

string Request::readFile(string fichier)
{
    text = "";
    ifstream file; 
    string words ;
    file.open(fichier);
    if (!file) {
        cerr << "Unable to open " + fichier;
    }
    /*
    while (file >> words) {
        text += words;
    }*/
    while (getline(file, words)) {
        text += words;
        
    }
    //cout <<text ;
    return text;
}

