<html>
    <body>
        <form method="post">
            enter string:
            <input type="text" name="t" required><br><br>
            <input type="submit" value="submit"><br><br>
        </form>
        <?php
        $t=$_POST['t'];
        $count=0;
        for($i=0;$i<strlen($t);$i++)
            {
                if(strpos("aeiouAEIOU",$t[$i])!==false)
                    {
                      $count++;
                    }

            }
            echo"string contain"." ".$count."vowels";
            ?>
    </body>
</html>