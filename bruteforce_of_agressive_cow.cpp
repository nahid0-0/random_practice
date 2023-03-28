#include<iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll        long long
#define fl(s, e)      for(int i=s; i<e; ++i)         
#define vecint   vector< int > 
#define intmeme(s, e, val) fl(s, e+1){arr[i]=val;}
#define arrin(string, n)   fl(0, n){ cin>>string[i];}
#define arrout(string, n)  fl(0, n){cout<<string[i]<<" ";} cout<<endl;
#define bug   cout<<"bug"<<endl;
#define dbg(x) cout << "debug: " << #x << ": " << (x) <<endl;
#define CY  cout<<"YES"<<endl;
#define CN cout<<"NO"<<endl;

void test(){
        int n, c; cin>>n>>c;
        int maxval;
        int arr[n];
        arrin(arr, n);
        sort(arr, arr+n);
        int arr_min=arr[0];
        int arr_max=arr[n-1];
        maxval=(arr_max-arr_min)/(c-1);
        while(maxval>=1){
                int count=1;
                int point=arr[0]+maxval;

                for(int i=1; i<n; i++){
                        if(arr[i]>=point){
                                count++;
                                point =arr[i]+maxval;
                        }
                }
                if(count>=c){
                        cout<<maxval<<endl;
                        return;
                }
                else --maxval;
        }

        
}
int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #endif
        int t;
        cin>>t;
        while(t--){
                test();
        }
     
        return 0;
}

