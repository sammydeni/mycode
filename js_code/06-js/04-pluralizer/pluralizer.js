/**
* @file: pluralizer.js
* @author: Samuele
* returns the number and pluralized form
*
*/

/**
 * 
 * @param {string} name 
 * @param {number} number 
 * @returns plural 
 */
function pluralize(name, number) {
    var output;

    if (number > 1) {
        var plural = name.concat('s');
        output = number + " " + plural;
    }
    else {
        output = number + " " + name;
    }

    return output;
}

var print = pluralize('cat', 2);
var print1 = pluralize('dog', 1);
var print2 = pluralize('hamster', 234);