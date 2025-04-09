//week08-4_bubble_balloon
//用mouse吹氣球
void setup(){
  size(400,400);//大小
}
int x,y,s; //氣球座標,大小
void draw(){
  background(255);//白色背景
  ellipse(x,y-s/2,s*0.7,s);//瘦瘦的氣球,接觸下方
  if(mousePressed) s++;//一直壓著，才會打氣
  else{//沒有壓著就會往上飄
    if(y>s) y-=2;//沒有撞到天花板就往上
 }
}
void mousePressed(){//按下mouse改變氣球位置大小
  x=mouseX;
  y=mouseY;
  s=1;//大小設成1
}
