<html>
    <body>
        <h1>USER INFORMATION</h1><br><br>
        <form method="post">
        ENTER USER NAME:
        <input type="text" name="n1" required><br><br>
         ENTER AGE:
         <input type="number" name="a" required><br><br>
         ENTER GENDER:
         <input type="radio" name=r1 value="MALE">MALE
          <input type="radio" name=r1 value="FEMALE">FEMALE<br><br>
          ENTER Course:
          <select name="course">
            <option>course</option>
            <option> BSCIT</option>
             <option> BSCCS</option>
              <option> BSCDS</option>
               <option> BSCAI</option>
          </select><br><br>
          ENTER YEAR:
          <input type="checkbox" name="year" value="FY">FY
          <input type="checkbox" name="year" value="SY">SY
          <input type="checkbox" name="year" value="TY">TY<br><br>
          SELECT SUBJECT:
          <input type="checkbox" name="s" value="php">php
          <input type="checkbox" name="s" value="cn">cn
          <input type="checkbox" name="s" value="cpp">cpp<br>
          <input type="submit" name="sub" value="get info"><br><br>
        </form>

        <?php
       $n=$_POST['n1'];
       $a=$_POST['a'];
       $r=$_POST['r1'];
       $c=$_POST['course'];
       $y=$_POST['year'];
       $s=$_POST['s'];


       echo"NAME:".$n."<br>";
        echo"AGE:".$a."<br>";
         echo"gender:".$r."<br>";
          echo"course:".$c."<br>";
           echo"year:".$y."<br>";
            echo"sub:".$s."<br>";
?>
        </body>
</html>