#include<iostream>
#include<string>

using namespace std;

class Box{
	public:
		double length, breadth, height;
		
		Box(double length, double breadth, double height){
			this -> length = length;
			this -> breadth = breadth;
			this -> height = height;
		}
		
		double getVolume(){
			return length * breadth * height;
		}
		void setL(double length){
			this->length = length;
		}
		void setH(double height){
			this->height = height;
		}
		void setB(double breadth){
			this->breadth = breadth;
		}
		
};

int main(){
	Box b1(2, 3, 4);
	double volume1 = b1.getVolume();
	Box b2(4, 4, 4);
	
	b2.setH(4);
	b2.setL(4);
	b2.setB(4);
	
	cout<< b2.getVolume() << endl;
	cout<< volume1 << endl;
}
