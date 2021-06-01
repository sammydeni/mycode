var books = [{
    title: 'The Design of EveryDay Things',
    author: 'Don Norman',
    alreadyRead: false
}, {
    title: 'The Most Human Human',
    author: 'Brian Christian',
    alreadyRead: false
}, {
    title: 'Legend',
    author: 'Marie Lu',
    alreadyRead: true
}, {
    title: 'Hunger Games',
    author: 'Susanne Collins',
    alreadyRead: true
}];

var body = document.body;

for (let i = 0; i < books.length; i++) {
    var list = document.createElement("ul");
    body.appendChild(list);
    var title = document.createElement("li");
    title.innerText = "Title: " + books[i].title;
    var author = document.createElement("li");
    author.innerText = "Author: " + books[i].author;
    list.appendChild(title);
    list.appendChild(author);
    if (books[i].alreadyRead) {
        list.style.backgroundColor = "green";
    } else {
        list.style.backgroundColor = "red";
    }
}