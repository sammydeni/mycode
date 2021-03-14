/**
* @file: bigger-number.js
* @author: Samuele
* Find the Max number
*
*/

/**
 * Return the max number
 * @param {number} num1 
 * @param {number} num2 
 * @returns max value
 */
function greaterNum(num1, num2) {
    if (num1 > num2) {
        return num1;
    }
    else { return num2;
    }
}
var max = greaterNum(18, 43);
var print =  "The greater number is " + max; 