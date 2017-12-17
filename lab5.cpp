#include <bits/stdc++.h>
using namespace std;

long long int i,j,k,l,n,m=0,t;
string s[100],st,str="";
char nt,ft;
vector<string>ss;
vector<char>sy;

long long int firstfollow(int v,char ch)
{
    int fm=0;
    while(v<=n)
     {
         st=s[v];

         if(st[0]==ch)
         {
             cout<<"Get"<<st[0]<<endl;
                  ft=st[0];
         for(j=0;j<st.length();j++)
         {
             if(st[j]=='=')
             {
                 l=j;
                 break;
             }

         }
         for(j=l+1;j<st.length();j++)
         {
              str="";
              if((st[j]=='+' || st[j]=='*' ||st[j]=='/' ||st[j]=='-' || st[j]=='(') || (st[j]>='a' && st[j]<='z'))
              {
                  m=1;
                  str=str+st[j];
                  //cout<<str<<endl;
                  break;
              }
              else
              {
                  m=0;
                  nt=st[j];
                  //cout<<"Nt"<<nt<<endl;
                  break;

              }
         }
         if(m==1)
         {

             ss.push_back(str);
         }
         else
         {
               i=i+1;
               if(i>n)
               {
                   break;
               }
               firstfollow(i,nt);
         }
     }
     else
     {
         i=i+1;
          if(i>n)
         {
                   break;
         }
         firstfollow(i,nt);
     }

     v++;
}
}



int main()
{
    long long int fl=0;
     cin>>n;
     for(i=1;i<=n;i++)
     {
         cin>>s[i];
     }

      i=1;
      st=s[1];
      nt=st[0];
      //cout<<nt<<endl;
      for(t=1;t<=n;t++)
      {
                st=s[t];
                nt=st[0];
                 ft=st[0];
                 for(k=0;k<sy.size();k++)
                 {
                     if(ft==sy[k])
                     {
                            fl=1;
                             break;
                     }
                 }
                 if(fl==0)
                 {
                     sy.push_back(ft);
                     firstfollow(t,nt);
                 }


      }


      for(i=0;i<ss.size();i++)
      {
          //cout<<sy[i]<<"=";
          cout<<ss[i]<<endl;
      }

      return 0;


}

