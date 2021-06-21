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

    for (const key in animal) {
        console.log(`${key}: ${animal[key]}`);
    }
});

