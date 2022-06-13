
 



















#include<bits/stdc++.h>
bool isValidParenthesis(string str)
{
   // Write your code here.
   int n = str.size();
   stack<char> s;
   
   for(int i=0;i<n;i++){
       if(str[i]=='{' || str[i]=='(' || str[i]=='['){
           s.push(str[i]);
       }
       else{
           if(s.empty()){
               return false;
           }
           else if((s.top()=='{' && str[i]=='}') || (s.top()=='(' && str[i]==')') || (s.top()=='[' && str[i]==']')){
               s.pop();
           }
           else{
               return false;
           }
       }
   }
   
   if(s.size()>0){
       return false;
   }else{
       return true;
   }
}
