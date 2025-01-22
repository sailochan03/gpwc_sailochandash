#include<iostream>
using namespace std;
/*
uses of namespace:

1.making code readable
2.organises the code
3.helps avoides name conflicts
*/
namespace CSE{
	namespace SEC_28{
		void printData(string name, int regNo){
			cout<<"Name: "<<name<<endl;
			cout<<"RegNo: "<<regNo<<endl;
		}
	}
	namespace SEC_29{
		void printData(string name, int regNo){
			cout<<"Name: "<<name<<endl;
			cout<<"RegNo: "<<regNo<<endl;
		}
	}
}
int main(){
	CSE::SEC_28::printData("SMiX", 4177);
	CSE::SEC_29::printData("Guddu", 5006);
	return 0;
}
