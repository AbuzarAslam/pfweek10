#include<iostream>
using namespace std;
int checkCondition(string temp,char letter);
main()
{
    int size;
    cout << "Enter the number of words you want to enter.....";
    cin >> size;
    string name[size];
    char letter;
    int count = 0;
    for(int n=0;n<=size-1;n++)
    {
        cout << "Enter word...";
        cin >> name[n];
    }
    cout << "Enter letter you want to find....";
    cin >> letter;
   
    result = checkCondition(temp,letter);
    cout << letter << " comes " << result << " times";
}
int checkCondition(string temp,char letter)
{
 string temp;
    for(int m=0;m<=size-1;m++)
    {
        temp = name[m];
        int idx=0;
        while(temp[idx] != '\0')
        {
            if(letter==temp[idx])
            {
                count = count +1;
            }
            idx++;
        }
    }
    return count;
}