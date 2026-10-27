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
        for($i=1;$i<=10;$i++)
            {
                echo"$n x $i =".$n*$i."<br>";
            }
    }
    ?>
      </body>
</html>