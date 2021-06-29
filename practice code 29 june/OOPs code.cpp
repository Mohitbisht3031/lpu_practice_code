#include <iostream>
using namespace std;

class ComplexNumber{
      public:
  int r;
  int i;
   
  ComplexNumber(int real,int i){
     r =real;
      this->i = i;
  }
  
  void plus(ComplexNumber c){
      this->r+=c.r;
      this->i+=c.i;
  }
  
  void operator+(ComplexNumber &c){
      this->r+=c.r;
      this->i+=c.i;
  }
//   (a+ib)*(c+id)
// a*c+a*id+ib*c-b*d
void multiply(ComplexNumber &c){
    int x = r*(c.r);
    int y = r*(c.i);
    int z = i*(c.r);
    int a = i*(c.i);
    
    r = x-a;
    i = y+z;
}
void operator*(ComplexNumber &c){
        int x = r*(c.r);
    int y = r*(c.i);
    int z = i*(c.r);
    int a = i*(c.i);
    
    r = x-a;
    i = y+z;
}

void print(){
    cout<<r<<" "<<"+"<<" "<<"i"<<i<<endl;
}
};

int main() {
// 	cout<<"GfG!";
ComplexNumber c1(4,5);
ComplexNumber c2(1,2);
// c1.plus(c2);
// c1.print();
// c1*c2;
c1.multiply(c2);
c1.print();
	return 0;
}