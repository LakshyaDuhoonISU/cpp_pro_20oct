#include<iostream>
using namespace std;

void add(int *num); //forward declaration
int main()
{
    int num=2,c;
    cout<<"Value of num before calling: "<<num<<endl;
    add(&num);
    cout<<"Value of num after calling: "<<num<<endl;
    return 0;
}

void add(int *n)
{
    *n=*n+10;
    cout<<"Value of num in function: "<<*n<<endl;
    //return n;
}
