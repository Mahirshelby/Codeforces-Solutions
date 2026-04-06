#include <iostream>
#include <set>
using namespace std;

int main ( )
{
    string s;
    cin>>s;

    set<char> distinct(s.begin(),s.end());

    int k=distinct.size();
    if(k%2==0) {
        cout<< "CHAT WITH HER!"<<endl;
    }
    else {
        cout<< "IGNORE HIM!"<<endl;
    }
    return 0;
}


