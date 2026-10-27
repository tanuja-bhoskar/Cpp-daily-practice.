<?php
function strlenght($str)
{
    $count=0;
    while(isset($str[$count]))
        {
            $count++;
        }
        return $count;
}
echo"length"." ".strlenght("bhoskar");
?>