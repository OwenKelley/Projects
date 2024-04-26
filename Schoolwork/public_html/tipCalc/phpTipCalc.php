<?php
    // get the data from the form
    $people = $_POST['people'];
    $price = $_POST['price'];
    $tipPercent = $_POST['tipPercent'];
    $totalPrice = $_POST['totalPrice'];
    $tax = $_POST['tax'];
    $totalTotalPrice = $_POST['totalTotalPrice'];

    // calculations
    $tip = ($price * $tipPercent *.01);
    $taxCost = ($price * $tax * .01);
    $totalPrice = ($price + $tip + $taxCost)/$people;
    $inDivTip = ($price * $tipPercent *.01)/$people;
    $inDivTaxCost = ($price * $tax * .01)/$people;
    $totalTotalPrice = $totalPrice*$people;

    // apply currency formatting to the dollar and percent amounts
    $priceFormatted = "$".number_format($price, 2);
    $totalFormatted = "$".number_format($totalPrice, 2);
    $totalTotalFormatted = "$".number_format($totalTotalPrice, 2);
    $taxFormatted = "$".number_format($inDivTaxCost, 2);
    $tipFormatted = "$".number_format($inDivTip, 2);
?>
<!DOCTYPE html>
<html>
<head>
    <title>Tip Calculator</title>
    <link rel="stylesheet" type="text/css" href="main.css">
</head>
<body>
    <main>
        <h1>Tip Calculator</h1>

        <label>Price: </label>
        <span><?php echo $priceFormatted; ?></span><br>

        <label>Tax Per Person: </label>
        <span><?php echo $taxFormatted; ?></span><br>

        <label>Tip Per Person: </label>
        <span><?php echo $tipFormatted; ?></span><br>

        <label>Total Per Person: </label>
        <span><?php echo $totalFormatted; ?></span><br>

        <label>Total: </label>
        <span><?php echo $totalTotalFormatted; ?></span><br>
    </main>
</body>
</html>
