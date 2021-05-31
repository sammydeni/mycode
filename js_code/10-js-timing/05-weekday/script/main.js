function getWeekDayIT(date) {
    var dayName = "";
    switch (date) {

        case 0:
            dayName = "DO";
            break;
        case 1:
            dayName = "LU";
            break;
        case 2:
            dayName = "MA";
            break;
        case 3:
            dayName = "ME";
            break;
        case 4:
            dayName = "GI";
            break;
        case 5:
            dayName = "VE";
            break;
        case 6:
            dayName = "SA";
            break;

        default:
            break;
    }

    console.log(dayName);
}

function getWeekDayEN(date) {
    var dayName = "";
    switch (date) {

        case 0:
            dayName = "SU";
            break;
        case 1:
            dayName = "MO";
            break;
        case 2:
            dayName = "TU";
            break;
        case 3:
            dayName = "WE";
            break;
        case 4:
            dayName = "TH";
            break;
        case 5:
            dayName = "FR";
            break;
        case 6:
            dayName = "SA";
            break;

        default:
            break;
    }

    console.log(dayName);
}

function getWeekDay(lang) {
    var d = new Date;
    var currDay = d.getDay();
    if (lang == "it")
        getWeekDayIT(currDay);
    else
        getWeekDayEN(currDay);
}

getWeekDay("it");
getWeekDay("en");