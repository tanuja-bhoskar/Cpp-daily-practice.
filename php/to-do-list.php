<html>
<body>
<h3>TO-DO LIST</h3>
<form method="post">
<input type="text" name="task" placeholder="enter new tast">
<input type="submit" name="add" value="add task">
</form>
<?php
session_start();
if(isset($_SESSION['task']))
$_SESSION['task']=array("study PHP","COMPLETE HOMEWORK");

if(isset($_POST['add']) && $_POST['task']!=" ")
    $_SESSION['task'][]=$_POST['task'];

foreach($_SESSION['task']as $task)
    {
        echo'<input type="checkbox">'.$task."<br>";
    }
?>
</body>
</html>