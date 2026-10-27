<?php
  $arr=array(10,20,30,40,50);
  $max=$arr[0];
  $min=$arr[0];
  for($i=1;$i<count($arr);$i++)
    {
        if($arr[$i]>$max)
             $max=$arr[$i];
             if($arr[$i]<$min)
             $min=$arr[$i];
    }
    echo"MAXIMUM VALUE:".$max."<br>";
    echo"MINIMUM VALUE:".$min;
    ?>