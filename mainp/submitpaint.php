<?php
$conn = mysqli_connect("localhost", "root", "", "logindata");

if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

$Painting_Name=$_POST['painting_name'];
$Artist_Name= $_POST['artist_name'];
$Description = $_POST['description']; 
$Packagedays = $_POST['packagedays']; 
$Price = $_POST['price']; 
$Mode_of_Transaction = $_POST['transaction_mode']; 

$sql = "INSERT INTO paint_details(Painting_Name,Artist_Name,Description,Packagedays,Price,Mode_of_Transaction) VALUES('$Painting_Name','$Artist_Name','$Description','$Packagedays','$Price','$Mode_of_Transaction')";


if (mysqli_query($conn, $sql)) {
    $template=file_get_contents("submitpaint.html");
    $template=str_replace("paint_details","registered_successfully",$template);
    echo ($template);

} 
else {
    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}

// Close the database connection
mysqli_close($conn);
?>
