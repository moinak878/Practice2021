#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while (t--)
    {
        //finding the factors 
        ll n,i,count,max_count,m,pr_fact;
        cin>>n;
        max_count=0;
        m = n;
        for (i = 2; i * i <=n ; i++)
        {
                count=0;
                while (n%i==0)
                {
                    n/=i;
                    count++;
                }
                if (count>max_count)
                {
                    max_count=count;
                    pr_fact = i;
                }

        }
        if (n>1)
        {
           if (1>max_count)
                {
                    max_count=1;
                    pr_fact=n;
                }
        }
            //printing the ans 
            long long divide = 1;
            cout << max_count << endl;
            for (i = 1; i < max_count; i++)
            {
               cout << pr_fact << " ";
               divide *= pr_fact;
            }
            cout << m / divide << endl;
    
    }
    return 0;
}