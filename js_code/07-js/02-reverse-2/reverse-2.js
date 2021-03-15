/**
* @file: reverse-2.js
* @author: Samuele
* return a reversed string
*
*/

/**
 * return the reverse of the string
 * @param {string} str 
 */
 function reverse(str) {
    return str.split("").reverse().join("");
}


var reverse1 = reverse("hello");
var reverse2 = reverse("itopinonavevanonipoti");
console.log(reverse1);
console.log(reverse2);