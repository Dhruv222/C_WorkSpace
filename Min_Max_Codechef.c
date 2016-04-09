#include<iostream>

using namespace std;

int main(){
  long long int t, n, min,a;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n;
    for(int j=0;j<n;j++){
      cin>>a;
      if (j==0)
        min = a;
      if (a<min)
        min = a;
    }
    cout<<min*(n-1)<<endl;

  }
  return 0;
}
