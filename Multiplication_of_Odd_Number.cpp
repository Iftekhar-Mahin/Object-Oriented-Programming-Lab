#include<iostream>
using namespace std;
class odd{
public:
    int check()
    {
        int x, y=1;
        cin>>x;
        for(int i = 1; i<=x; i++)
        {
            if(i%2!=0)
            {
               y = y*i;
            }
        }
        return y;

    }
};
int main()
{
    odd obj;
    cout<<obj.check();
    return 0;
}
