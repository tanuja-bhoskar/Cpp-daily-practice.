<?php
$str1="HELLO";
$str2="hello";
if(strncasecmp($str1,$str2,5)==0)
    {
        echo"string is equal";
    }
    else
    {
        echo"string is not equal.";
    }
    ?>