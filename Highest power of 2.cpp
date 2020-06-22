/*
Input: N = 9
Output: 8
Explanation:
Highest power of 2 less than 9 is 8.



Input: N = -20
Output: -32
Explanation:
Highest power of 2 less than -20 is -32.

Input: N = -84
Output: -128
*/
#include<bits/stdc++.h>
using namespace std;
int positivevalue(int n)
{
    int x=floor(log2(n));
    return pow(2,x);
}
int negativevalue(int n)
{
    int x=ceil(log2(n));
    return -1*pow(2,x);
}
void highestvalueof2(int n)
{
    if(n>0)
    {
        cout<<positivevalue(n);
    }
    else
    {
        n=-n;
        cout<<negativevalue(n);
    }
}
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    highestvalueof2(n);
    return 0;
}
