#include<iostream>
using namespace std;

int main()
{
    int myint;
    cout<<"Enter an integer:"<<endl;
    cin>>myint;
    cout<<"Using for loop:"<<endl;  
    //FOR LOOP BLOCK
    for(int i=0;i<10;i++)
    {
        cout<<(i+1)<<" X "<<myint<<" = "<<(myint*(i+1))<<endl;
    }
    cout<<"Using while loop"<<endl;
    //WHILE LOOP BLOCK
    int wvar = 0;
    while(wvar < 10)
    {
        wvar++;
        cout<<wvar<<" X "<<myint<<" = "<<(myint*wvar)<<endl;
    }
    cout<<"Using Do While loop"<<endl;
    //DO WHILE LOOP BLOCK
    int dwvar = 0;
    do
    {
        cout<<(dwvar+1)<<" X "<<myint<<" = "<<(myint*(1+dwvar))<<endl;   
        dwvar++;
    } while (dwvar<10);
    return 0;
}
