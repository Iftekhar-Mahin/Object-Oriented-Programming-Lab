#include<iostream>
#include<math.h>
using namespace std;
class State
{
public:

    State()
    {
        cout<<"Constructor is called!!"<< endl;
    }
    ~State()
    {
        cout<<"Destructor is called!!"<< endl;
    }
    void display()
    {
        cout<<"State University of Bangladesh"<<endl;
    }
};
int main()
{
    State obj;
    obj.display();
    return 0;
}
