<html>
	<head>
		<title>Array Operations</title>
	</head>
	<body>
	<div align='center'>
		<h2>Select the operation</h2>
		<h5>names = [Sony, Sharan, Mandavya, Dona, Elsa, Sony, Minona, Peblin, Samika, Anu]</h5>
	<form method='POST'>
	<select name='option'>
		<option>Select an action</option>
		<option value="1">Display the contents</option>
		<option value="2">Display the sorted array</option>
		<option value="3">Display the array without the duplicate elements</option>
		<option value="4">Remove the last element and display</option>
		<option value="5">Display the array in reverse order</option>
	</select><br><br>
	Search a name
	<input type='text' name='search' size='40'><br>
	To search for a name, enter the term in the above text box and click <i>Submit</i>.<br>
	<input type='submit' value='Submit'>
	</form>
	</div>
</body>
</html>
<?php
		$name=array("Sony", "Sharan", "Mandavya", "Dona", "Elsa", "Sony", "Minona", "Peblin", "Samika", "Anu");
		
		echo "<h3>";
		echo "<div align='center'>";
		if($_POST)
		{
			if($_POST['search']!="")
				{
					if(in_array($_POST['search'],$name))
						echo $_POST['search']." is present in the list.";
					else
						echo $_POST['search']." is not present in the list.";
				}

			else
			{		
					//option 1
					if($_POST['option']=='1')
					{
						foreach ($name as $val) 
						{
							echo $val.'<br>';
						}
					}
					//option 2
					elseif($_POST['option']=='2')
					{	$temp_name=$name;
						for($i=0;$i<count($temp_name);$i++)
						{
							for($j=$i+1;$j<count($temp_name);$j++)
							{
								if(strcasecmp($temp_name[$i], $temp_name[$j])>0)
								{
									$temp=$temp_name[$i];
									$temp_name[$i]=$temp_name[$j];
									$temp_name[$j]=$temp;
								}
							}
						}
						foreach ($temp_name as $val) 
						{
							echo $val.'<br>';
						}
					}
					//option 3
					elseif($_POST['option']=='3')
					{	$temp_name=$name;
						for($i=0;$i<count($temp_name);$i++)
						{
							if(!in_array($temp_name[$i], array_slice($temp_name, $i+1),TRUE))
								{
									echo $temp_name[$i]."<br>";
								}
						}
					}
					elseif($_POST['option']=='4')
					{	$temp_name=array_slice($name,0,-1);
						foreach($temp_name as $val)
						{
									echo $val."<br>";
						}
					}
					elseif($_POST['option']=='5')
					{	$temp_name=$name;
						for($i=count($temp_name)-1;$i>=0;$i--)
						{
									echo $temp_name[$i]."<br>";
						}
					}
				}
		}
		echo "</h3></div>";
		?>
