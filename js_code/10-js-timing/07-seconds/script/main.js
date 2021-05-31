// var currDate = new Date();

function getSecondToday() {
    var currDay = new Date();
    var startDay = new Date(currDay.getTime());
    startDay.setHours(0, 0, 0, 0);
    var s = (currDay.getTime() - startDay.getTime()) / 1000;
    return s;
}

function getSecondsToTomorrow() {
    var currDay = new Date();
    console.log(currDay);
    var endDay = new Date(currDay.getTime());
    endDay.setDate(endDay.getDate() + 1);
    endDay.setHours(0, 0, 0, 0);
    var s = (endDay.getTime() - currDay.getTime()) / 1000;
    return s;
}

var secondsLeft = getSecondToday();
var secondsRem = getSecondsToTomorrow();
console.log("From midnight are passed: " + secondsLeft + " seconds");
console.log(secondsRem + " seconds left until the end of the date");