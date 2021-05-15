<?php
session_start();


$valutazioni =  (isset($_SESSION['titles']))?$_SESSION['titles']:[];
$titoli = (isset($_SESSION['ratings']))?$_SESSION['ratings']:[];

if (    isset($_POST['title']) && isset($_POST['rate'])     )  {
    $titoli[] = $_POST['title'];
    $valutazioni[] = $_POST['rate'];
}
   

    function stampa($titoli, $valutazioni) {
        for($i=0; $i < sizeof($titoli); $i++)
            {
                echo $titoli[$i]."<br>";
                echo $valutazioni[$i]."<br>";
            }
    }
        

?>