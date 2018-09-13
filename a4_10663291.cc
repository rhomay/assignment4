#include <iostream>

using namespace std;
int GCD(int r,int q){

if(q!=0)
    return GCD(q,r%q);
    else
    return r;

}
int main()
{
    int r,q;
    cout<<"Enter a number"<<endl;
   cin>>r;
   cout<<"Enter another number"<<endl;
   cin>>q;

    cout << r<<" and "<<q<<" has a GCD "<<GCD(r,q) << endl;
    return 0;
}
