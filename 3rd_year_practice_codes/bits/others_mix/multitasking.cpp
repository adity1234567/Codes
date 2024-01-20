 #include<bits/stdc++.h>
 using namespace std;
 #define int long long
 #define MAX 1000001

 main()
 {
     int one,rep,s,e,it;
     bool conflict=false;

     while((cin>>one>>rep),one||rep)
     {
         bitset<MAX> calendar;
         conflict=false;

         for(int i=0;i<one;i++)
         {
             cin>>s>>e;
             if(!conflict)
             {
                 for(int j=s;j<e;j++)
                 {
                     if(calendar[j])
                     {
                         conflict=true;
                         break;
                     }
                     calendar[j]=1;
                 }
             }
         }



         for(int i=0;i<rep;i++)
         {
             cin>>s>>e>>it;

             if(!conflict)
             {
                 while(s<MAX)
                 {
                     for(int j=s;j<e&&j<MAX;j++)
                     {
                         if(calendar[j])
                         {
                             conflict=true;
                             break;
                         }
                     }
                     s+=it;
                     e+=it;
                 }
             }
         }


		if(conflict)
			cout << "CONFLICT\n";
		else
			cout << "NO CONFLICT\n";
     }
 }
