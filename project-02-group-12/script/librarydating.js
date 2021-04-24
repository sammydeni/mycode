/**
 * @file: librarydating.js
 * @author: Gianluca Formica, Yasser Ennasri, Samuele Denicola, Stefano Vetrò
 * 
 * Library that passes start and end date of the program and the range for generating the expiration dates.
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
     * Function generatestart
     * Generate the starting date of the program
     * @alias generatestart
     * @param {number} a - days at the start of the program
     * @return {date} date - start date of the program
     */
    function generatestart(a) {
        var date = new Date();

        date.setDate(date.getDate() + a);

        return date;
    };

    /**
    * Function generateendexpiry
    * Generate the maximum expiration date of the item
    * @alias generateendexpiry
    * @param {number} a - running period in weeks
    * @return {date} date - maximum expiration date
    */
    function generateendexpiry(a) {
        var date = new Date();

        date.setDate(date.getDate() + (7 * a));

        return date;
    };

    /**
     * Function generateend
     * Generate the ending date of the program
     * @alias generateend
     * @param {number} a - running period in weeks
     * @param {number} b - days at the start of the program
     * @return {date} date - end date of the program
     */
    function generateend(a, b) {
        var date = new Date();

        date.setDate(date.getDate() + ((7 * a) + b));

        return date;
    };

    library.start = generatestart;

    library.endexpiry = generateendexpiry;
    
    library.end = generateend;
}())