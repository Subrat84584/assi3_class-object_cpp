#include<iostream>
using namespace std;
class Largest
{
     private:
	   int a,b,c,z,f;
	   public:
	     void set(int m,int n,int p)
		 {
		 	a=m;
		 	b=n;
		 	c=p;
			 }	
			 void print()
			 {
			 	z=a>b?a:b;
			 	f=z>c?z:c;
			 	cout<<"largest number is:"<<f;
			 }
};
int main()
{
	Largest l;
	l.set(12,25,9);
	l.print();
	return 0;
}
