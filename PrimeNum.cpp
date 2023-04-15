#include <iostream>
using namespace std;
int main(){


int a,b,i;
cin>>a>>b;
for ( a; a <=b; a++)
{
    for (i = 2; i < a; i++)
    {
        if (a%i==0){
            break;//not prime  (terminate the internal loop)
        }
    }
    if (i==a){
        cout<<a<<endl;
    }
    

}
}

