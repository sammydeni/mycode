let animals = [
    {
        username: "",
        tagline: "",
        noises: [""],
        foods: [""]
    },
    {
        username: "",
        tagline: "",
        noises: [""],
        foods: [""]
    },
    {
        username: "",
        tagline: "",
        noises: [""],
        foods: [""]
    },
    {
        username: "",
        tagline: "",
        noises: [""],
        foods: [""]
    }
];

var i = 0;
animals.forEach(animal => {
    const lastName = ["Bob", "Bell", "John", "Sylv"];
    animal.username = "Billy" + lastName[i];
    animal.tagline = "Silly Billy " + i;
    animal.noises = ["Huha", "Waa", "HuWaa"];
    animal.foods = ["bananas", "Crackers", "Beers"];
    i++;

    //adding the outfit propriety
    animal.outfit = {
        tee: "blue",
        shorts: "green",
        shoes: "black"
    }
});

animals[1].outfit.tee = "purple";
animals[1].outfit.shorts = "pink";
animals[1].outfit.shoes = "white";


animals[2].outfit.tee = "pink";
animals[2].outfit.shorts = "orange";
animals[2].outfit.shoes = "brown";


animals[3].outfit.tee = "crimson";
animals[3].outfit.shorts = "yellow";
animals[3].outfit.shoes = "grey";

function getAnimalOutfit(animal) {
    return animal.username + " is wearing a " + animal.outfit.tee + " tee and " + animal.outfit.shorts + " shorts and " +  animal.outfit.shoes + " shoes";
}

function feedAnimal(animal) {
    var foodString = "";
    for(let i = 0; i < animal.foods.length; i++) {
        
        if (i!=(animal.foods.length-1)) {
            foodString += animal.foods[i] + ", ";
        }
        else 
            foodString += animal.foods[i] + ".";
    }
    return animal.username + " is eating " + foodString;

}

animals.forEach(animal => {
    for (const key in animal) {
        console.log(JSON.stringify(animal, null, '\t'));
    }
    let outfit = getAnimalOutfit(animal);
    console.log(outfit);
    let feed = feedAnimal(animal);
    console.log(feed);

});

