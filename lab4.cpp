#include<bits/stdc++.h>
using namespace std;
int main()
{
       long long int i,j,k,l,n,m;
       string s;
       string st="";
       vector<string>t;
       vector<string>nt;

       while(1)
       {

           t.clear();
           nt.clear();
           st="";

            cin>>s;

            if(s=="stop")
            {
                 break;
            }


            for(j=0;j<s.length();j++)
            {
                  if(j==0)
                  {

                  while(s[j]!='=')
                  {
                      st=st+s[j];
                      j++;

                  }
                   nt.push_back(st);
                   st="";
                  }

                  else
                  {
                         if((s[j]>='A' && s[j]<='Z'))
                         {
                               st=st+s[j];
                         }
                         else
                         {
                                 nt.push_back(st);
                                 st="";

                                  if((s[j]=='+' || s[j]=='-' || s[j]=='*' || s[j]=='/') || (s[j]>='a' && s[j]<='z') )
                                  {

                                      while(1)
                                      {
                                           if((s[j]=='+' || s[j]=='-' || s[j]=='*' || s[j]=='/') || (s[j]>='a' && s[j]<='z'))
                                           {
                                                st=st+s[j];
                                                j++;
                                           }
                                           else
                                           {
                                                t.push_back(st);
                                                st="";
                                                j--;
                                                break;
                                           }

                                      }

                                  }





                         }
                  }




            }

            cout<<"Non Terminal"<<endl;
            for(k=0;k<nt.size();k++)
            {
                cout<<nt[k]<<endl;
            }
            cout<<"Terminal"<<endl;
            for(k=0;k<t.size();k++)
            {
                cout<<t[k]<<endl;
            }
       }

       return 0;
}
