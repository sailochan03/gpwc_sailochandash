#include<iostream>
using namespace std;

namespace lib1{
	void myName(){
		cout <<"Sai Lochan Dash"<<endl;
	}
}
namespace lib2{
	void myName(){
		cout <<"SMiX"<<endl;
	}
}

int main(){
	lib1::myName();
	lib2::myName();
	return 0;
}
