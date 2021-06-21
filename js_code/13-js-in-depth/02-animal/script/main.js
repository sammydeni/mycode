let monkey = {};

// dot notation
monkey.username = "Billy"
monkey.tagline = "Silly Billy"
monkey.noises = ["Huha", "Waa", "HuWaa"];
monkey.foods = ["bananas", "Crackers", "Beers"];
for (const key in monkey) {
    console.log(`${key}: ${monkey[key]}`);
}

// brackets
monkey['username'] = 'Billy';
monkey['tagline'] = "Silly Billy"
monkey['noises'] = ["Huha", "Waa", "HuWaa"];
monkey['foods'] = ["bananas", "Crackers", "Beers"];
for (const key in monkey) {
    console.log(`${key}: ${monkey[key]}`);
}