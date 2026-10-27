<html>
    <body>
        <form method="post">
            enter string:
            <input type="text" name="t" required><br><br>
            <input type="submit" value="submit"><br><br>
        </form>
        <?php
        $t=$_POST['t'];
        $rev=strrev($t);
        if($t==$rev)
            {
                echo"string is palindrome";
            }
            else
                 echo"not a palindrome";
                ?>
                    
                </body>
                </html>