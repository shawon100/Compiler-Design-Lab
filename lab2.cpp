#include <bits/stdc++.h>
using namespace std;
int main()
{
      long long int j,k,l,n,m,valid=0;
      string s;
      while(cin>>s)
      {
      valid=0;
      l=s.length()-1;
      for(j=1;j<s.length();j++)
      {
            if(s[0]>='a' && s[0]<='z' ||s[0]>='A' && s[0]<='Z'|| s[0]>='0' && s[0]<='9' ||s[0]=='(')
            {
                   if(s[j]=='+' ||s[j]=='-'||s[j]=='*'||s[j]=='/'||s[j]=='='||s[j]=='>'||s[j]=='<'||s[j]=='^')
                   {
                        if((s[j-1]>='a' && s[j-1]<='z'||s[j-1]>='A' && s[j-1]<='Z' || s[j-1]>='0' && s[j-1]<='9')&&(s[j+1]>='a' && s[j+1]<='z' ||s[j+1]>='A' && s[j+1]<='Z'|| s[j+1]>='1' && s[j+1]<='9'))
                        {


                             valid=1;
                        }

                        else
                        {
                            if(s[0]=='(')
                            {
                                 if(s[j-1]==')')
                                 {

                                     valid=1;
                                 }
                            }
                            else
                            {
                                valid=0;
                            }

                        }
                   }
                   else if(s[j]=='(' )
                   {
                         if(s[j-1]=='+' ||s[j-1]=='-' ||s[j-1]=='*'||s[j-1]=='/' ||s[j-1]=='^')
                         {
                              valid=1;
                         }
                         else
                         {
                             valid=0;
                         }
                        if((s[j+1]>='a' && s[j+1]<='z')||s[j+1]>='A' && s[j+1]<='Z'||(s[j+1]>='0' && s[j+1]<='9'))
                         {
                              valid=1;
                         }
                         else
                         {
                              valid=0;
                         }
                   }
                 else if(s[j]==')' )
                   {
                         if(s[j+1]=='+' ||s[j+1]=='-' ||s[j+1]=='*'||s[j+1]=='/' ||s[j+1]=='^' ||s[j+1]=='/0')
                         {
                             if(s[j+2]!='+' ||s[j+2]!='-' ||s[j+2]!='*'||s[j+2]!='/' ||s[j+2]!='^' ||s[j+2]!='/0')
                             {
                                 valid=1;
                             }

                         }
                         else
                         {
                             valid=0;
                         }
                        if((s[j-1]>='a' && s[j-1]<='z')||s[j-1]>='A' && s[j-1]<='Z'||(s[j-1]>='0' && s[j-1]<='9'))
                         {
                              valid=1;
                         }
                         else
                         {
                              valid=0;
                         }
                   }
                   if(s[l]=='+' ||s[l]=='-' ||s[l]=='*'||s[l]=='/' ||s[l]=='^' ||s[l]=='/0')
                   {
                        valid=0;
                   }


            }
      }
      if(valid==1)
      {
          cout<<"Valid"<<endl;
      }
      else
      {
          cout<<"Invalid"<<endl;
      }
      }

      return 0;
}
