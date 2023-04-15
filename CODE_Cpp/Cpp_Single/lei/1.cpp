#include <iostream>
using namespace std;

class Cube
{
private:
	int longth=0;
	int wide=0;
	int high=0;
public:
	void setCube(int l,int w,int h)
	{
		longth=l;
		wide=w;
		high=h;
	}
	int getCube()
	{
		return longth,wide,high;
	}
};
int main()
{
	Cube c1;
	
	c1.setCube(1,2,3);
	c1.getCube();
	cout<<c1.getCube()<<endl;;
	return 0;
}