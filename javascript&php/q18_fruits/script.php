<?php
		if($_POST){
			echo "<h2 align='center'>Your Selection<h2><h3 align='center'>";
			foreach ($_POST['fruit'] as $val) {
				echo $val.'<br>';
			}
			echo "</h3>";

		}
		?>