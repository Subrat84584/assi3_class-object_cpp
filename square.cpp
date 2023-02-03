#include<iostream>
using namespace std;
class Square
{
    private:
	int num;
	public:
	void set(int n)
	{
	    num=n;
			
	}	
	void print()
	{
		cout<<num*num;
	}
};
int main()
{
	Square s;
	s.set(4);
	s.print();
	return 0;
}
