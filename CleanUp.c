#include<iostream>
#include<vector>

using namespace std;

int main(){
  int t;
  vector<int> a,chef, assistant;
  cin>>t;
  while(t--){
    int n, m,input,temp=0;
    cin>>n>>m;
    a.clear();
    a.resize(n);
    chef.clear();
    assistant.clear();
    for (int i = 0; i <m;i++){
      cin>>input;
      a[input-1] = 1;
    }
    for (int i=0; i<n; i++){
      if(a[i] != 1){
        if(temp == 0){
          chef.push_back(i+1);
          temp=1;
        }
        else{
          assistant.push_back(i+1);
          temp = 0;
        }
      }
    }
    for(int n =0;n<chef.size();n++){
      cout<<chef[n]<<" ";
    }
    cout<<endl;
    for (int n =0;n<assistant.size(); n++){
      cout<<assistant[n]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
