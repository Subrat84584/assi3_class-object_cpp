#include<iostream>
using namespace std;
class circle
{
    private:
	float r1,area;
	public:
	void set(float r)
	{
		float pi=3.14;
		r1=r;
	   area=pi*r1*r1;
	   	
	}	
	void print()
	{
		cout<<"Area of rectangle:"<<area;
	}
};
int main()
{
	circle r;
	r.set(2);
	r.print();
	return 0;
}
