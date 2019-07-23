#include <iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        n--;

        long long sum = 0;

        // Add sum of all three
        long long cnt = n/3;
        sum += 3*cnt*(cnt+1)/2;

        // Add sum of all five
        cnt = n/5;
        sum += 5*cnt*(cnt+1)/2;

        // Subtract sum which is already calculated
        // which is LCM of 3 and 5 or 15
        cnt = n/15;
        sum -= 15*cnt*(cnt+1)/2;

        cout<<sum<<endl;
    }
    return 0;
}

