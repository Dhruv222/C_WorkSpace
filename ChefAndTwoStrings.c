#include<iostream>
#include<string>

using namespace std;

int main(){
  string s1,s2;
  int t, difference,questions;
  cin>>t;
  while(t--){
    cin>>s1>>s2;
    difference =0;
    questions = 0;
    for (int i=0;i<s1.size();i++){
      if (s1[i]== '?' || s2[i]=='?')
        questions++;
      else if(s1[i] != s2[i])
        difference++;
    }
    cout<<difference<<" "<<difference+questions<<endl;
  }
  return 0;
}
