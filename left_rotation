#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
int d;  // rotate the array that many steps left
    cin>>d;
    
// To handle cases where d is larger than the size of the array
    d = d % n;

    // Print rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[(i + d) % n] << " ";
    }
    cout << endl;

    

    return 0;
}
