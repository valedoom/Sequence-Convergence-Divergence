#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

    //given two arrays a and b
    //determines if sequence converges or diverges.
    //compute limit of 10000 values(n)
    //create table: n,an,bn,an/ab
    //my conjecture is an/ab = (sqrt2)-1
    
int main() {
    
    int N;
    cout << "Enter the number of terms to consider -->";
    cin >> N;
   
    long long array_a[N];
    long long array_b[N];//want to male sure that it has this type of data
    
    array_a[0] = 1;
    array_b[0] = 1;
    
    for (long k=1; k<N; k++){ //will build our desired sequence
        
        array_a[k] = array_b[k-1];
        array_b[k] = array_a[k-1] + 2 * array_b[k-1];
    }
    
    cout << "k" << "\t" << "array_a[k]" << "\t" << "array_b[k]" << "\t" << "array_a[k]/array_b[k]" << endl;
    
    for (long long k=1; k<N; k++){
        cout << k << "\t" << array_a[k] << "\t\t" << array_b[k] << fixed << setprecision(12) << "\t\t" << (double(array_a[k]))/(double(array_b[k])) << endl;
    }
    cout <<"_______________________________________________________________________________\n"<< endl;
    cout << "x-value" << "\t\t" << "y-value"<< endl;;
    //what does a limit that doesnt exist look like? lloking at a limit as vairiable goes to infinity of sin(k)
    for (long x=1; x<=100; x++){ //based on an x, y plane.
        double y = sin(double(x));
        cout << x <<"\t\t" << y << endl; //going to print a table of sin of k
    }
    return 0;
  
}

    

