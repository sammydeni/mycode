/**
* @file: grade-assigner.js
* @author: Samuele
* returns a grade for the score
*
*/

/**
 * return the grade based on the score
 * @param {number} score 
 * @returns grade
 */
function assignGrade(score) {
    
    if (score >= 100) {
        grade = 'A+';
    }
    else if (score > 90) {
        grade = 'A';
    }
    else if (score > 80) {
        grade = 'B';
    }
    else if (score > 70) {
        grade = 'C';
    }
    else if (score > 60) {
        grade = 'D';
    }

    return grade;
}
var score1 = 88;
var score2 = 63;
var score3 = 100;

var print = "For " + score1 + " ,you got " + assignGrade(score1);
var print1 = "For " + score2 + " ,you got " + assignGrade(score2);
var print2 = "For " + score3 + " ,you got " + assignGrade(score3);