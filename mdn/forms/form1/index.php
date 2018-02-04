<?php include "header.php" ?>

require "sendForm.php";

<form action="sendForm.php" method="post">
    <div>
        Name: <input type="text" id="name" name="user_name">
        <span class="error">* <?php echo $nameErr;?></span>
    </div>
    <div>
        E-mail: <input type="email" id="mail" name="user_mail">
        <span class="error">* <?php echo $emailErr;?></span>
    </div>
    <div>
        Message: <textarea id="msg" name="user_message"></textarea>
        <span class="error">* <?php echo $messageErr;?></span>
    </div>
    <div class="button">
        <button type="submit">Send your message</button>
    </div>
</form>

<?php include "footer.php" ?>