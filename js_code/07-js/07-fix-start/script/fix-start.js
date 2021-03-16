/**
* @file: fix-start.js
* @author: Samuele
* return a version where all
* occurrences of its first character have been replaced with '*', except for the first
* character itself.
*
*/

/**
 * 
 * @param {string} s 
 * @returns return a version where all
 * occurrences of its first character have been replaced with '*', except for the first
 * character itself.
 */
function fixStart(s) {
    var c = s.charAt(0);
    return c + s.slice(1).replace(new RegExp(c, 'g'), '*');
  }

console.log(fixStart("babble"));

