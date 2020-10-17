// Given an array A of n integers and an integer s, find a subset of the integers in A such that their product is s
#include <iostream>

using namespace std;

void findSubset(int A[], int n, int s) {
    int i;
    int j;
    cout<<"Subset(s) of the array with the product "<<s<<" is/are: "<<endl;
    for(i = 0; i < n;++i) {
        for(j=i+1;j<n;++j) {
            if(A[i]*A[j]==s) {
                cout<<"{"<<A[i]<<", "<<A[j]<<"}"<<endl;
            }
        }
    }
}




int main () {
    int n;
    int s;
    cout <<"Enter the size of the array: ";
    cin >> n;
    cout << endl;
    int A [n];

    for (int i=0; i<n; ++i) {
        cout << "Enter the value for position #" <<i+1 <<": ";
        cin >> A[i];
    }

    cout << "Enter desired product: ";
    cin >> s;
    cout << endl;

    findSubset(A,n,s);




    



}