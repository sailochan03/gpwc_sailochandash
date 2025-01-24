#include<iostream>
using namespace std;

class forest{
	private:
		int trees, birds, men;
	public:
		forest(int t, int b, int m) : trees(t), birds(b), men(m) {}
		void standing(){
			cout << trees << " trees are standing." << endl;
		}
		void walking(){
			cout << men <<" men are walking." << endl;
		}
		void flying(){
			cout << birds << " birds are flying." << endl;
		}
		void displayActivity(){
			standing();
			walking();
			flying();
		} 
};

int main(){
	forest f1(10, 20, 30);
	f1.displayActivity();
}
