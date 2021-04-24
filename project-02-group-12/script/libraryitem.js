/**
 * @file: libraryitem.js
 * @author: Gianluca Formica, Yasser Ennasri, Samuele Denicola, Stefano Vetrò
 * 
 * Library that passes id, period, dated, checks, state, weekold.
 */

/**
 * if var library doesn't exist create them
 * 
 */
if (!library) {
    var library = {};
}

(function () {

    var countID = 1;

    /** 
     * Function generateID
     * This function generates an ID for each item of the array
     * @alias generateID
     * @return {number} - the generated id
     */
    function generateID() {
        return library.pad(countID++, 4);
    }

    /**
     * Function generateName
     * Generate a random name for each item of the array
     * @alias generateName
     * @return {string} - generate of the name item
     */
    function generateName() {
        return nameItem[Math.floor(Math.random() * nameItem.length)];
    };

    /**
     * Function generateDateexpiry
     * Generate an expiry date for each item
     * @alias generateDateexpiry
     * @param {stridng} start - start of the program
     * @param {string} end - end of the program 
     * @return {string} expiry - generate of the date expiry item
     */
    function generateDateexpiry(start, end) {
        var expiry = new Date(start.getTime() + Math.random() * (end.getTime() - start.getTime()));

        return expiry;
    }

    /**
     * Function pushItem
     * This function creates an object with all the details for each item
     * @alias pushitem
     * @param {number} a - incoming products every week
     * @param {number} b - program duration in weeks
     * @return {array} array - object array id, prod, date, checks, state, weeks old
     */
    function pushitem(a, b) {
        var i;
        var array = [];

        for (i = 0; i < (a * b); i++) {
            array[i] = {
                id: generateID(),
                prod: generateName(nameItem),
                date: generateDateexpiry(startexpiry, endexpiry),
                checks: 0,
                state: "New",
                weekold: 0
            };
        }
        return array;
    }

    library.item = pushitem;
}());