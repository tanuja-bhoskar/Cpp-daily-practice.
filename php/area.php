<html>
    <body>
        <form method="post">
        enter the radius:
        <input type="number" name="r" required><br><br>
        enter the side:
        <input type="number" name="s" required><br><br>
        enter the length:
        <input type="number" name="l" required><br><br>
        enter the breadth:
        <input type="number" name="b" required><br><br>
        <input type="submit" name="submit" value="calculate">
  </form>
<?php
if(isset($_POST['submit']))
    {
        $r=$_POST['r'];
        $s=$_POST['s'];
        $l=$_POST['l'];
        $b=$_POST['b'];

        echo"area of circle=".(3.14*$r*$r)."<br>";
        echo"area of square=".($s*$s)."<br>";
        echo"area of rectangle=".($l*$b)."<br>";
    }
    ?>
    </body>
</html>