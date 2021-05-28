function celsiusToFahrenheit(celsius) {
    var celsiusInF = (celsius * 9) / 5 + 32;
    var cToF = (celsius + '°C is ' + celsiusInF + '°F');
    return cToF;
}

function fahrenheitToCelsius(fahrenheit) {
    var fahrenheitInC = ((fahrenheit - 32) * 5) / 9;
    var fToC = (fahrenheit + '°F is ' + fahrenheitInC.toFixed(2) + '°C');
    return fToC;
}

// var frase1 = celsiusToFahrenheit(28);

var i = 0;
var intervalID;

function printEverySec() {
    if (i > 100) {
        clearInterval(intervalID);
        return;
    }

    console.log(celsiusToFahrenheit(i));
    i++;
}

intervalID = setInterval(printEverySec, 1000);