#include<iostream>
using namespace std;
class Time
{
     private:
	     int hr,min,sec;
	 public:
	    void set(int h,int m,int r)
		{
		    hr=h;
			min=m;
			sec=r; 	
		}	
		void display()
		{
			cout<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
		}
};
int main()
{
	Time t;
	t.set(3,45,20);
	t.display();
	return 0;
}
