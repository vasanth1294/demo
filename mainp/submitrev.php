<?php
// Connect to the database
$conn = mysqli_connect("localhost", "root", "", "logindata");

// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

// Get form data
$Painting_Name=$_POST['painting_name'];
$Your_Name= $_POST['your_name'];
$Rating = $_POST['rating']; 
$Review_Text = $_POST['review']; 

// Insert data into the database
$sql = "INSERT INTO review_details(Painting_Name,Your_Name,Rating,Review_Text) VALUES('$Painting_Name','$Your_Name','$Rating','$Review_Text')";


if (mysqli_query($conn, $sql)) {
    $template=file_get_contents("submitreview.html");
    $template=str_replace("Submit_Review","registered_successfully",$template);
    echo ($template);

} 
else {
    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}

// Close the database connection
mysqli_close($conn);
?>
