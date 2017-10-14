#include <bits/stdc++.h>
using namespace std;

string line,st,s,ss,sf,word,opr,pn,source,yy,bin,lib;
vector<string>v;
vector<string>op,np,mp,qp,symbol,keyw,id,nd,bd,rp;



int isoperator(string ns)
{
    int x;
    for(x=0;x<mp.size();x++)
    {
        if(ns==mp[x])
        {
            return 1;
        }
    }


    return 0;


}

int ispun(string ns)
{
    int x;

    for(x=0;x<qp.size();x++)
    {
        if(ns==qp[x])
        {
            return 1;
        }
    }


    return 0;
}

int ismatch(string zz)
{
    int w;
    for(w=0;w<np.size();w++)
    {
        if(zz==np[w])
        {
            return 1;
        }
    }

    return 0;
}

int isbuilt(string ww)
{
    int p;
    for(p=0;p<rp.size();p++)
    {
        if(ww==rp[p])
        {
            return 1;
        }
    }

    return 0;

}



int main()
{
    ifstream program,keyword,opt,pt,built;
    program.open("program.txt");
    keyword.open("keyword.txt");
    opt.open("opt.txt");
    pt.open("pt.txt");
    built.open("built.txt");

    freopen("output.txt","w",stdout);

    int i=1,j,k;
    string c=" ";
    string nl="\n";

    while(getline(keyword,word))
    {
        np.push_back(word);
    }
    while(getline(opt,opr))
    {
        mp.push_back(opr);
    }
    qp.push_back(c);
    while(getline(pt,pn))
    {
        qp.push_back(pn);
    }
    while(getline(built,bin))
    {
        rp.push_back(bin);
    }



    while(getline(program,line))
    {
        st=line;
        cout<<st<<endl;






        for(j=0;j<st.length();j++)
        {

            sf=st[j];
            lib="";
            string libr="";


            char tabb[1024];
            strcpy(tabb, st.c_str());

            if(tabb[j]=='#')
            {
               for(int l=0;l<strlen(tabb);l++)
               {
                   if(tabb[l]=='<')
                   {
                       v.push_back(lib);
                       for(int g=l;g<strlen(tabb);g++)
                       {
                           libr=libr+tabb[g];
                       }
                       v.push_back(libr);
                   }
                   else
                   {
                       if(tabb[l]!=' ')
                       {
                          lib=lib+tabb[l];
                       }

                   }
               }

                break;
            }

            if(st[j]!=' ' || st[j]!='\n')
            {

            if(st[j]=='<' && st[j+1]=='<')
            {
                v.push_back(s);
                s="";
                op.push_back("<<");
            }
            else if(st[j]=='>' && st[j+1]=='>')
            {
                v.push_back(s);
                s="";
                op.push_back(">>");
            }
            else if(isoperator(sf))
            {
                v.push_back(s);
                s="";
                ss=st[j];
                op.push_back(ss);
            }
            else if(ispun(sf))
            {
                v.push_back(s);
                s="";
                ss=st[j];
                if(st[j]!=' ')
                {
                    symbol.push_back(ss);
                }


            }
            else
            {
                if(st[j]!=' ' || st[j]!='\n')
                {
                    s=s+st[j];
                }

            }
            }



        }



    }


    for(k=0;k<v.size();k++)
    {

        yy=v[k];
        if(ismatch(yy))
        {
            keyw.push_back(yy);
        }
        else
        {

          source=yy;
          char tab[1024];
          strcpy(tab, source.c_str());
          for(j=0;j<strlen(tab);j++)
          {

            if(!isspace(tab[j]) && !isbuilt(source))
            {
                id.push_back(yy);
                break;
            }
            if(!isspace(tab[j]) && isbuilt(source))
            {
                bd.push_back(yy);
                break;
            }
          }



        }
    }







    cout<<"Keywords"<<endl;
    cout<<"------------------"<<endl;
    for(k=0;k<keyw.size();k++)
    {
        cout<<keyw[k]<<endl;
    }
    cout<<"\nIdentifiers"<<endl;
    cout<<"------------------"<<endl;
    for(k=0;k<id.size();k++)
    {

        cout<<id[k]<<endl;

    }
    cout<<"\n\nOperators"<<endl;
    cout<<"------------------"<<endl;
    for(k=0;k<op.size();k++)
    {
        cout<<op[k]<<endl;
    }
    cout<<"\n\nLibrary"<<endl;
    cout<<"------------------"<<endl;
    for(k=0;k<bd.size();k++)
    {
        cout<<bd[k]<<endl;
    }
    cout<<"\n\nPunctuations"<<endl;
    cout<<"------------------"<<endl;
    for(k=0;k<symbol.size();k++)
    {
        cout<<symbol[k]<<endl;
    }



    return 0;
}

