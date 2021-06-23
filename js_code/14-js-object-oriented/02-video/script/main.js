function Video(title, uploader, seconds) {
    this.title = title;
    this.uploader = uploader;
    this.seconds = seconds;
}

Video.prototype.watch = function() {
    console.log("You watched all " + this.seconds + " seconds of " + this.title);
};

var vid = new Video("Lord of Rings", "Giovanni DODo", 160);
vid.watch();


var vid2 = new Video("Hakuna Matata", "elreydeleon", 300);
vid2.watch();