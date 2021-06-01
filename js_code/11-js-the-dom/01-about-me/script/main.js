var body = document.body;
body.style.fontFamily = "Arial, sans-serif";

document.getElementById("nickname").innerText = "Samuele";
document.getElementById("favorites").innerText = "Parkour";
document.getElementById("hometown").innerText = "Borgosesia";

var liTags = document.getElementsByTagName("li");

for (let i = 0; i < liTags.length; i++) {
    liTags[i].classList.add("list-item");
}

var Img = document.createElement("img");
Img.src = "https://via.placeholder.com/150";
body.appendChild(Img);