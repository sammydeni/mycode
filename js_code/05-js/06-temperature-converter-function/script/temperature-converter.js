function celsiusToFahrenheit(celsius) {
    var celsiusInF = (celsius*9)/5 + 32;
    var cToF = (celsius + '°C is ' + celsiusInF + '°F');
    return cToF;
  }
  
  function fahrenheitToCelsius(fahrenheit) {
    var fahrenheitInC = ((fahrenheit - 32)*5)/9;
    var fToC = (fahrenheit + '°F is ' + fahrenheitInC.toFixed(2) + '°C');
    return fToC;
  }

var frase1 = celsiusToFahrenheit(28);
var frase2 = fahrenheitToCelsius(78);
var frase3 = celsiusToFahrenheit(10);