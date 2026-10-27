<html>
    <body>
        <form method="post">
            enter the firts number:
            <input type="number" name="n1" required><br>
             enter the second number:
            <input type="number" name="n2" required><br>
            <input type="submit" name="btn" value="addition">
             <input type="submit" name="btn" value="substraction">
              <input type="submit" name="btn" value="multiplication">
        </form>

        <?php
        $a=$_POST['n1'];
        $b=$_POST['n2'];
        $c=$_POST['btn'];

        if($c=="addition")
            {
                echo"ADDTION IS:".($a+$b);
            }
        else if($c=="substraction")
            {
                echo"substraction is:".($a-$b);
            } 
        else if($c=="multiplication") 
            {
                echo"multiplication is:".($a*$b);
            }      

            ?>
    </body>
</html>