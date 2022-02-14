<html>
<head>
	<title>String Reversal</title>
</head>
<body>
    <div style="text-align: center">
 <form method="post" name="form1">
 			<h2>Enter the string to reverse:</h2>
 		<input type="text" name="string" style="font-size:20px;height:40px" required>
 		<br>
 		<button name="input_btn" style="height: 35px;margin-top:5px;font-size: 15px;">Reverse</button>
 </form>
</div>
</body>
</html>

<?php
if (isset($_POST['string'])){
	$string = $_POST['string'];
	if($string!==''){
		$length = strlen($string);
		$rev_str="";  
		for ($i=($length-1) ; $i >= 0 ; $i--)   
		{  
			  $rev_str.=$string[$i];
		}
		echo "<h3 align='center'>The reverse of ".$string." is <i>".$rev_str."</i>.</h3>";
	}  
} 
?>