#include<iostream>
#include<stdlib.h>
 using namespace std;

 class Point{

 private:
     float X;
     float Y;

     public:
     Point(float,float);

     float obtenerX();
     float obtenerY();
     float Negate();


 };

 Point::Point(float _X,float _Y){
 X=_X;

 Y=_Y;

 }

 float Point::obtenerX(){
 return X;

 }
  float Point::obtenerY(){
 return Y;

 }
 float Point::Negate(){

  float A,B;

  A=X*-1;
  B=Y*-1;
return (A,B);
 }
 int main(){

 Point punto(7,8);
 cout <<"los puntos negados son:" << punto.Negate() << endl;
cout <<"los puntos negados son:" << punto.obtenerX() << endl;

 return 0;



 }
