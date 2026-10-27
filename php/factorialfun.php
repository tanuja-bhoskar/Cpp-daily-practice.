<html>
    <body>
        <form method="post">
            enter the  number:
            <input type="number" name="n" required><br><br>
            <input type="submit" value="submit"><br><br>

            <?php
            $n=$_POST['n'];
             function factorial($n)
             {
                $fact=1;
                for($i=1;$i<=$n;$i++)
                    {
                        $fact=$fact*$i;

                    }
                    return $fact;
             }
             echo"factorial=".factorial(5);
             ?>