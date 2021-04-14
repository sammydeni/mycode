/**
* @file: the-recipe-card.js
* @author: Samuele
* A program to store recipe card into objects
*/

var recipeCard = {
    title: "Pizza",
    serving: 18,
    ingredients: ['salt','water','flour','mozzarella']
}

console.log(recipeCard.title);
console.log(recipeCard.serving);

for(var i=0; i<recipeCard.ingredients.length; i++)
    {
    console.log(recipeCard.ingredients[i]);
    
    }