<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "logindata";
$conn = new mysqli($servername, $username, $password, $dbname);
$Username = isset($_POST['username']) ? $_POST['username'] : '';
$Password = isset($_POST['pwd']) ? $_POST['pwd'] : '';

$sql = "SELECT Username FROM register WHERE Username = ? AND Password = ?";
$stmt = $conn->prepare($sql);
$stmt->bind_param("ss", $Username, $Password);
$stmt->execute();
$stmt->bind_result($result_username);
$stmt->fetch();
if ($result_username) {
    header("Location:customerpage.html");
    echo "adfg";
}
else {
    echo($Username);
    echo($Password);
}
$stmt->close();
$conn->close();
?>