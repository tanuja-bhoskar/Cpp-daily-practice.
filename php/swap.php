<html>
    <body>
        <form method="post">
            enter the firts number:
            <input type="number" name="n1" required><br>
             enter the second number:
            <input type="number" name="n2" required><br>
             <input type="submit" value="submit"><br><br>
</form>
<?php
     $n1=$_POST['n1'];
     $n2=$_POST['n2'];
     echo"before swaping:";
     echo $n1."<br>";
      echo $n2."<br>";
      echo"after swaping:";
      $temp=$n1;
      $n1=$n2;
      $n2=$temp;
       echo $n1."<br>";
      echo $n2."<br>";
      ?>
      </body>
</html>