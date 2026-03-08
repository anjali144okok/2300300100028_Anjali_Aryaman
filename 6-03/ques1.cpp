/*calculate the max sum of k size subarray */
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int max_sum=a[0];{
    
    for(int i=0;i<k;i++){
        int sum=0;
        for(int j=i;j<i+k && j<n;j++){
            sum+=a[j];
        }
        max_sum=max(max_sum,sum);

    }
    cout<<max_sum<<endl;
    return 0;
}
}