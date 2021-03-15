/**
* @file: grade-assigner.js
* @author: Samuele
* returns the grade for every score
*
*/


/**
 * 
 * @param {number} score 
 * @returns the grade for every score
 */
function assignGrade(score) {
    if (score > 90) {
        return 'A';
    } else if (score > 80) {
        return 'B';
    } else if (score > 70) {
        return 'C';
    } else if (score > 65) {
        return 'D';
    } else {
        return 'F';
    }
}

for (var i = 80; i <= 100; i++) {
  console.log('For ' + i + ', you got a ' + assignGrade(i));
}