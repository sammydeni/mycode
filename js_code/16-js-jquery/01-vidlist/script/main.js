var isTransformed = false;

function transform() {
  if (!isTransformed) {
    let liList = document.getElementsByTagName("li");
    for (let i = 0; i < liList.length; i++) {
      // liList[i].style.backgroundColor = "red";
      liList[i].style.display = "none";
      let aTag = liList[i].getElementsByTagName("a")[0];
      let url = aTag.href;
      let id = youtube.getIdFromUrl(url);
      let thumbnail = youtube.generateThumbnailUrl(url);
      vidNbr = i + 1;
      //creating the elements
      let vidContainer = document.createElement("div");
      let videoId = document.createElement("p");
      let videoUrl = document.createElement("a");
      let imgWrap = document.createElement("a");
      let videoImg = document.createElement("img");

      //Adding the proprieties
      vidContainer.className = "vidContainer";
      vidContainer.innerHTML = "Video " + i;
      videoId.innerHTML = "Video ID: " + i;
      videoUrl.href = url;
      videoUrl.innerHTML = "Apri il video!";
      imgWrap.href = url;
      videoImg.src = thumbnail;

      //Append the elements
      vidContainer.appendChild(videoUrl);
      vidContainer.appendChild(videoUrl);
      imgWrap.appendChild(videoImg);
      vidContainer.appendChild(imgWrap);
      document.querySelector("body").appendChild(vidContainer);
    }
    isTransformed = true;
  } else {
    location.reload();
  }
}
