<html>
 <head>
  <title>Perfect Numbers</title>
 </head>
 <body>
  <form method="post">
    <div style="text-align:center;">
      <h2>Enter a number:</h2>
    <input type="number" name="num_input" style="font-size:20px;height:40px" required>
    <br>
    <button value="Test" name="input_btn" style="height: 35px;margin-top:5px;font-size: 15px;">Check</button>
  </div>
  </form>
 <?php 
 if($_POST){
  $num=(int)$_POST['num_input'];
  $sum=0;
  for($i=1;$i<=$num/2;$i++){
    if($num%$i==0)
      $sum+=$i;
  }
  if($sum>$num)
    echo "<h3 align='center'>".$num." is abundant.</h3>";
  elseif($sum<$num)
    echo "<h3 align='center'>".$num." is deficient.</h3>";
  else
    echo "<h3 align='center'>".$num." is perfect.</h3>";
 }
 ?> 
 </body>
</html>