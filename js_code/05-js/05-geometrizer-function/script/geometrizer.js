function calcCircumfrence (radius) {
    var circumference = Math.PI * 2*radius;
    return circumference;
}

function calcArea (radius) {
    var area = Math.PI * radius*radius;
    return area;
}

var frase1 = "The circumfrence is "+ calcCircumfrence(2).toFixed(2) +" and the area is " + calcArea(2).toFixed(2);
var frase2 = "The circumfrence is "+ calcCircumfrence(4).toFixed(2) +" and the area is " + calcArea(4).toFixed(2);
var frase3 = "The circumfrence is "+ calcCircumfrence(1).toFixed(2) +" and the area is " + calcArea(1).toFixed(2);