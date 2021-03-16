/**
* @file: world-translator.js
* @author: Samuele
* returns "Hello world" for the given language
*
*/

/**
 *  Saluto per il linguaggio scelto
 * @param {string} lang 
 * @returns hello world
 */
function helloWorld(lang) {
    var saluto;
    if (lang == 'jp') {
        saluto = "Kon'nichiwa sekai";
    }
    else if (lang == 'es') {
        saluto = "Hola Mundo";
    }
    else if (lang == 'de') {
        saluto = "Hallo Welt";
    }
    else { 
        saluto = "Hello World";
    }

    return saluto;
}

var saluto = helloWorld('jp');
var print = "Saluto: " + saluto;

var saluto = helloWorld('de');
var print1 = "Saluto: " + saluto;

var saluto = helloWorld('es');
var print2 = "Saluto: " + saluto;



