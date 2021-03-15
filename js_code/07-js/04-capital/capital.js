/**
* @file: capital.js
* @author: Samuele
* Capitalize the first letter of a string
*
*/

/**
 * 
 * @param {string} string 
 * @returns the string capitalized
 */
function capital(string) {
    return string[0].toUpperCase() + string.slice(1);
    
}

var capitalize = capital("hello world");
var capitalize1 = capital("ciao mondo");
console.log(capitalize);
console.log(capitalize1);