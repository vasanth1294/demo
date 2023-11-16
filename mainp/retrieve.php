<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "logindata";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $dbname);

// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

$sql = "SELECT * FROM review_details";
$result = mysqli_query($conn, $sql);
?>
<html>
<head>
    <title>Display Data</title>
	<meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Owner Dashboard - View Reviews</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f2f2f2;
        }

        header {
            background-color: #333;
            padding: 10px;
            text-align: center;
            color: white;
        }

        nav {
            background-color: #555;
            overflow: hidden;
        }

        nav a {
            float: left;
            display: block;
            color: white;
            text-align: center;
            padding: 14px 16px;
            text-decoration: none;
        }

        nav a:hover {
            background-color: #ddd;
            color: black;
        }

        .container {
            padding: 20px;
        }

        .reviews-list {
            list-style-type: none;
            padding: 0;
        }

        .review-item {
            background-color: white;
            padding: 20px;
            margin: 10px 0;
            border-radius: 5px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }

        .review-item h3 {
            color: #333;
            margin-bottom: 10px;
        }

        .review-item p {
            color: #666;
            margin-bottom: 5px;
        }

        footer {
            background-color: #333;
            padding: 10px;
            text-align: center;
            color: white;
            position: fixed;
            bottom: 0;
            width: 100%;
        }
    </style>
</head>
<body>
	<header>
        <h1>Owner Dashboard - View Reviews</h1>
    </header>

    <nav>
        <a href="projectt.html">Home</a>
        <a href="submitpaint.html">Submit Painting</a>
        <a href="#">View Reviews</a>
        <a href="customerlogin.html">Logout</a>
    </nav>
	<div class="container">
        <h2>customer Painting Reviews</h2>

        <ul class="reviews-list">
<?php
    while ($row = mysqli_fetch_assoc($result)) {
   
        echo "Painting Name : " . $row['Painting_Name'];
		echo "<br>";
        echo "Name : " . $row['Your_Name'];
		echo "<br>";
		echo "rating : " . $row['Rating'];
        echo "<br>";
        echo "review : " . $row['Review_Text'];
		echo "<br>";
		echo "<br>";
        echo "<br>";	
        echo "</tr>";
    }
    ?>
        </ul>
    </div>
	<footer>
        <p>&copy; 2023 Art Gallery</p>
    </footer>
</body>
</html>


