//week12_1_happy_bubble_3D_partl
void setup(){
  size(300, 300, P3D);//開啟3D功能
}
void draw(){
  background(255); //白色背景
  
  
  pushMatrix();
  translate(mouseX,mouseY);
  sphere(60);
  popMatrix();
}
