<html>
    <body>
        <form method="post">
          <h2>ALL subject marks and percentage</h2>
          subject1 TCS:
          <input type="number" name="tcs" required><br><br>
          subject2 DS:
           <input type="number" name="DS" required><br><br>
           subject3 PHP:
           <input type="number" name="php" required><br><br>
           subject4 SE:
          <input type="number" name="SE" required><br><br>
          subject5 OS:
          <input type="number" name="OS" required><br><br>
          <input type="submit" name="submit" value="submit">
        </form>

        <?php
        $TCS=$_POST['tcs'];
         $DS=$_POST['DS'];
          $PHP=$_POST['php'];
           $SE=$_POST['SE'];
            $OS=$_POST['OS'];

            $total=$TCS+$DS+$PHP+$SE+$OS;
            $percentage=$total/5;
            echo"total marks:".$total."<br>";
            echo "percentage:".$percentage."<br>";
            ?>
    </body>
</html>