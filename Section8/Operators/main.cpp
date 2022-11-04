#include <iostream>
#include<math.h>
using namespace std;

int main(){
    cout << "Please enter a floating point value:";
    double n;
    cin >> n;
    cout << "n == " << n 
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         <<"\nn squared == " << n*n
         <<"\nhalf of n == " << n/2
         <<"\nsquare root of n == " <<sqrt(n)
         <<'\n';

    cout << "Please enter a integer point value:";
    int k;
    cin >> k;
    cout << "k == " << k 
         << "\nk+1 == " << k+1
         << "\nthree times k == " << 3*k
         << "\ntwice k == " << k+k
         <<"\nk squared == " << k*k
         <<"\nhalf of k == " << k/2
         <<"\nremainder of k == " << k%2
         <<"\nsquare root of k == " <<sqrt(k)
         <<'\n';
    return 0;
}