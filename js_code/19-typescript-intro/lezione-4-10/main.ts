interface User {
    name: string;
    id: number;
}

const user : User = {
    name: "Samuele",
    id: 10
}

function sayMyName(user : User) {
    console.log("I'm" + user.name + "and I'm" + user.id + "old");
}

type Status = "ON" | "OFF";

let state : Status = "OFF";

type Special = number | string; // accepts number & String

let x : Special = "Hello";
let y : Special = 25;

