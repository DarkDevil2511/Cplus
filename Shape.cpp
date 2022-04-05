#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shape{
	protected:
		string name;

	public:
		virtual double area()=0;

		string getName() {
			return name;
		}
};

class Square : public Shape {
	private:
		int side;

	public:
		Square(string name, int side) {
			this->name = name;
			this->side = side;
		}
		double area(){
			return side*side;
		}
};

class Circle : public Shape{
	private:
		int radius;

	public:
		Circle(string name,int radius) {
			this->name = name;
			this->radius = radius;
		}
		double area() {
		return 3.14*radius*radius;
	}
};
class Rectangle : public Shape{
	private:
		int height;
		int width;

	public:
		Rectangle(string name,int height,int width) {
			this->name = name;
			this->height = height;
			this->width = width;
		}
		double area() {
			return height*width;
		}
};

	

int main() {
	Circle circle("circle", 3);
	Square square("square", 5);
	Rectangle rectangle("rectangle", 4, 5);

	vector<Shape*> vect;
	vect.push_back(&circle);
	vect.push_back(&square);
	vect.push_back(&rectangle);

	int size = vect.size();
	for(int i=0; i<size;i++){
		cout << "Name: " <<vect[i]->getName() << " - Area: " << vect[i]->area() << endl;

	}
	return 0;

}
