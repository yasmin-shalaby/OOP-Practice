#include <iostream>
using namespace std;

class Account
{
private:
    string id, name;
    double balance;
public:
    Account(string id, string name){
        this->id = id;
        this->name = name;
        this->balance = 0.0;
    };
    Account(string id, string name, double balance){
        this->id = id;
        this->name = name;
        this->balance = balance;
    };
    string get_id(){
        return id;
    };
    string get_name(){
        return name;
    };
    double get_balance(){
        return balance;
    };
    double credit(double amount){
        this->balance += amount;
        return this->balance;
    }
    double debit(double amount){
        if(amount <= this->balance){
            this->balance -= amount;
        }
        else{
            cout<<"Amount exceded balance"<<"\n";
        }
        return balance;
    };
    double transfer_to(Account& another, double amount){
        if(amount <= this->balance){
            this->balance -= amount;
            another.balance += amount;
        }
        else{
            cout<<"Amount exceded balance"<<"\n";
        }
        return balance;
    };
};

int main(){

    Account a1("101", "Yasmin", 1000); // =1000
    Account a2("102", "Ahmed");

    a1.credit(1000); // = 2000
    a1.debit(500); // = 1500

    a1.transfer_to(a2, 500); // yasmin = 1000 , ahmed = 500

    cout << "Yasmin Balance: "
         << a1.get_balance() << endl;

    cout << "Ahmed Balance: "
         << a2.get_balance() << endl;

}
