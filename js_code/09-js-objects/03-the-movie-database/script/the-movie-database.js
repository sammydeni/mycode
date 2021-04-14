/**
* @file: the-movie-database.js
* @author: Samuele
* A program that prints all the movies stored in the array of objects
*/

var myFavMovie = {
    title: 'Puff the Magic Dragon',
    duration: 30,
    stars: ['Puff', 'Jackie', 'Living Sneezes']
};

function printMovie(movie) {
    console.log(movie.title + ' lasts for ' + movie.duration + ' minutes');
    var starsString = 'Stars: ';
    for (var i = 0; i < movie.stars.length; i++) {
        starsString += movie.stars[i];
        if (i != movie.stars.length -1) {
            starsString += ', '; //add commas between the stars' names
        }
    }
    console.log(starsString);
}

printMovie(myFavMovie);