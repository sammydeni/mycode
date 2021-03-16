function calculateCofee(age, nDaily) {
    var maxAge = 100;
    var tot = (maxAge - age) * (nDaily * 365);
    var txt = 'You will need ' + tot + ' cups of cofee to last you until the ripe old age of ' + maxAge;
    return txt;
  }
  
  var frase1 = calculateCofee(16, 3);
  var frase2 = calculateCofee(21, 2.5);
  var frase3 = calculateCofee(23, 100);