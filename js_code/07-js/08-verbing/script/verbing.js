/**
* @file: verbing.js
* @author: Samuele
* if its length is at least 3, it should add
'ing' to its end, unless it already ends in 'ing', in which case it should add 'ly'
instead.
*
*/

/**
 * 
 * @param {string} word 
 * if its length is at least 3, it should add
 * 'ing' to its end, unless it already ends in 'ing', in which case it should add 'ly'
 * instead.
 */
function verbing(word) {
    if (word.length < 3) return word;
    if (word.slice(-3) == 'ing') {
      return word + 'ly';
    } else {
      return word + 'ing';
    }
  }

console.log(verbing('watching'));