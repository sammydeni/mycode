<?php
    session_start();
    include 'api.php';
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Stampa</title>
</head>
<body>
    <div id="box">
        <?php stampa($titoli, $valutazioni);  ?>
    </div>
</body>
</html>