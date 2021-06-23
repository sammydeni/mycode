String.prototype.dogSpeak = function() {
    console.log(this + " woof");
}
let s = "ciao";
s.dogSpeak();

"dogs are smart".dogSpeak();