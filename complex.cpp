#include<iostream>
using namespace std;
class complex
{ 
     private:
        int real,img;
	public:
		void set(int r,int i)
		{
			real=r;
			img=i;
			
		}
		void display()
		{
			cout<<real<<" + "<<img<<" i "<<endl;
		}
};
int main()
{
	complex c1,c2;
	c1.set(2,4);
	c2.set(3,5);
	c1.display();
	c2.display();
	cout<<endl;
	return 0;
}
