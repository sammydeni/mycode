JSON.parse(JSON.stringify(cars));
// const objFactory = JSON.parse(JSON.stringify(factory));


let list = document.createElement('ul');
document.body.appendChild(list);

cars.forEach(car => {
    let listElement = document.createElement('li');
    let printObj = ""; 
    for (const key in car) {
       printObj += key + " : " + car[key] + " ,";
    }
    listElement.innerText = printObj.replace(/.$/,".");
    list.appendChild(listElement);
    
    
});



