//week08-4_bubble_balloon
//��mouse�j��y
void setup(){
  size(400,400);//�j�p
}
int []x=new int[100];
int []y=new int[100];
int []s=new int[100];
int N=0;//
void draw(){
  background(255);//�զ�I��
  for(int i=0;i<N;i++){
  ellipse(x[i],y[i]-s[i]/2,s[i]*0.7,s[i]);//�G�G����y,��Ĳ�U��
  if(mousePressed==false||i<(N-1)&&y[i]>s[i]+1) y[i]-=2;//�@�����ۡA�~�|����
 }
 if(mousePressed) s[N-1]++;//�S������Ѫ�O�N���W
}
void mousePressed(){//���Umouse���ܮ�y��m�j�p
  x[N]=mouseX;
  y[N]=mouseY;
  s[N] =1;
  N++;//�j�p�]��1
}
