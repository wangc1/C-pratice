#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
	Point(int a = 0, int b = 0)
	{
		x = a;
		y = b;
	}
	void print()
	{
		cout << "(" << x << "," << y << ")";
	}
	friend double Distance(Point a, Point b);
private:
	int x, y;
};
double Distance(Point a, Point b)
{
	int x = a.x - b.x;
	int y = a.y - b.y;
	return sqrt(x*x + y * y);
}
int main11()
{
	Point p1(3, 4), p2;
	double d = Distance(p1, p2);
	p1.print();
	p2.print();
	cout << "the ditance is " << d << endl;
	system("pause");
	return 0;
}