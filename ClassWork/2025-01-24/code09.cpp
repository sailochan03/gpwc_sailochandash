#include<iostream>
#include<string>

using namespace std;

class bankAccount{
	private:
		string name;
		double balance;
	public:
		void updateName(string n){
    		name = n;
    	}
    	void updateBalance(double b){
    		balance = b;
    	}
    
    	void accDetails(){
    		cout << "Account Holder: " << name << " | Balance: " << balance << endl;
		}

		void withdraw(double amount){  
    		if(amount < 0) {
        		cout << "Invalid input, Amount should be positive." << endl;
    		} else if(amount > balance) {
        		cout << "Insufficient balance" << endl;
    		} else {
       			balance -= amount;
        		cout << "Account has been debited with Rs." << amount << endl; 
    		}	
		}

		void deposit(double amount) { 
    		if(amount < 0) {
        		cout << "Invalid input, Amount should be positive." << endl;
    		} else {
        		balance += amount;
        		cout << "Account has been credited with Rs." << amount << endl;
    		}
		}
		
		double getBalance(){
			return balance;
		}
		string getName(){
			return name;
		}
};

int main(){
	bankAccount acc1;
	
	acc1.updateName("SMiX");
	acc1.updateBalance(10000);
	
	acc1.accDetails();
	
	acc1.deposit(500);
	cout << "Balance: "<< acc1.getBalance() << endl;
	
	acc1.withdraw(250);
	cout << "Balance: "<< acc1.getBalance() << endl;
}
