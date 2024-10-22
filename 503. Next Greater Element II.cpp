// next Greatest Element 

#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>arr={4,5,2,25};

   vector<int>result(arr.size() ,-1 );

    for(int i=0 ; i<arr.size(); i++){
        for(int j=i +1; j<arr.size(); j++){
            if(arr[i]<=arr[j]){
               result[j]=arr[j];
                break;
            }
            }
        }
for(int i=0 ; i<result.size(); i++){
    cout<<result[i]<<" ";
}


    return 0;
}
