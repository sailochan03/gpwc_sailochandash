#include<stdio.h>
#include<stdlib.h>

typedef struct BankAccount{
	char name[30];
	double balance;
	int accNo;
} ba;

void accDetails(ba *Account){
	printf("Account Holder: %s | Balance: %.2f\n", Account->name, Account->balance);
}

void withdraw(ba *Account, float amount){
	if(amount < 0){
		printf("Invalid input, Amount should be positive.");
	}else if(amount > Account->balance){
		printf("Insufficient balance");
	}else {
		Account->balance -= amount;
		printf("Account has been debited with Rs.%.2f\n", amount);
	}
}

void deposit(ba *Account, float amount){
	if(amount < 0){
		printf("Invalid input, Amount should be positive.");
	}else {
		Account->balance += amount;
		printf("Account has been credited with Rs.%.2f\n", amount);
	}
}

int main(){
	ba acc1 = {"SMiX", 5000};
	
	accDetails(&acc1);
	
	deposit(&acc1, 500);
	printf("Balance: %.2f\n", acc1.balance);
	
	withdraw(&acc1, 250);
	printf("Balance: %.2f\n", acc1.balance);
	
	return 0;
}
