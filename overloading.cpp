#include<bits/stdc++.h>
using namespace std;
class space
{
    int x;
    int y;
public:
    void getdata(int a, int b);
    void display();
    void operator-();
};
void space::getdata(int a,int b)
{
    x=a;
    y=b;
}
void space::display()
{
    cout<<x<<endl;
    cout<<y<<endl;
}
void space::operator-()
{
    x=-x;
    y=-y;
}
int main()
{
 space s;
 s.getdata(10,-20);
 s.display();
 -s;
 s.display();
}
