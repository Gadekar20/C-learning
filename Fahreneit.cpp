#include<iostream>
using namespace std;
int main()
{
    float fahreneit,celsius;
    cin>>fahreneit;
    celsius=((fahreneit-32)*5)/9;
    cout<<"fahreneit:"<<fahreneit<<"to celsius conversion is:"<<celsius;
    return 0;
}