#include<iostream>
using namespace std;

class Box{
	public:
		double len, br, ht;
		void setL(double l);
		void setB(double b);
		void setH(double h);
		double getVol();
};
void Box :: setL(double l){
	len = l;
}
void Box :: setB(double b){
	br = b;
}
void Box :: setH(double h){
	ht = h;
}
double Box :: getVol(){
	return len * br * ht;
}
int main(){
	Box b;
	
	b.setL(5);
	b.setB(4);
	b.setH(3);
	
	cout << b.getVol() << endl;
}

