/**
 * @file: libraryprinter.js
 * @author: Gianluca Formica, Yasser Ennasri, Samuele Denicola, Stefano Vetrò
 * 
 * Library that modify the state and checks of the item and print them.
 */

/**
 * if var library doesn't exist create them
 * 
 */
if (!library) {
    var library = {};
}

(function () {
    /**
     * Function printitemweek
     * Function that prints the last week's filtered products plus new arrivals
     * @alias printitemweek
     * @param {number} a - products added every week
     * @param {number} b - maximum weeks of product exposure
     * @param {number} c - indicates what week we are at
     * @param {date} d - week start date
     */
    function printitemweek(a, b, c, d) {
        var j;

        for (j = 0; j < a * (c + 1); j++) {

            if (item[j].date <= d) {
                item[j].state = "Expired";
            } else if (item[j].checks > 0 && item[j].checks < b) {
                item[j].state = "Valid";
            } else if (item[j].checks >= b) {
                item[j].state = "Old";
            }

            if (item[j].weekold < 1) {
                console.log("ID: " + item[j].id.padEnd(10, " ") + "Name: " + item[j].prod.padEnd(15, " ") + "Date: " + library.printdate(item[j].date).padEnd(20, " ") + "State: " + item[j].state.padEnd(15, " ") + library.plural(j) + item[j].checks);
            }

            if (item[j].state == "Old" || item[j].state == "Expired") {
                item[j].weekold++;
            }
        }
    }

    /**
     * Function filteredPrint
     * This function prints only the items that are New or Valid
     * @alias filtered
     * @param {number} a - products added every week
     * @param {number} b - indicates what week we are at
     */
    function filtered(a, b) {
        var j;

        for (j = 0; j < a * (b + 1); j++) {

            if (item[j].state == "New" || item[j].state == "Valid") {
                console.log("ID: " + item[j].id.padEnd(10, " ") + "Name: " + item[j].prod.padEnd(15, " ") + "Date: " + library.printdate(item[j].date).padEnd(20, " ") + "State: " + item[j].state.padEnd(15, " ") + library.plural(j) + item[j].checks);
                item[j].checks++;
            }
        }
    }

    library.printweek = printitemweek;

    library.filteredprint = filtered;
}())