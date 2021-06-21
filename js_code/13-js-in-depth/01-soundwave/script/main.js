let noisesArray = ['quack', 'sneeze', 'boom'];
let megaNoisesArray = [];

for (let noise of noisesArray) {
    var newNoise = noise;
        var ex = 1;
    for (let i = 0; i < noise.length; i++) {
        var superNewNoise = newNoise.substring(0, i) + newNoise.charAt(i).toUpperCase() + newNoise.substring(i + 1);
        for(let e = 0; e < ex; e++)
            {
                superNewNoise += "!";
            }

        megaNoisesArray.push(superNewNoise);
        ex++;
    }

}

megaNoisesArray.forEach(noise => {
    console.log(noise);
});