/*
Input : {5, 11, 10, 20, 9, 16, 23}
Output : 20 16 10 9 5 11 23
Number of distinct factors:
For 20 = 6, 16 = 5, 10 = 4, 9 = 3
and for 5, 11, 23 = 2 (same number of factors
therefore sorted in increasing order of index)

Input : {104, 210, 315, 166, 441, 180}
Output : 180 210 315 441 104 166
*/
#include<bits/stdc++.h>
using namespace std;
struct element
{
    int index,no_of_factors;
};
bool compare(struct element e1,struct element e2)
{
    if(e1.no_of_factors==e2.no_of_factors)
        return e1.index<e2.index;
    else
        return e1.no_of_factors>e2.no_of_factors;
}
int countfactors(int x)
{
    int counted=0;
    int s=sqrt(x);
    if(s*s==x)
        counted++;
    for(int i=1;i<sqrt(x);i++)
    {
        if(x%i==0)
            counted+=2;
    }
    return counted;
}
void print_on_basis_of_factor(int arr[],int n)
{
    struct element num[n];
    for(int i=0;i<n;i++)
    {
        num[i].index=i;
        num[i].no_of_factors=countfactors(arr[i]);
    }

    //sort(e1,e1+n,compare);
    sort(num,num+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<arr[num[i].index]<<" ";
    }
}
int main()
{
    int n,i;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print_on_basis_of_factor(arr,n);
    return 0;
}
