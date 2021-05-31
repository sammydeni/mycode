/**
 * getDateAgo
 * @param {*} date 
 * @param {*} days 
 */
function getDateAgo(date, days) {
    var day = new Date;
    day.setDate(date.getDate() - days);
    console.log(day);
}

var d = new Date();
getDateAgo(d, 10);
getDateAgo(d, 100);