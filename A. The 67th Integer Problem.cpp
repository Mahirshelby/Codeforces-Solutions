#include <iostream>

using namespace std;

int main ( )
{
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>x;

        if(x<67) {
            y=x+1;
        }
        else {
            y=67;
        }
        cout<<y<<endl;
    }


    return 0;

}
