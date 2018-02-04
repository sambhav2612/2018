<?php 

$nameErr = $emailErr = $messageErr = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if (empty($_POST["user_name"])){
        $nameErr = "Name is required!";
    } else {
        if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
            $emailErr = "Invalid email format";
        } else {
            $name = test_input($_POST["user_name"]);
        }
    }

    if (empty($_POST["user_email"])){
        $emailErr = "Email is required!";
    } else {
        $name = test_input($_POST["user_email"]);
    }

    if (empty($_POST["user_message"])){
        $messageErr = "Name is required!";
    } else {
        $name = test_input($_POST["user_message"]);
    }
}

function test_input($data) {
    $data = trim($data);
    $data = stripslashes($data);
    $data = htmlspecialchars($data);
    return $data;
}

?>

<p>Hi <?php echo $name; ?></p>