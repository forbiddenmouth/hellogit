#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
using namespace std;
bool isprime(int x)
{
    for (int i=2;i<=int(sqrt(x));i++) 
    if (!(x%i)) return false;
    return true;
}
int main(int argc,char* argv[])
{
	if (argc==1)
	{
		cout<<"Usage:prim [numbers]"<<endl;
		return 0;
	}
    for (int i=1;i<argc;i++) 
    {
        string s=argv[i];
        stringstream ss(s);
        int n;
        if (ss>>n) 
        { 
    	    if (isprime(n)) cout<<"Yes"<<endl;else cout<<"No"<<endl;
        }
        else cout<<"Wrong argument"<<endl<<"Usage:prim [numbers]"<<endl;;
    }  
    return 0;
}
