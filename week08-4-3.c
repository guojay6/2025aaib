//week08-4_bubble_balloon
//用mouse吹氣球
void setup(){
  size(400,400);//大小
}
int []x=new int[100];
int []y=new int[100];
int []s=new int[100];
int N=0;//
void draw(){
  background(255);//白色背景
  for(int i=0;i<N;i++){
  ellipse(x[i],y[i]-s[i]/2,s[i]*0.7,s[i]);//瘦瘦的氣球,接觸下方
  if(mousePressed==false||i<(N-1)&&y[i]>s[i]+1) y[i]-=2;//一直壓著，才會打氣
 }
 if(mousePressed) s[N-1]++;//沒有撞到天花板就往上
}
void mousePressed(){//按下mouse改變氣球位置大小
  x[N]=mouseX;
  y[N]=mouseY;
  s[N] =1;
  N++;//大小設成1
}
