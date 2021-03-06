 
#include <bits/stdc++.h>
using namespace std;
 

void linearCongruentialMethod( int Xo, int m, int a, int c,vector<int>& randomNums,int noOfRandomNums)
{
 
    // Initialize the seed state
    randomNums[0] = Xo;
 
    // Traverse to generate required
    // numbers of random numbers
    for (int i = 1; i < noOfRandomNums; i++) {
        // Follow the linear congruential method
        randomNums[i]
            = ((randomNums[i - 1] * a) + c) % m;
    }
}
 
// Driver Code
int main()
{
    int Xo ; // Seed value
    int m = 2147483648; // Modulus parameter
    int a = 1103515245; // Multiplier term
    int c = 12345; // Increment term
 
    // Number of Random numbers
    // to be generated
    int noOfRandomNums;
    cout <<"How many random numbers Do You want? Enter Here = ";
    cin >>noOfRandomNums;
    
    cout <<"Enter initial value Here = ";
	cin >>Xo; 
 
    // To store random numbers
    vector<int> randomNums(
        noOfRandomNums);
 
    // Function Call
    linearCongruentialMethod( Xo, m, a, c,randomNums, noOfRandomNums);
 
    // Print the generated random numbers
    for (int i = 0; i < noOfRandomNums; i++) {
        cout << "\t\t"<< i+1 <<". " <<randomNums[i]<<"\n" << " ";
    }
 
    return 0;
}
