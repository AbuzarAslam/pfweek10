#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter how many staurday he run...";
    cin >> size;
    int count=0;
    int miles[size];
    for(int n=0;n<size;n++)
    {
        cout << "Enter miles on " << n+1 << " Saturday....";
        cin >> miles[n];
    }
    for(int m=0;m<size-1;m++)
    {
        if(miles[m+1]>miles[m])
        {
            count++;
        }
    }
    cout << "There are "<< count << " progress days";
}