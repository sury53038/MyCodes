#include<iostream>
using namespace std;
const int m = 50;
class ITEMS{
    int itemcode[m];
    float itemprice[m];
    int count;
    public:
    void cnt(void){
        count = 0;
    }
    void getitem(void);
    void displaysum(void);
    void remove(void);
    void displayitem(void);

};
void ITEMS::getitem(void){
    cout<<"Eneter item code: ";
    cin>>itemcode[count];
    cout<<"Enter item cost: ";
    cin>>itemprice[count];
    count++;
}
void ITEMS::displaysum(void){
    float sum = 0;
    for(int i =0;i<count;i++){
        sum = sum + itemprice[i];
    }
    cout<<"\nTotal price : "<<sum<<endl;
}
void ITEMS::remove(void){
    int a;
    cout<<"Enter item code: ";
    cin>>a;
    for(int i =0;i<count;i++){
        if(itemcode[i]== a){
            itemprice[i] = 0;
        }
    }
    displaysum();
}
void ITEMS::displayitem(void){
    cout<<"\nCode\tPrice\n";
    for(int i=0;i<count;i++){
        cout<<"\n"<<itemcode[i];
        cout<<"\t"<<itemprice[i];
    }
    cout<<endl;
}
int main(){
    ITEMS order;
    order.cnt();
    int q;
    do{
        cout<<"\n1.Add item to the list";
        cout<<"\n2.Display total amount";
        cout<<"\n3.Remove an item";
        cout<<"\n4.Display list";
        cout<<"\n5.Total no. of items";
        cout<<"\n6.Quit";
        cout<<"\n\nEnter appropriate choice: ";
        cin>>q;
        
        switch (q)
        {
        case 1:order.getitem();
        break;
        case 2:order.displaysum();
        break;
        case 3:order.remove();
            break;
        case 4:order.displayitem();
            break;
        case 5:order.cnt();
            break;
        case 6:
            break;     
        default:cout<<"Error...input not found, try again";
            break;
        }
    }while(q !=6);
    return 0;
}