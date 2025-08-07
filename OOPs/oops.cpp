// welcome to tree

#include<iostream>
using namespace std;

class Papa{

    public:
    int height, weight, age;
    string country, complexity;

    Papa(){}

    // Papa(int ht, int wt, int agee, string cmp, string cntry){
    //     height = ht;
    //     weight = wt;
    //     age = agee;
    //     complexity = cmp;
    //     country = cntry;
    // }

    void display(){
        cout<<"Papa ki jankari"<<endl;
        cout<<"Height :: "<<height<<endl;
        cout<<"Weight :: "<<weight<<endl;
        cout<<"Age :: "<<age<<endl;
        cout<<"Country :: "<<country<<endl;
    }
};

int main(){

    Papa p;
    p.height = 6.2;
    p.age = 53;
    p.weight = 78;
    p.complexity = "Fair";
    p.country = "INDIA";

    p.display();

    //Papa q(6.3, 76, 55, "Fair", "India");
    //q.display();

    return 0;
}