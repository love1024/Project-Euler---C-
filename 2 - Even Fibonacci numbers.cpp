
#include <iostream>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;

        // Sum found
        long long sum = 0;

        // Next term in series
        long next = 2;

        // Previous term in series
        long prev = 0;

        // While sum does not exceed
        // Calculate next terms and add to sum
        while(next <= n) {
            sum += next;
            long temp = next;
            next = next*4 + prev;
            prev = temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}

