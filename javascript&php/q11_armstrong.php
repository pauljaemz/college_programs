<html>
 <head>
  <title>Armstrong Number Tester</title>
 </head>
 <body>
 	<form method="post">
 		<div style="text-align:center;">
 			<h2>Enter a number:</h2>
 		<input type="number" name="num_input" style="font-size:20px;height:40px" required>
 		<br>
 		<button value="Test" name="input_btn" style="height: 35px;margin-top:5px;font-size: 15px;">Test</button>
 	</div>
 	</form>
 <?php 
 if($_POST){
 	$num=(int)$_POST['num_input'];
 	$temp=$num;
 	$count=0;
 	$sum=0;
 	while($temp){
 		$temp=(int)($temp/10);
 		$count+=1;
 	}
 	$temp=$num;
 	while($temp){
 		$dig=$temp%10;
 		$sum+=(pow($dig,$count));
 		$temp=(int)($temp/10);
 	}
 	if($sum==$num)
 		echo "<h3 align='center'>".$num." is an Armstrong number.</h3>";
 	else
 		echo "<h3 align='center'>".$num." is not an Armstrong number.</h3>";
 	
 }
 ?> 
 </body>
</html>