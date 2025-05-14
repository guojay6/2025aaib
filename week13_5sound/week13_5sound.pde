//week13_5_sound
import processing.sound.*;
SoundFile mySound;//
void setup(){
  size(400,400);
  mySound=new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void draw(){
  
}
