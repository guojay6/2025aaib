//week08-4_bubble_balloon
//��mouse�j��y
void setup(){
  size(400,400);//�j�p
}
int x,y,s; //��y�y��,�j�p
void draw(){
  background(255);//�զ�I��
  ellipse(x,y-s/2,s*0.7,s);//�G�G����y,��Ĳ�U��
  if(mousePressed) s++;//�@�����ۡA�~�|����
  else{//�S�����۴N�|���W��
    if(y>s) y-=2;//�S������Ѫ�O�N���W
 }
}
void mousePressed(){//���Umouse���ܮ�y��m�j�p
  x=mouseX;
  y=mouseY;
  s=1;//�j�p�]��1
}
