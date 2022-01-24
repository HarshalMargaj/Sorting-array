#include<iostream>

int main()
{
    int n, i, arr[50], j, temp, c, cc;
    std::cout<<"Enter no. of elements:";
    std::cin>>n;
    std::cout<<"Enter elements:" << std::endl;
    for(i=0; i<n; i++)
    std::cin>>arr[i];
    for (i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            c++;
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    std::cout<<"Array elements after sorting:"<< std::endl;
    for(i=0; i<n; i++)
    std::cout<<arr[i]<<" ";
    return 0;
}