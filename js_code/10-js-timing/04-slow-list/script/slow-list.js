var box = [1, 2, 4, 6, 8, 6, 4, 8, 5, 8, 5, 9, 0, 7, 5, 4, 8, 5, 7, 9, 4, 2, 5, 6, 3, 32, 6, 4, 5, , 6, 8, 5, 34, 2, 4, 5, 3, 6, 4, 7, 5, 67, 32, 3];
var sec = 1000;
box.forEach(element => {
    setTimeout(function() { console.log(element); }, sec);
    sec += 1000;
});