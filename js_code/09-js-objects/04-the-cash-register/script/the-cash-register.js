/**
 * @file: the-cash-register.js
 * @author: Samuele
 * Print the sum of all the products in the object
 */

// Input
var cartForParty = {
    banana: "1.25",
    handkerchief: ".99",
    Tshirt: "25.01",
    apple: "0.60",
    nalgene: "10.34",
    proteinShake: "22.36"
};

function cashRegister(cart) {
    var sum = 0;
    for (var item in cart) {
        if (cart.hasOwnProperty(item)) {
            sum += parseFloat(cart[item]);
        }
    }
    return sum;
}

console.log(cashRegister(cartForParty));