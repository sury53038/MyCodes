#include<iostream>
using namespace std;
const int m = 50;
class ITEMS{
    int itemcode[m];
    float intemprice[m];
    int count;
    public:
    void Count(void){
        count=0;
    };
    void getitems(void);
    void remove(void);
    void totalprice(void);
    void display(void);
};

void ITEMS::getitems(void){
    cout<<"Enter item code: ";
    cin>>itemcode[count];
    cout<<"Enter item cost: ";
    cin>>intemprice[count];
    count++;
}
void ITEMS::totalprice(void){
    float sum = 0;
    for(int i=0;i<count;i++)
    sum = sum+intemprice[i];
    cout<<"\nTotal Cost: "<<sum<<endl;
}
void ITEMS::remove(void){
    int a;
    cout<<"Enter item code: ";
    cin>>a;
    for(int i=0;i<count;i++){
        if(itemcode[i]==a){
        (itemcode[i]=0);
        (intemprice[i]=0);
        }
    }
}
void ITEMS::display(void){
    cout<<"\nCode\tPrice\n";
    for(int i=0;i<count;i++){
        cout<<"\n"<<itemcode[i];
        cout<<"\t"<<intemprice[i];
    }
    cout<<"\n";
}
int main(){
    ITEMS orders;
    orders.Count();
    int x;
    do{
        
        cout<<"\nYou can do the following: ";
        cout<<"\nEnter appropriate number: ";
        cout<<"\n1.Add an item.\n2.Display total cost.\n3.Delete an item.\n4.Display list.\n5.Quit";
        cout<<"\n\n";
        cin>>x;
        switch(x)
        {
            case 1:orders.getitems();break;
            case 2:orders.totalprice();break;
            case 3:orders.remove();break;
            case 4:orders.display();break;
            case 5:break;
            default:cout<<"Error.Try again.";
        }
    }while(x!=5);
    return 0;
}