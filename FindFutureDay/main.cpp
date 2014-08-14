#include <iostream>

using namespace std;

int main()
{
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday","Thursday", "Friday","Saturday" };
    int today, n;
    cout <<"Enter the today code : ";
    cin >> today;
    cout <<"You want to have the days name after what number of days : ";
    cin >> n;

    cout<<"\n\nToday is "<< days[today]<< " and the future day is "<< days[(today + n) % 7]<< endl;
    return 0;
}
