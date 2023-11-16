<?php
// Connect to the database
$conn = mysqli_connect("localhost", "root", "", "logindata");

// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

// Get form data
$selectusertype=$_POST['selectusertype'];
$Username = $_POST['username'];
$Password = $_POST['pwd']; 

// Insert data into the database
$sql = "INSERT INTO register(selectusertype,Username,Password) VALUES('$selectusertype','$Username','$Password')";

if (mysqli_query($conn, $sql)) {
    header("Location:projectt.html");
} else {
    $template=file_get_contents("register.html");
    $template=str_replace("welcome","invalid",$template);
    echo($template);
}

// Close the database connection
mysqli_close($conn);
?>
