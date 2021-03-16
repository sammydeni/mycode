/**
* @file: swap-ingredients.js
* @author: Samuele
* returns the concatenation of the two strings
*(separated by a space) slicing out and swapping the first 2 characters
*
*/

/**
 * 
 * @param {string} a 
 * @param {string} b 
 * @returns the concatenation of the two strings
 *(separated by a space) slicing out and swapping the first 2 characters
 */
function mixUp(a, b) {
    return b.slice(0, 2) + a.slice(2) + " " + a.slice(0, 2) + b.slice(2);
  }

console.log(mixUp('tomato','onion'));
console.log(mixUp('cheese','banana'));