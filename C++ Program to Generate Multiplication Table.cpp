//C++ Program to Generate Multiplication Table
#include<iostream>
using namespace std;
class Table
{
public:
    int num,result,i=10;

public:
    void enter()
    {

    cout<<"Enter any number;";
    cin>>num;

    }
    void display()
    {
        for(i=1;i<=10;i++)



       cout << num << " * " << i << " = " << num * i << endl;



}
};
int main()
{

    Table t;
    t.enter();
    t.display();
    return 0;
}


