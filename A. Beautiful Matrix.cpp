#include <iostream>

using namespace std;

const int SIZE=5;
int main ( )
{
    int x;
    int r,c;
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            cin>>x;
            if(x==1) {
                r=i;
                c=j;
            }

        }
    }
     int moves=abs(r-2)+abs(c-2);
    cout<<moves<<endl;
    return 0;
}
