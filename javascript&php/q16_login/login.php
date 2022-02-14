<html>
<head>
	<link rel="stylesheet" href="style.css"/>
</head>
<?php
	if(isset($_POST))
	{
		$name=$_POST['username'];
		$pass=$_POST['password'];
		$host="host = 127.0.0.1";
   		$port="port = 5432";
   		$dbname="dbname = postgres";
   		$credentials="user = postgres password=postgres";

	   $db = pg_connect( "$host $port $dbname $credentials"  );
	   if(!$db) {
	      echo "Error : Unable to open database\n";
	      exit;
	   }
	  $sql_query ="SELECT * from users WHERE username='".$name."' AND password='".$pass."'";
	  $ret = pg_query($db, $sql_query);
	  	if(pg_num_rows($ret)>0){
				session_start();
				$_SESSION['username'] = $name;
				echo "<div class='form'>
	        		<p>Hello, ".$_SESSION['username']."!</p>
	        		<p>You are now logged in.</p>";
        	}
        	else
        	{
        		echo "<div class='form'>
                  	<h3>Incorrect Username/password.</h3><br/>
                  	<p class='link'>Click here to <a href='index.html'>Login</a> again.</p>
                  	</div>";
        	}
		}


?>