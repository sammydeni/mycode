function stampa() {
    for (var i = 0; i < 200; i++) {
        document.write('<li class="country">');
        document.write('<div class="img-cont"><img class="country-img" src="https://www.countryflags.io/' + country[i].abbreviation + '/flat/64.png"></img></div>');

        document.write('<div class="name-cont"><p class="country-name">' + country[i].country + '</p></div>');
        document.write('<div class="population-cont">');
        if (countryPopulation[i].population > 4000000) {
            document.write('<p class="big country-population">');
        } else {
            document.write('<p class="small country-population">');
        }
        document.write(countryPopulation[i].population + '</p>');
        document.write('</div>');
        document.write('</li>');
    }
}