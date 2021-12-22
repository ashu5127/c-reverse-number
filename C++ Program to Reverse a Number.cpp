//C++ Program to Reverse a Number
#include<iostream>
using namespace std;
class Table
{
public:
    int num;
    int reminder,revnumber=0;

public:
    void enter()
    {

    cout<<"Enter any number;";
    cin>>num;

    }
    void display()
    {
        while(num>0)
        {

            reminder=num%10;
            revnumber=(revnumber*10)+reminder;
            num=num/10;
        }
        cout<<"reverse number og given"<<revnumber;




}
};
int main()
{

    Table t;
    t.enter();
    t.display();
    return 0;
}



