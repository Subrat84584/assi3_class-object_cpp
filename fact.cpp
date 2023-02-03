#include<iostream>
using namespace std;
class facto
{
     private:
	    int num,fact;
	public:
	  void set(int n)
	  {
	      num=n;
	      fact=1;
		  for(int i=1;i<=num;i++)
		  {
		  	   fact=fact*i;
			   } 	
	  }	
	  void print()
	  {
	  	cout<<"factorial of this number:"<<fact;
	  }
};
int main()
{
	facto f1;
	f1.set(5);
	f1.print();
	return 0;
}
