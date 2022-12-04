#include<iostream>
#include<cmath>
constexpr auto pi = 3.14;
using namespace std;

class Shape {
public:
	virtual void getShape() = 0;
};
class Triangle : public Shape {
private:
	int h, b;
	double area_triangle;
public:
	Triangle() {
		b = 1;
		h = 3;
		area_triangle = (b * h) / 2;
	}
	void getShape() {
		
		cout << "This is a Triangle. The Formula of the area of a triangle is: Height*base/2" << endl;
		cout << "The base and height of the triangle are: b= "<<b << " h="<< h << endl;
		
	}
	void showt() {
		cout << "The area calculated of this triangle is: ("<<b <<" * "<<h << ")/2 = " << area_triangle << endl;
		cout << "-----------------------------------------------------------------------------------------------" << endl;
	}
};
class Rectangle : public Shape {
private:
	int w, l;
	double area_rectangle;
public:
	Rectangle(){  
		w = 2; l = 4;
		area_rectangle=w*l;}
	void getShape() {
		cout << "This is a Rectangle. The Formula of the area of a rectangle is: Width*Length" << endl;
		cout << "The width and the length of the rectangle are: W= "<< w << " L= "<<l << endl;
	}
	void showr(){ cout << "The area calculated of this rectangle is: "<<w << " * "<< l << " = " << area_rectangle << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
	}
};

class Circle : public Shape {
private:
	int r;
	double area_circle;
public:
	Circle() {
		r = 4;
		area_circle= pi*pow(r,2);
	}
	void getShape() {
		cout << "This is a Circle. The Formula of the area of a circle is: Pi*(radius^2)" << endl;
		cout << "The radius of the circle is: "<<r << endl;
		
	}
	void showc() {
		cout << "The area calculated of this cirle is: " << pi << " * "<< r<< " = " << area_circle << endl;
		cout << "-----------------------------------------------------------------------------------------------" << endl;
	}
};

int main() {
	Triangle t;
	Rectangle r;
	Circle c;
	t.getShape();
	t.showt();
	r.getShape();
	r.showr();
	c.getShape();
	c.showc();
	return 0;
}