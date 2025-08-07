#include <iostream>
#include <iomanip>
using namespace std;
void wincheck(int arr[3][3]);
void changeitem(int tarr[3][3])
{
    int choice;
    for (int i = 0; i < 10; i++)
    {
        if ((i % 2) == 0)
        {
            cout << "Player 1 ";
            break;
        }
       
        else
        {
            cout << "Player 2 ";
            break;
        }
    }
    int i=0;
    while(i<10){
    cout << "please enter your choice: (1-9)" << endl;
    cin >> choice;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (choice == tarr[i][j])
            {
                if (tarr[i][j] == 'X' || tarr[i][j] == 'O')
                {
                    cout << "invlid input. Space already occupied.";
                }
                else
                {
                    for (int k = 0; k < 10; k++)
                    {
                        if ((k % 2) == 0){
                            tarr[i][j] = 'X';
                            wincheck(tarr);
                        }
                        else{
                            tarr[i][j] ='O';
                            wincheck(tarr);
                        }
                    }
                }
                for (int i = 0; i < 3; i++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        cout << (char)(tarr[i][k]) << "    ";
                    }
                    cout << endl;
                }
            }
            else
            {
                for (int i = 0; i < 3; i++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        cout << tarr[i][k] << "    ";
                    }
                    cout << endl;
                }
                cout << "invalid input.please choose (1-9)";
                cin >> choice;
            }
        }
    }
}
}

void wincheck(int tarr[3][3])
{
    if ((tarr[1][1]) == (tarr[1][2]) == (tarr[1][3]) == 'X')
    cout << "Player 1 wins";
    else if((tarr[1][1])==(tarr[1][2])==(tarr[1][3])=='O')
    cout<<"Player 2 wins";

    else if((tarr[2][1])==(tarr[2][2])==(tarr[2][3])=='X')
    cout<<"Player 1 wins";
    else if((tarr[2][1])==(tarr[2][2])==(tarr[2][3])=='O')
    cout<<"Player 2 wins";
    
    else if((tarr[3][1])==(tarr[3][2])==(tarr[3][3])=='X')
    cout<<"Player 1 wins";
    else if((tarr[3][1])==(tarr[3][2])==(tarr[3][3])=='O')
    cout<<"Player 2 wins";
    
    else if((tarr[1][1])==(tarr[2][1])==(tarr[3][1])=='X')
    cout<<"Player 1 wins";
    else if((tarr[1][1])==(tarr[2][1])==(tarr[3][1])=='O')
    cout<<"Player 2 wins";
    
    else if((tarr[1][2])==(tarr[2][2])==(tarr[3][2])=='X')
    cout<<"Player 1 wins";
    else if((tarr[1][2])==(tarr[2][2])==(tarr[3][2])=='O')
    cout<<"Player 2 wins";

    else if((tarr[1][3])==(tarr[2][3])==(tarr[3][3])=='X')
    cout<<"Player 1 wins";
    else if((tarr[1][3])==(tarr[2][3])==(tarr[3][3])=='O')
    cout<<"Player 2 wins";
    
    
    else if((tarr[1][1])==(tarr[2][2])==(tarr[3][3])=='X')
    cout<<"Player 1 wins";
    else if((tarr[1][1])==(tarr[2][2])==(tarr[3][3])=='O')
    cout<<"Player 2 wins";
    
    else if((tarr[1][3])==(tarr[2][2])==(tarr[3][1])=='X')
    cout<<"Player 1 wins";
    else if((tarr[1][3])==(tarr[2][2])==(tarr[3][1])=='O')
    cout<<"Player 2 wins"; 
}

int main()
{
    cout << "TIC-TAC-TOE" << endl
         << endl;
    int tarr[3][3];
    int j = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            tarr[i][k] = j;
            j++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            cout << tarr[i][k] << "    ";
        }
        cout << endl;
    }
    changeitem(tarr);
    return 0;
}