<?php
    $dsn = 'mysql:host=joecool.highpoint.edu;dbname=CSC3212_S24_okelley_db';
    $username = 'okelley';
    $password = '1866576';

    try {
        $db = new PDO($dsn, $username, $password);
    } catch (PDOException $e) {
        $error_message = $e->getMessage();
        include('database_error.php');
        exit();
    }
    
?>
