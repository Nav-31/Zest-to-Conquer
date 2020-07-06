    #include<iostream>
    #include<assert.h>
    #include<iomanip>
    #include<stdlib.h>
    using namespace std;                    
    int main()
    {
        string p,y;
        int i,h1,h2,m1,m2,s1,s2,m=0,s=0,h=0;

        getline (cin,p);

        h1=(int)p[0]-'0';
        h2=(int)p[1]-'0';
        m1=(int)p[3]-'0';
        m2=(int)p[4]-'0';
        s1=(int)p[6]-'0';
        s2=(int)p[7]-'0';

        h=h1*10+h2;
        m=m1*10+m2;
        s=s1*10+s2;

        if(h<0||h>12)
            exit(1);

        else if(m<0||m>60)
            exit(1);

        else if(s<0||s>60)
            exit(1);



        if(p[8]=='a'||p[8]=='A')
        {
             if(h==12)
             {
                h=00;
             }
        }
        else if(p[8]=='p'||p[8]=='P')
        {
            if(h!=12)
                h=h+12;
        }

        cout<<setw(2)<<setfill('0');
        cout<<h<<":";
        cout<<setw(2)<<setfill('0');
        cout<<m<<":";
        cout<<setw(2)<<setfill('0');
        cout<<s;
        }
