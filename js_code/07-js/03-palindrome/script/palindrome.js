/**
* @file: palindrome.js
* @author: Samuele
* controls il a string is palindrome
*
*/

/**
 * return the reverse of the string
 * @param {string} str 
 */
 function reverse(str) {
    return str.split("").reverse().join("");
}

/**
 * 
 * @param {string} string 
 * @returns true if is palindrome or false if is not palindrome
 */
function isPalindrome(string) {
    var rev = reverse(string);
    if (string == rev) {
        return true;
    }
    else { return false }
}

var ok = isPalindrome('itopinonavevanonipoti');
console.log(ok);