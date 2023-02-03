#include<iostream>
using namespace std;
class Rectangle
{
    private:
	int l1,b1,area;
	public:
	void set(int a,int b)
	{
	   l1=a;
	   b1=b;	
	   area=l1*b1;
	}	
	void print()
	{
		cout<<"Area of rectangle:"<<area;
	}
};
int main()
{
	Rectangle r;
	r.set(2,5);
	r.print();
	return 0;
}
