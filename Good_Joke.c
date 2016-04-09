#include<iostream>

using namespace std;

int main(){
  int t, n,answer,a;
  cin>>t;
  while(t--){
    cin>>n;
    answer=1;
    cin>>a;
    cin>>a;
    for (int i=2;i<=n;i++){
      answer = answer ^ i;
      cin>>a;
      cin>>a;
    }
    cout<<answer<<endl;
  }
}
