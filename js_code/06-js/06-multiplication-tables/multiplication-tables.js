/**
* @file: multiplication-tables.js
* @author: Samuele
* returns multiplication tables for every multiplier from 1 to 10
*
*/

for (var multiplier = 1; multiplier <= 10; multiplier++) {
    for (var i = 0; i <= 10; i++) {
      var result = multiplier * i;
      console.log(multiplier + ' * ' + i + ' = ' + result);
    }
   }