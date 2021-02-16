// the fortune teller
var numChildren = 5;
var partnerName = "Luigino";
var location = "Malta";
var job = "Data Scientist";

var fortune = "You will be a"+ job +"in"+ location +",and married to"+partnerName+"with"+numChildren+"kids.";
document.getElementById("print").innerHTML = fortune;