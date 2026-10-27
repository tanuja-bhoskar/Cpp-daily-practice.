<html>
    <body>
        <form method="post">
            enter the  number:
            <input type="number" name="n" required><br><br>
            <input type="submit" value="submit"><br><br>
<?php
if($_POST)
    {
        $n=$_POST['n'];
        $t=$n;
        $s=0;


    while($t>0)
        {
            $r=$t%10;
            $s=$s+$r*$r*$r;
            $t=(int)($t/10);
        }

        if($s=$n)
        echo"Amstrong number";
       else
        echo"non Amstrong number";
            
    }
    ?>
    </body>
</html>