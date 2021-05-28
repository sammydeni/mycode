/**
 * @file: oh-no-you-don't.js
 * @author: Samuele
 * Cancel a scheduled function
 */

function useful() {
    console.log("I'm Useful!");
}

var timer = setTimeout(useful, 10000);

function deleteuseful(timer) {
    clearTimeout(timer);
    console.log("function cancelled");
}
setTimeout(deleteuseful, 5000);