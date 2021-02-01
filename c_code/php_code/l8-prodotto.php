<?php 



$prodotto1 = readline("Quanto costa il prodotto 1?");

$prodotto2 = readline("Quanto costa il prodotto 2?");;

$risultato = 0;

$sconto = 0.5;



//calcola();



// function calcola()

// {

//     if ($prodotto1 > $prodotto2){

//     $risultato = $prodotto1 + ($prodotto2 * $sconto);

//     } else {

//         $risultato = $prodotto1 * $sconto + $prodotto2;

//     }



// }



function calcolaRisultato($prodotto1, $prodotto2, $sconto)

{

    if ($prodotto1 > $prodotto2){

            return $prodotto1 + ($prodotto2 * $sconto);

        } else {

            return $prodotto1 * $sconto + $prodotto2;

        }

}





echo "Il totale da pagare è: ".calcolaRisultato($prodotto1, $prodotto2, $sconto);

echo "\n";



?>

Press Shift + Tab to navigate to chat history.
