#include<iostream>
using namespace std;
class SUB
{
public:
    void prime()
    {
        int num;
        int check = 11;
        cin>>num;
        for(int i=2;i<num; i++)
        {
            if(num % i == 0)
            {
                check = 100;
                cout<<num<<"is not a prime number"<<endl;
                break;
            }
        }
        if(check == 11)
        {
            cout<<num<<"is a prime number"<<endl;
        }
    }
};
int main()
{
    SUB obj;
    obj.prime();
    return 0;
}
