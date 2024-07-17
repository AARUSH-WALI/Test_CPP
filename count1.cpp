#include<iostream>
using namespace std;
int count=0;
int divisibleBy3(int arr[],int s)
{
    for(int j=0;j<s;j++)
    {
        if(arr[j]<0)
        {
            cout<<"Invalid Input";
        }
        else
        {
         if(arr[j]%3==0)
        {
            count+=1;
        }
        }
    }
    return count;
}
int main()
{
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    int num=divisibleBy3(arr,s);
    cout<<num;
}
