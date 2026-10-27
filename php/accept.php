<html>
    <body>
        <form method="post">
        enter name:
        <input type="text" name="n" required><br><br>
        enter age:
        <input type="text" name="a" required><br><br>
        <input type="submit" name="submit" value="submit"><br><br>
         </form>
<?php
/*if(isset($_GET['submit']))
    {
        $n=$_GET['n'];
        $a=$_GET['a'];


        echo"HELLO ".$n."<br>";
        echo"your name is:".$a."<br>"; 
        }*/

if($_POST)
{
   $n=$_POST['n'];
   $a=$_POST['a'];
    echo"Hello ".$n."<br>";
    echo"your age is:".$a."<br>";
}
?>
       
    </body>
</html>