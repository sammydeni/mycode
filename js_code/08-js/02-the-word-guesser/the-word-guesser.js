/**
* @file: the-word-guesser.js
* @author: Samuele
* A Word Guesser program
*/

var wordLetters     = ['C', 'A', 'T'];
var guessedLetters  = ['_', '_', '_'];

/**
 * 
 * @param {character} letter 
 * this function receives a letter 
 * and if it is in the right position, print a positive answer otherwise it prints a negative comment 
 * and the number of attempts left
 */
function guessLetter(letter) {
    var goodGuess = false;
    var moreToGuess = false;
    for (var i = 0; i < wordLetters.length; i++) {
        if (wordLetters[i] == letter) {
            guessedLetters[i] = letter;
            goodGuess = true;
        }
        if (guessedLetters[i] == '_') {
            moreToGuess = true;
        }
    }
    if (goodGuess) {
        console.log('Yay, you found a letter!');
        console.log(guessedLetters.join(''));
        if (!moreToGuess) {
            console.log('YOU WON!');
        } 
    } else {
        console.log('Oh noes, thats not right!');
    }
}

guessLetter('C');
guessLetter('I');
guessLetter('A');
guessLetter('T');