#include <iostream>
using namespace std;

class AccountDetails
{
private:
    string Account_Holder_Name;
    unsigned long long Account_Number;
    unsigned long long Account_Balance = 0;
    string Nominee;
    string Branch = "Kukas";
    public:
    AccountDetails(string name, unsigned long long ac, unsigned long long bal, string nom, string branch):Account_Holder_Name(name),Account_Balance(bal),Account_Number(ac),Nominee(nom),Branch(branch)
    {}
    void deposit(int amt)
    {   
        if(amt < 0){
            cout<<"Deposit amount must be positvie"<<endl;
            return;
        }
        Account_Balance += amt;
        cout << "Amount " << amt << " credited to account number " <<"XXXXXXXXX"<<(Account_Number%1000) << endl;
        cout << "Updated Account Balance :: " << Account_Balance << endl;
    }
    void withdraw(int amt)
    {   
        if(amt < 0){
            cout<<"Transaction Faild"<<endl;
            cout<<"Amount must be positive. "<<endl;
            return;
        }
        if ((Account_Balance - amt) < 0)
        {
            cout << "Transaction Failed. Insuficient Balance." << endl;
        }
        else
        {
            Account_Balance = Account_Balance - amt;
            cout << "Amount " << amt << " debited from account number " <<"XXXXXXXXX"<<(Account_Number%1000) << endl;
            cout << "Updated Account Balance :: " << Account_Balance << endl;
            ;
        }
    }
    string acc_holder() const{return Account_Holder_Name;}
    long long acc_balance() const{return Account_Balance;}
    void display_balance()
    {
        cout << "Available balance :: " << Account_Balance << endl;
    }
    void display_account(){
        cout<<"Name :: "<<Account_Holder_Name<<endl;
        cout<<"Account Number :: "<<Account_Number<<endl;
        cout<<"Balance :: "<<Account_Balance<<endl;
        cout<<"Nomineee :: "<<Nominee<<endl;
        cout<<"Branch :: "<<Branch<<endl;
    }
};

int main()
{
    AccountDetails acc1("Ramsinghasan Singh", 8045000010010574, 100000000000, "Surya Kant Singh", "Kukas");
    // acc1.display_balance();
    acc1.deposit(1);
    //acc1.display_account();
    cout<<acc1.acc_holder()<<endl;
    return 0;
}