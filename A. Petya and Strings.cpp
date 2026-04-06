#include <iostream>

using namespace std;

int main ( )
{
    string s,p;
    cin>>s>>p;

    for(int i=0;i<s.size();i++) {
        s[i]=tolower(s[i]);
        p[i]=tolower(p[i]);


    }
        if(s==p) {
            cout<<0<<endl;
        }
        else if(s<p) {
            cout<<-1<<endl;
        }
        else {
            cout<<1<<endl;
        }

    return 0;


}
