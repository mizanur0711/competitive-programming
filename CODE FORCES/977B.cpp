  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
      int n,counter=0,temp=0;
      cin>>n;
      string s,ans;
      cin>>s;
      for(int i=0;i<n-1;i++)
      {
          for(int j=0;j<n-1;j++)
          {
              if(s[i]==s[j] && s[i+1]==s[j+1] )
              {
                  temp++;
              }
          }
          if(temp>counter)
          {
              ans="";
              counter=temp;
              ans=ans+s[i];
              ans=ans+s[i+1];
          }
          temp=0;
      }
      cout<<ans<<endl;

  }
