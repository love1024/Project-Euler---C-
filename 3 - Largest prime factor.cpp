#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long int n;
        cin>>n;

        // If multiple of 2 reduce it to
        // lowest odd number
        while(n%2 == 0 )
        {
            n = n/2;
        }
        //If only 1 is left than It highest
        //prime factor will be 2
        if(n == 1){
            cout<<"2"<<endl;
            continue;
        }
        int i;
        for(i=3; i <= sqrt(n); i=i+2)
        {
            //If it can divided
            //It is not prime now
            //check its highest divider
            if(n%i == 0){
                n = n/i;
                i=1;
            }
        }
        if(n > 2)
            cout<<n<<endl;
        else
            cout<<i<<endl;

    }
}
