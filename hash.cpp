#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> hash;

    hash["shivam"] = 1;
    hash["programming"] = 2;
    hash["sharma"] = 3;

    cout<<"The value of shivam in the hashtable is "<<hash["c++"];

    for(auto j=hash.begin();j!=hash.end();j++)
    {
        cout<<"The key will be "<<j->first<<"The value in the key will be "<<j->second<<endl;
    }
}