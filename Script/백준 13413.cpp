#include <iostream>
using namespace std;
int main()
{
    int t, n;
    string now;
    string goal;
    int Wcount = 0;
    int Bcount = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> now >> goal;
        for (int i = 0; i < n; i++)
        {
            if (goal.at(i) != now.at(i))
            {
                if (now.at(i) == 'W')
                    Wcount++;
                else
                    Bcount++;
            }
        }
        if (Wcount > Bcount)
            cout << Wcount << "\n";
        else
            cout << Bcount << "\n";
        Wcount = 0;
        Bcount = 0;
    }
    return 0;
}