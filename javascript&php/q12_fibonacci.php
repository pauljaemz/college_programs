<html>
 <head>
  <title>Fibonacci Series</title>
 </head>
 <body>
  <form method="post">
    <div style="text-align:center;">
      <h2>Enter the limit</h2>
    <input type="number" name="num_input" style="font-size:20px;height:40px" required><br>
    <button name="input_btn" style="height: 35px;margin-top:5px;font-size: 15px;">Generate!</button>
  </div>
  </form>
 </body>
</html>
<?php 
 if($_POST){
  $num=(int)$_POST['num_input'];
  echo "<h3 align='center'>Fibonacci Series upto ",$num,"</h3>";
  $a=0;
  $b=1;
  $c=$a+$b;
  echo "<h3 align='center'>";
  echo $a,"&nbsp;",$b,"&nbsp;";
  while($c<=$num){
  echo $c,"&nbsp;";
  $a=$b;
  $b=$c;
  $c=$a+$b;
   }
  echo "</h3>";
    }
 ?> 