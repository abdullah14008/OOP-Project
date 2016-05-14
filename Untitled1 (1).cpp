# include <iostream>

using namespace std;

class account
{	public:
		int balance;
		account(int b);
};

account::account(int b)
{
	balance=b;	
}

class atm
{
	public:
		int temp;

		void withdraw(account &a);
		void transfer(account &a,account &b,int c);
		void paybill(account &a,int b);
		void query(const account &a);

};
void atm::withdraw(account &a)
{
	cout<<"\nplease enter how many amout you want to withdraw";
	cin>>temp;
	while(temp>>a.balance)
	{
		cout<<"\nyour balance is : "<<a.balance<<" please enter amount less than or equal";
		cin>>temp;
	}
	a.balance=a.balance-temp;
}
		
void atm::transfer(account &a,account &b,int c)
{
	a.balance=a.balance-c;
	b.balance=b.balance+c;
}

void atm::paybill(account &a,int b)
{
	if(a.balance<b){cout<<"can't pay insufficient amont";
	}
	else{a.balance=a.balance-b;
	}
}

void atm::query(const account &a)
{
	cout<<"\nYour balance is : "<<a.balance;

}

int main(void)
{
	account a(50);
	account b(20);
	atm c;
	c.query(a);
	c.query(b);
	c.transfer(a,b,10);
	c.query(a);
	c.query(b);
	c.query(a);
	c.paybill(a,5);
	c.query(a);
	c.withdraw(a);
	c.query(a);

}
