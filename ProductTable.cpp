#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int kol;
    cout<<"Input a number: ";
    cin>>kol;

    for(int i = 1; i <= kol; i++)
    {
    cout<<"Multiplication: "<<i<<endl;
        for(int k = 1; k <= 10; k++){
            cout<<i<<"*"<<k<<"="<<i*k<<endl;
        }
        cout<<endl;
    }


}
