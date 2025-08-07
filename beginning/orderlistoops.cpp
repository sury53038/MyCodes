#include<iostream>
#include<iomanip>
using namespace std;
const int m = 50;
class items{
    int itemCode[m];
    float itemprice[m];
    int count;
    public:
    void CNT(void){
        count = 0;
    };
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItem(void);
    };

void items :: getitem(void){
    cout<<"Enter item code: ";
    cin>>itemCode[count];
    cout<<"\nEnter item price: ";
    cin>>itemprice[count];
    count ++;
}
void items :: displaySum(void){
    float sum = 0;
    for(int i = 0; i<count; i++){
        sum+= itemprice[i];
    }
    cout<<"\nTotla value: "<<sum<<"\n";
}
void items :: remove(void){
    int x;
    cout<<"\nEnter the item code to remove item: ";
    cin>>x;
    for(int i=0;i<count;i++){
        if(x==itemCode[i]){
            itemprice[i]=0;
            itemCode[i]=0;
        }
    }
    //void displaySum(void);
}
void items :: displayItem(void){
    cout<<endl<<"Item code     Price"<<endl;
    for(int i=0; i<count; i++){
        cout<<endl<<setw(4)<<itemCode[i]<<setw(14)<<itemprice[i];
    }
    cout<<endl;
}
int main(){
    items order;
    order.CNT();
    int x;
    do{
        cout<<"you can do the following applications: "<<endl;
        cout<<"1. Add an item."<<endl;
        cout<<"2. Display total value."<<endl;
        cout<<"3. Delete an item"<<endl;
        cout<<"4. Display all items in the list."<<endl;
        cout<<"5. Exit"<<endl;
        cout<<endl;
        cout<<"Please enter your choice: "<<endl;
        cin>>x;

        switch(x)
        {
            case 1: order.getitem();break;
            case 2: order.displaySum();break;
            case 3: order.remove();break;
            case 4: order.displayItem();break;
            case 5: exit(0);
            default:cout<<"invalid input"<<endl;
        }

    }while(x!=5);
return 0;
}