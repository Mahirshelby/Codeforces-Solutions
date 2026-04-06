#include <iostream>

using namespace std;

int main ( )
{
    int count=0;
    int n;
    cin>>n;
    string s;


    for(int i=1;i<=n;i++) {
        cin>>s;
        if(s[1]== '+' ) {
            count++;
        }
        else {
            count--;
        }
    }
    cout<<count<<endl;
    return 0;
}
