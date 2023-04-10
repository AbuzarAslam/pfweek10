#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter number of boxes....";
    cin >> size;
    int boxes[size];
    int length[size];
    int height[size];
    int width[size];
    int area =0;
    for (int n=0;n<size;n++)
    {
        cout << "Enter length of " << n+1<< " box...";
        cin >> length[n];
        cout << "Enter width of " << n+1<< " box...";
        cin >> width[n];
        cout << "Enter height of " << n+1<< " box...";
        cin >> height[n];
    }
    for(int m=0;m<size;m++)
    {
        area = area + (length[m]*width[m]*height[m]);
    }
    cout << "Total area is...." << area;
}
