var isTransformed = false;

function transform() {
  if (!isTransformed) {
    $("li").hide();
    let aTag = $("li a");
    let url = aTag.href;
    let id = youtube.getIdFromUrl(url);
    let thumbnail = youtube.generateThumbnailUrl(url);

    let vidContainer = '<div class="vidContainer">';
    vidContainer.html("Video");

    let videoId = $("<p>");
    videoId.html("Video ID");

    let videoUrl = $("<a>");
    videoUrl.href(url);
    videoUrl.html("Apri il video!");

    let imgWrap = $("<a>");
    imgWrap.href(url);

    let videoImg = $("<img>");
    videoImg.src(thumbnail);

    vidContainer.append(videoUrl);
    imgWrap.append(videoImg);
    vidContainer.append(imgWrap);
    $("body").append(vidContainer);

    isTransformed = true;
  } else {
    location.reload();
  }
}
