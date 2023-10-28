<?php
// Database configuration
$db_host = "localhost";
$db_user = "root"; 
$db_password = ""; 
$db_name = "muktai_foundation";

// Create a database connection
$conn = new mysqli($db_host, $db_user, $db_password, $db_name);

// Check the connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
?>


// Insert data into the table
$sql = "INSERT INTO membership_form (full_name, dob, gender, contact_number, email, address, city, state, zip_code, country, education, experience, non_profit, interests, skills, areas, occupation, website, languages, hobbies) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";

// Prepare the SQL statement
$stmt = $conn->prepare($sql);

if ($stmt) {
    $stmt->bind_param("ssssssssssssssssssss", $full_name, $dob, $gender, $contact_number, $email, $address, $city, $state, $zip_code, $country, $education, $experience, $non_profit, $interests, $skills, $areas, $occupation, $website, $languages, $hobbies);

    // Set variables with form data
    $full_name = $_POST['full-name'];
    $dob = $_POST['dob'];
    $gender = $_POST['gender'];
    $contact_number = $_POST['contact-number'];
    $email = $_POST['email'];
    $address = $_POST['address'];
    $city = $_POST['city'];
    $state = $_POST['state'];
    $zip_code = $_POST['zip-code'];
    $country = $_POST['country'];
    $education = $_POST['education'];
    $experience = $_POST['experience'];
    $non_profit = $_POST['non-profit'];
    $interests = $_POST['interests'];
    $skills = $_POST['skills'];
    $areas = $_POST['areas'];
    $occupation = $_POST['occupation'];
    $website = $_POST['website'];
    $languages = $_POST['languages'];
    $hobbies = $_POST['hobbies'];

    // Execute the query
    if ($stmt->execute()) {
        // Data inserted successfully
        echo "Data inserted successfully.";
    } else {
        // Error in query execution
        echo "Error: " . $stmt->error;
    }

    // Close the statement
    $stmt->close();
} else {
    // Error in preparing the statement
    echo "Error: " . $conn->error;
}

// Close the database connection
$conn->close();
?>
