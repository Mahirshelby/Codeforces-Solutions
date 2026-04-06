#include <iostream>

using namespace std;

int main ( )
{
    int n;
    string s;
    int count=0;
    cin>>n>>s;

    for(int i=1;i<s.size();i++) {
        if(s[i]==s[i-1]) {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
