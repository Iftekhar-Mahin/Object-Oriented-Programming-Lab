
#include<iostream>
using namespace std;
class even{
public:
    void check()
    {
        int x;
        cin>>x;
        for(int i = 1; i<=x; i++)
        {
            if(i%2==0)
            {
               cout<<i<<endl;
            }
        }

    }
};
int main()
{
    even obj;
    obj.check();
    return 0;
}
