<html>
	<head>
		<title>XYZ Univerity Results Portal</title>
		<style>
			.green-higlight{
				font-weight: bold;
				color: LimeGreen;
			}
		</style>
	</head>
	<body style="background: linear-gradient(to bottom, #33ccff 0%, #ff99cc 100%);">
	<table bgcolor="white" width="60%" height="100%" align="center" style="border-collapse:collapse;">
	<tr height=15% style="border-bottom: 2px solid  #a569bd ;">
		<td style="font-family:Helvetic;font-size:20pt;font-style:italic;color:olive;">XYZ Univerity Results Portal</td>
	</tr>
	<tr style="text-align:center;" height=25%>
		<td>
		<h2>Register Number</h2>
		<form method="post">
 		<input type="text" name="reg_no" style="font-size:20px;height:40px" required>
 		<br>
 		<button name="input_btn" style="height: 35px;margin-top:5px;font-size: 15px;">Submit</button>
 	</form>
		</td>
	</tr>
	<tr><?php
		if($_POST['reg_no']){
			$reg_no=$_POST['reg_no'];
			$host="host = 127.0.0.1";
	   		$port="port = 5432";
	   		$dbname="dbname = postgres";
	   		$credentials="user = postgres password=postgres";

		   $db = pg_connect( "$host $port $dbname $credentials"  );
		   if(!$db) {
		      echo "Error : Unable to open database\n";
		      exit;
		   }
		   $sql_query ="SELECT * from results WHERE reg_no='".$reg_no."'";
		   $ret = pg_query($db, $sql_query);
		   if(pg_num_rows($ret)>0){
		   	$record=pg_fetch_assoc($ret);
			echo '
			<td style="vertical-align: top;">
				<table style="margin-top:8%;border-collapse:collapse;font-size:15pt;" cellpadding=5px align="center" border=2 width=70%>
					<tr>
						<td  width=40%>Student Name</td>
						<td><span class="green-higlight">'.strtoupper($record["name"]).'</span></td>
					</tr>
					<tr>
						<td>Register Number</td>
						<td><span class="green-higlight">'.strtoupper($record["reg_no"]).'</span></td>
					</tr>
					<tr>
						<td>Marks</td>
						<td><span class="green-higlight">'.strtoupper($record["mark"]).'</span></td>
					</tr>
					<tr>
						<td>Grade</td>
						<td><span class="green-higlight">'.strtoupper($record["grade"]).'</span></td>
					</tr>
				</table>
				
			</td>';
		}
		else{
			echo '
			<td style="vertical-align: top;text-align:center;font-size:15pt;">
			<i>Invalid Register Number.</i>
			</td>';
		}
	}
	?>
</tr>
</table>		
</body>
</html>
