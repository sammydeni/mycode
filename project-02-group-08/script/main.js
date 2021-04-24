/**
 * @file: main.js
 * @author: Gianluca Formica, Yasser Ennasri, Samuele Denicola, Stefano Vetrò
 * 
 * This is a program that allows you to enter a list of supermarket products filtered by expiration date.
 */

/** Variables initialization */
var input = {
    k: 5,        /** How many days do you want the program to start? */
    m: 3,        /** How many products do you want to bring in each week? */
    x: 15,       /** How many weeks do you want the program to work? */
    n: 5,        /** After how many weeks do you want the products to be removed from the shelf? */
    rmin: 2,     /** How much is the minimum number in seconds with which you want to wait between print? */
    rmax: 5      /** How much is the maximum number in seconds with which you want to wait between print? */
};

/** Generate a random number of second between rmin and rmax */
var r = library.randomR(input.rmin, input.rmax); 

/** Prints all the details of the input */
console.log("%c The program starts in " + input.k + " days", "color: #008000");
console.log("%c The program inserts " + input.m + " products per week", "color: #008000");
console.log("%c The program lasts " + input.x + " weeks", "color: #008000");
console.log("%c The products are removed after " + input.n + " weeks", "color: #008000");
console.log("%c You will wait between " + input.rmin + " and " + input.rmax + " seconds between each print (" + r + " seconds)", "color: #008000");

console.log("\n\n");

/** Variables initialization */
var startexpiry = new Date();
var start = library.start(input.k);
var endexpiry = library.endexpiry(input.x);
var end = library.end(input.x, input.k);

/** Initialization of constants in an array of objects
* To add, remove or change items edit this array
*/
let nameItem = ["Salad", "Meat", "Cheese", "Bacon",
    "Kebab", "Onion", "Yogurt", "Tomato", "Strawberry",
    "Mango", "Avocado", "Milk", "Pasta", "Water", "Pizza",
    "Sugar", "Salt", "Flour", "Pepper", "Coca-Cola"];

var item = [];

/** entry of product data through functions taken from the library */
item = library.item(input.m, input.x);      

/**
 * Function print
 * Print all the products
 */
function print() {

    console.log("%c \tFrom: " + library.printdate(startweek) + "\t\tTo: " + library.printdate(endweek), "color: #FF0000;");

    library.printweek(input.m, input.n, i, startweek);

    console.log("%c \tFiltered :", "color: #0000FF");

    library.filteredprint(input.m, i);

    console.log("\n\n");

    startweek.setDate(startweek.getDate() + 7);
    endweek.setDate(endweek.getDate() + 7);
}

/** Variables initialization */
var i = 0;
var startweek = library.start(input.k);
var endweek = new Date(startweek.getTime());
endweek.setDate(endweek.getDate() + 6);

/** Print the items of each week with a delay of R seconds */
if (input.r == 0) {
    for (i = 0; i < input.x; i++) {
        print();
    }
} else {
    var timerID = setInterval(function () { print(); i++; }, r * 1000);

    setTimeout(function () { clearInterval(timerID); }, r * input.x * 1000);
}