#include <iostream>
#include <stack>

using namespace std;

void insert(stack<int> &s, int temp)
{
    if(s.size()==0||s.top()<=temp)
    {
        s.push(temp);
        return;
        
    }
    int value=s.top();
    s.pop();
    insert(s,temp);
    s.push(value);
    return ;
    
}

void sort(stack<int> &s)
{
    if(s.size()==1)
    {
        return ;
    }
    int temp=s.top();
    s.pop();
    sort(s);
    insert(s,temp);
    return ;
    
}


void print(stack<int> &s)
{
    
    // for sorting in descending order
    while(!s.empty())
    {
        cout<<s.top()<<" "<<endl;
        s.pop();
    }
    return ;
    // for sorting in ascending order
    /*if(s.empty())
    {
        return;
    }
    int x=s.top();
    s.pop();
    print(s);
    
    cout<<x<<" "<<endl;
    */
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(1);
    s.push(0);
    s.push(4);
    s.push(2);
    
    sort(s);
    
    print(s);

    return 0;
}
