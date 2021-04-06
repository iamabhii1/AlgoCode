//tower of hanoi using recursion

#include <iostream>

using namespace std;


void solve(int s,int d,int h,int n)
{
    if(n==1)
    {
        cout<<"move plate : "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(s,h,d,n-1);
    cout<<"move plate : "<<n<<" from "<<s<<" to "<<d<<endl;
    solve(h,d,s,n-1);
    return ;
    
}

int main()
{
    int disk,src,dst,hlpr;
    cout<<"enter the number of disks"<<endl;
    cin>>disk;
    cout<<"enter the source index"<<endl;
    cin>>src;
    cout<<"enter the helper index"<<endl;
    cin>>hlpr;
    cout<<"enter the destination"<<endl;
    cin>>dst;
    
    solve(src,dst,hlpr,disk);
    cout<<"this solution is done using recursion(tower of hanoi)"<<endl;
    return 0;
}
