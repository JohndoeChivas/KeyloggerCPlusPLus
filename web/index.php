<?php

if(isset($_POST["text"]))
{
    
    echo "Text is save";
    $txt = $_POST['text'];
    $myfile = file_put_contents('logs.txt', $txt.PHP_EOL , FILE_APPEND | LOCK_EX);
     
        
}

else{
    echo "It's just a demo, it will be delete after... FINALLY I HOPE THIS";
    //$txt = $_POST['text'];
    //$myfile = file_put_contents('logs.txt', $txt.PHP_EOL , FILE_APPEND | LOCK_EX);
    
     
    
}
?>