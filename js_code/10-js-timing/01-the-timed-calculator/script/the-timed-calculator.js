/**
 * @file: the-timed-calculator.js
 * @author: Samuele
 * Print the result with a delay of 3 seconds.
 */

function squareNumber(num) {
    var squaredNumber = num * num;
    console.log('The result of squaring the number ' + num + ' is ' + squaredNumber);
    return squaredNumber;
}

squareNumber(3);

function halfOf(num) {
    var half = num / 2;
    console.log('Half of ' + num + ' is ' + half);
    return half;
}

halfOf(5);

function percentOf(num1, num2) {
    var percent = (num1 / num2) * 100;
    console.log(num1 + ' is ' + percent + '% of ' + num2);
    return percent;
}

percentOf(5, 10);

function areaOfCircle(radius) {
    var area = Math.PI * squareNumber(radius);
    console.log('The area of circle with radius ' + radius + ' is ' + area);
    return area;
}

areaOfCircle(2);

function doCrazyStuff(num) {
    var half = setTimeout(halfOf, 3000, num);
    var squared = setTimeout(squareNumber, 6000, half);
    var area = setTimeout(areaOfCircle, 9000, squared);
    var result = setTimeout(percentOf, 12000, squared, area);
}

doCrazyStuff(5);