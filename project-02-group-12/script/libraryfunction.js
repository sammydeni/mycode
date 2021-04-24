/**
 * @file: libraryfunction.js
 * @author: Gianluca Formica, Yasser Ennasri, Samuele Denicola, Stefano Vetrò
 * 
 * Library that passes date with months written in English, check or checks, add some zero to the ID and random r.
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
     * Function modifydate
     * Allows you to print the months in English
     * @alias modifydate
     * @param {date} date - the date
     * @returns {string} date with months written in English
     */
    function modifydate(date) {
        const monthNames = ["JAN", "FEB", "MAR", "APR", "MAY", "JUN",
            "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"];

        return date.getDate() + "-" + monthNames[date.getMonth()] + "-" + date.getFullYear();
    }

    /**
     * Function pluralize
     * Print plurality checks if it is not equal to 1
     * @alias pluralize
     * @param {number} j - index that identifies each item
     * @return {string} - Check or Checks
     */
    function pluralize(j) {
        if (item[j].checks == 1) {
            return "Check: ";
        } else {
            return "Checks:";
        }
    }

    /** 
     * Function padLeadingZeros
     * Add some zero to the ID
     * @alias padLeadingZeros
     * @param {number} num - number
     * @param {number} size - size
     * @return {number} - generate of the id
     */
    function padLeadingZeros(num, size) {
        var s = num + "";
        while (s.length < size) s = "0" + s;
        return s;
    }

    /**
     * Function randomR
     * Randomly generates a number taken in the range of min and max
     * @alias randomR
     * @param {number} min - min value of seconds
     * @param {number} max - max value of seconds
     * @return {number} - random value of seconds generated from a range min - max 
     */
    function randomR(min, max) {
        return Math.floor(Math.random() * (max - min + 1)) + min;
    }

    library.printdate = modifydate;

    library.plural = pluralize;

    library.pad = padLeadingZeros;

    library.randomR = randomR;
}())