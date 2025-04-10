#include<iostream>

using namespace std;

class Box{
	double width;
	public:
	friend void print(Box box);
	void setWidth(double width){
		this -> width = width;
	}
};

void print(Box box){
	cout << "Width: "<<box.width<<endl;
}

int main(){
	Box box;
	box.setWidth(15.6);
	print(box);
	return 0;	
}

