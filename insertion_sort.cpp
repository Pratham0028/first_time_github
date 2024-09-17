#include<iostream>
using namespace std;
void insertion(int arr[], int s)
{
    int i=1,j=0,temp=0;
    for(i=1;i<s;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]<temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int s;
    cout<<"ENTER THE NO. OF ELEMENTS IN YOUR ARRAY:";
    cin>>s;
    int arr[s];
    int i;
    for(i=0;i<s;i++)
    {
        cin>>arr[i];
    }
      cout<<"AFTER ARRANGING:";
    insertion(arr,s);
    return 0;
  
}