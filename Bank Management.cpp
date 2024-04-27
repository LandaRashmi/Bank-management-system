#include<iostream>
#include<vector>
using namespace std;
class BankAccount{
	private:
		string name;
		int accNum;
		double bal;
	public:
		BankAccount(string n, int ac, double b){
			name=n;
			accNum=ac;
			bal=b;
		}
		string get_name(){
			return name;
		}
		int get_accNum(){
			return accNum;
		}
		double get_bal(){
			return bal;
		}
		void 
};
class BankManagement{
	private:
		vector<BankAccount>bank;
	public:
		void AddAccount(string n, int ac, double b){
			bank.push_back(BankAccount(n,ac,b));
		}
		void showAllAccounts(){
			cout<<"\t\tAll Account Holders "<<endl;
			for(int i=0;i<bank.size();i++){
				cout<<"Name :"<<bank[i].get_name();
				cout<<"Account Number :"<<bank[i].get_accNum();
				cout<<"Balance :"<<bank[i].get_bal()<<endl;
			}
		}
		void search(int account){
			cout<<"\t\tAccount Holder "<<endl;
			for(int i=0;i<bank.size();i++){
				if(bank[i].get_accNum()==account){
					cout<<"Name :"<<bank[i].get_name();
				cout<<"Account Number :"<<bank[i].get_accNum();
				cout<<"Balance :"<<bank[i].get_bal()<<endl;
				}
			}
		}
};
int main(){
	BankManagement b;
	int choice;
	char op;
	do{
		system("cls");
		cout<<"\t\t::Bank Management System"<<endl;
		cout<<"\t\t\t Main Menu"<<endl;
		cout<<"\t\t"<<endl;
		cout<<"\t\t1. Create New Menu"<<endl;
		cout<<"\t\t2. Show All Accounts"<<endl;
		cout<<"\t\t3. Search Account"<<endl;
		cout<<"\t\t4. Deposit Money"<<endl;
		cout<<"\t\t5. Withdraw Money"<<endl;
		cout<<"\t\t6. Exit"<<endl;
		cout<<"\t\t-------------------------------------------"<<endl;
		cout<<"\t\tEnter your choice:";
		cin>>choice;
		switch(choice){
			case 1:{
				string name;
				int accNum;
				double bal;
				cout<<"\t\tEnter Name:";
				cin>>name;
				cout<<"\t\tEnter Account Number";
		        cin>>accNum;
		        cout<<"\t\tEnter Initial Balance";
		        cin>>bal;
		        b.AddAccount(name,accNum,bal);
		        cout<<"\t\tAccount Created Successfully....."<<endl;
				break;
			}
		    case 2:{
		    	b.showAllAccounts();
				break;
			}
		    case 3:{
		    	int acNum;
		    	cout<<"\tEnter Account Number :";
		    	cin>>acNNum;
		    	b.search(acNum);
				break;
			}
			case 4:{
				
				break;
			}
		    	
	    	}
	cout<<"\t\tDo you want to continue or exit [Yes/No] ?? ";
	cin>>op;
   }while(op=='y' || op=='Y');
}
