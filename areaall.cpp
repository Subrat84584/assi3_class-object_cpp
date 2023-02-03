#include<iostream>
using namespace std;
class area
{
     private:
	 float r,resC;
	 int l,b;
	 public:
	 void set(float a)
	 {
	    r=a;
	 	float pi=3.14;
	 	resC=pi*r*r;
	 }	
	 void set(int a,int B)
	 {
	 	l=a;
	 	b=B;
	 }
	 void print()
	 {
	 	cout<<"Area of circle"<<resC;
	 	cout<<"Area of rectangle:"<<l*b;
	 }
};
int main()
{
	area a;
	a.set(4.0);
	a.set(2,4);
	a.print();
	return 0;
}
