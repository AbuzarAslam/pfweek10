#include<iostream>
using namespace std;
main()
{
    int numbers[5];
    for (int n=0;n<5;n++)
    {
        cout << "Enter"<< n+1 << "weight....";
        cin >> numbers[n];
    }
    
    
    int temp;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 5; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    for(int idx=0;idx<5;idx++)
    {
    	cout << numbers[idx] << "\t";
	} 
	
}

	  
	  
	  
	  
	  
	  
	  
