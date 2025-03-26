//week06_4fishX,fishY
//程式模仿week04-5及week03-4
void setup(){
  size(600, 400);
}
float fishx=300,fishy=200;//魚座標
float []x=new float[100];//jave的陣列
float []y=new float[100];//最多100飼料
int N=0; //目前0
void draw(){
  background(#C0ffee);
   for(int i=0;i<N;i++){//for迴圈
    ellipse(x[i],y[i],8,8);//飼料的陣列
    y[i]++;
    if (y[i]>400){//飼料掉到底部，要回收收
      for(int k=i;k<N-1;k++){//把右邊逐一往左搬
        x[k] =x[k+1];//格子的值，往左移
        y[k] =y[k+1];
      }
      N--;//更新飼料種數
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
