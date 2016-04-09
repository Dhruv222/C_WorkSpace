#include<iostream>
#include<string>

using namespace std;

int main(){
  string s1,s2;
  int t,i;
  cin>>t;
  while(t--){
    cin>>s1>>s2;
    for (i=0;i<s1.size();i++){
      if (s1[i] != '?' && s2[i] != '?' && (s1[i] != s2[i])){
        cout<<"No"<<endl;
        break;
      }
    }
    if (i == s1.size())
      cout<<"Yes"<<endl;
  }
  return 0;
}
