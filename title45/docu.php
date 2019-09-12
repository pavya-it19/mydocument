<?php
$servername="121.200.55.60:3307";
$username="2019UIT1076";
$password=" 18-08-2002";
$database="2019UIT1076";
$conn=mysqli_connect($servername,$username,$password,$database);
if(!$conn){
die("connection failed:".mysqli_connect_error());
}
echo "(connected successfully";
$sql="INSERT INTO mytable(id,name)VALUES(1,'BIT')";
if(mysqli_query($conn,$sql)){
echo"New record created successfully";
}else{
echo"Error:".$sql."<br>".mysqli_error($conn);
}
$sql="SELECT id,name FROM mytable";
$result=mysqli_query($conn,$sql);
if(mysqli_num_rows($result)>0){
while($row=mysqli_fetch_assoc($recult)){
echo"id:".$row["id"]."-Name:".$row["name"].""."<br>";
}
}else{
echo"0 results";
}
?>_
