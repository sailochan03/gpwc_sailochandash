#include<iostream>
using namespace std;

namespace math{
	void addition(int a, int b){
		cout<<""<<a<<"+"<<b<<"="<<a+b<<endl;
	}
	void subtraction(int a, int b){
		cout<<""<<a<<"-"<<b<<"="<<a-b<<endl;
	}
	void multiplication(int a, int b){
		cout<<""<<a<<"*"<<b<<"="<<a*b<<endl;
	}
	void division(int a, int b){
		cout<<""<<a<<"/"<<b<<"="<<a/b<<endl;
	}
}
int main(){
	int a;
	int b;
	 
	cout<<"Enter num1: ";
	cin>>a;
	cout<<"Enter num2: ";
	cin>>b;
	
	math::addition(a,b);
	math::subtraction(a,b);
	math::multiplication(a,b);
	math::division(a,b);
	return 0;
}
