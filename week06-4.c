//week06_4fishX,fishY
//�{���ҥ�week04-5��week03-4
void setup(){
  size(600, 400);
}
float fishx=300,fishy=200;//���y��
float []x=new float[100];//jave���}�C
float []y=new float[100];//�̦h100�}��
int N=0; //�ثe0
void draw(){
  background(#C0ffee);
   for(int i=0;i<N;i++){//for�j��
    ellipse(x[i],y[i],8,8);//�}�ƪ��}�C
    y[i]++;
    if (y[i]>400){//�}�Ʊ��쩳���A�n�^����
      for(int k=i;k<N-1;k++){//��k��v�@�����h
        x[k] =x[k+1];//��l���ȡA������
        y[k] =y[k+1];
      }
      N--;//��s�}�ƺؼ�
    }
  }
  println(N);
  ellipse(fishx,fishy,30,10);
}
void mousePressed(){
   x[N]=mouseX;
   y[N]=mouseY;
   N++;
}
