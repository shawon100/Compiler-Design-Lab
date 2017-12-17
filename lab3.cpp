#include <bits/stdc++.h>
using namespace std;

int isbraces(char cc)
{
     if(cc=='{' || cc=='}')
    {
             return 1;
    }

        return 0;
}



int main()
{
     long long int i,j,k,l,m,kk;
     int fvalid=0,lvalid=0,jvalid=0,qvalid=0,forvalid=0,lfvalid=0,semivalid=0;
     string s,st,sq="",sf,sg="";
     char ct;
     vector<string>v,w;
     ifstream program,ifc,forc;
     ifc.open("ifelse.txt");
      forc.open("for.txt");

     freopen("output3.txt","w",stdout);

     cout<<"........................"<<endl;
     cout<<"If Else Validation"<<endl;
     cout<<"........................"<<endl;

     while(getline(ifc,s))
     {

            for(k=0;k<s.length();k++)
            {
                 if(!isspace(s[k]) )
                 {
                       if(!isbraces(s[k]) )
                      {
                            sq=sq+s[k];
                      }
                 }








            }

             v.push_back(sq);
             sq="";

     }

      while(getline(forc,sf))
     {

            for(k=0;k<sf.length();k++)
            {
                 if(!isspace(sf[k]) )
                 {
                       if(!isbraces(sf[k]) )
                      {
                            sg=sg+sf[k];
                      }
                 }








            }

             w.push_back(sg);
             sg="";

     }

     for(i=0;i<v.size();i++)
     {
           cout<<v[i]<<endl;
     }

     for(i=0;i<v.size();i++)
     {
          st=v[i];
          for(j=0;j<st.length();j++)
          {
               if(i==0)
               {
                   if(st[j]=='i' && st[j+1]=='f' && st[j+2]=='(' && ((st[j+3]>='a' && st[j+3]<='z')||(st[j+3]>='0' && st[j+3]<='9')) )
                   {
                        fvalid=1;
                   }
               }


               if(fvalid==1 && i==0 && j==st.length()-1)
               {
                    if(st[j]==')')
                    {
                        lvalid=1;
                    }


               }
          }


          if(i!=0 && fvalid==1 )
          {
            for(j=0;j<st.length();j++)
            {
                  if(j==0 && st[j]=='e' )
                  {
                    qvalid=1;

                     if(st[j+1]=='l' && st[j+2]=='s' && st[j+3]=='e' )
                     {
                          jvalid=1;
                     }
                     else
                     {
                          jvalid=0;
                     }


                  }
                  else
                  {
                      qvalid=0;
                  }
              }


          }



     }

    if(qvalid==1)
    {
         if(jvalid==1)
         {
              lvalid=1;
         }
         else
         {
             lvalid=0;
         }
    }
     if(fvalid==1 && lvalid==1)
     {
          cout<<"if-else block is Valid"<<endl;
     }

     else
     {
          cout<<"if-else block is Invalid"<<endl;
     }
     cout<<endl;
     cout<<"........................"<<endl;
     cout<<"For Loop Validation"<<endl;
     cout<<"........................"<<endl;


     for(l=0;l<w.size();l++)
     {
           cout<<w[l]<<endl;
     }


     for(l=0;l<w.size();l++)
     {
          st=w[l];
          jvalid=0;
          for(j=0;j<st.length();j++)
          {
               if(l==0)
               {
                   if(st[j]=='f' && st[j+1]=='o' && st[j+2]=='r' && st[j+3] =='(' && st[j+4]>='a' && st[j+4]<='z')
                   {
                        kk=j+4;
                        while(1)
                        {
                            if((st[kk+1]>='a' && st[kk+1]<='z'))
                            {
                                 kk++;

                                 if(st[kk]=='=')
                                 {
                                     //cout<<st[kk]<<kk<<endl;
                                     break;
                                 }

                                 //cout<<st[kk]<<endl;
                            }
                            else
                            {
                                break;
                            }

                        }
                        if(st[kk]=='=' || st[kk+1]=='=')
                        {
                            forvalid=1;

                        }


                   }
               }
               if(forvalid==1 && l==0 && j==st.length()-1)
               {
                    if(st[j]==')')
                    {
                        lfvalid=1;
                    }


               }

               if((st[j]>='0' && st[j]<='9') && st[j+1]==';')
               {
                   semivalid++;
               }
               if((st[j]>='a' && st[j]<='z') && st[j+1]==';')
               {
                   semivalid++;
               }
          }
     }
     //cout<<semivalid<<endl;
     if(forvalid==1 && lfvalid==1 && semivalid==2)
     {
          cout<<"For loop is valid"<<endl;
     }
     else
     {
         cout<<"For loop is not invalid"<<endl;
     }

     return 0;



}
