#include<iostream>
using namespace std;
class Reverse
{
    private:
	   int num,r,sum;
	   public:
	   void set(int n)
	{
	   	num=n;
	   	sum=0;
	   	while(num>0)
	   	{
		
	   	    r=num%10;
	   	    sum=sum*10+r;
	   	    num=num/10;
	    }
	}	
		   void print()
		   {
		   	cout<<"Reverse of a number:"<<sum;
		   }
};
int main()
{
	Reverse r;
	r.set(123);
	r.print();
	return 0;
}
