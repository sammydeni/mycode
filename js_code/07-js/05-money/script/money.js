/**
* @file: money.js
* @author: Samuele
* print dollars or dollars ;) after the number
*
*/

/**
 * 
 * @param {number} amount 
 * @returns dollars or dollars ;) after the number
 */
function money(amount) {
    if (amount == 1000000) {
      return amount + " dollars ;)";
    } else {
      return amount + " dollars";
    }
  }

console.log(money(1000000));
console.log(money(10));
  