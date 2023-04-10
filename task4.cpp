#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter how many numbers you want to enter...";
    cin >> size;
    int number[size];
    for(int n=0;n<size;n++)
    {
        cout << "Enter " << n+1 << " number....";
        cin >> number[n];
    }
    int count=0;
    for(int n=1;n<size-1;n++)
    {
        if(number[n]>number[n+1]&& number[n]>number[n-1])
        {
            count++;
        }
    }
    if(count==0)
    {
        cout << "No peak!";
    }
    else if(count!=0)
    {
        for(int n=1;n<size-1;n++)
        {
            if(number[n]>number[n+1]&& number[n]>number[n-1])
            {
                cout << number[n];
            }
        }
    }
}