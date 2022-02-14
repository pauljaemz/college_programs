<!DOCTYPE html>
<html>
<head>
  <title>Bio.ME</title>
</head>
<body>
  <h2 align='center'>BIO-DATA</h2>
  <table width="60%" align="center" cellpadding="4px">
  <tr>
    <td width="65%"><span style="font-family:Verdana;font-size:20px;">
    <?php 
    if($_POST){
      echo $_POST['fname'];?>
      </span><br>
    <?php
    if($_POST['address']){
      $txt = explode(",",$_POST['address']); 
      $txt=join(",<br>",$txt); 
      echo $txt;
    }?>
  </td>
    <td>
    &#9742;<?php echo $_POST['phone'];?><br>
    &#128231;<?php echo $_POST['email'];?>
    </td>
  </tr>
  <tr><td colspan=2><hr style="border-top: 2px solid red;"></td></tr>
  <tr><td style="font-family:Verdana;color:grey;font-size:18px;">
      <?php echo $_POST['title'];?>
    </td>
  </tr>
  <tr width="60%">
    <td>Nationality</td><td><?php echo $_POST['nation'];?></td>
  </tr>
  <tr><td>Gender</td><td><?php echo $_POST['gender'];?></td></tr>
  <tr><td>Age</td><td><?php echo $_POST['age'];?></td></tr>
  <tr>
    <td colspan="2"><i>Educational Qualifications</i></td>
  </tr>
  <?php 
    $edq_arr=[];
    $exp_arr=[];
    foreach ($_POST as $key => $value) {
      if(preg_match("/^(edq)/",$key)){
        array_push($edq_arr,$key);
      }
      else if(preg_match("/^(exp)/",$key)){
        array_push($exp_arr,$key);
      }
    }
    foreach($edq_arr as $key=>$value){
  ?>
  <tr><td colspan='2'>&nbsp;&nbsp;
    <?php
    echo ($key+1)."&nbsp;.".$_POST[$value];}?>
      </td>
  </tr>
  <tr>
    <td colspan="2"><i>Professional Experience</i></td>
  </tr>
  <?php
  foreach($exp_arr as $key=>$value){
  ?>
  <tr><td colspan='2'>&nbsp;&nbsp;
    <?php 
    echo ($key+1).".&nbsp;".$_POST[$value];}
  }
  ?>
    </td>
  </tr>
</table>
</body>
</html>