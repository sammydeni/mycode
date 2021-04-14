/**
* @file: the-reading-list.js
* @author: Samuele
* A program that prints an array of books and specifies which ones have already been read or not
*/

var bookshelf = [
    {
    title: "The Lord of Rings",
    author: "Giovanni",
    alreadyRead: new Boolean(false)
    },
    {
    title: "Legend",
    author: "Marie Lu",
    alreadyRead: new Boolean(true)
    },
    {
    title: "Prodigy",
    author: "Marie Lu",
    alreadyRead: new Boolean(false)
    },
    {
    title: "Champion",
    author: "Marie Lu",
    alreadyRead: new Boolean(true)
    }
]

for(var i = 0; i<bookshelf.length; i++) {
    var book = bookshelf[i];
    if (book.alreadyRead == true) 
        console.log("You already read " + book.title + " by " + book.author);
    else
        console.log("You still need to read " + book.title + " by " + book.author);
        
}