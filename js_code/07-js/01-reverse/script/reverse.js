/**
* @file: reverse.js
* @author: Samuele
* print a reversed string
*
*/

/**
 * print the reverse of the string
 * @param {string} str 
 */
function printReverse(str) {
    var reverse = str.split("").reverse().join("");
    console.log(reverse);
}


printReverse("hello");
printReverse("itopinonavevanonipoti");