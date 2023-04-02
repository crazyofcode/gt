#include <iostream>
using namespace std;
int main()
{
    int (*p)[1005];
    int* q1=NULL;
    int* q2=NULL;
    int n;
    cin>>n;
    p=new int[n][1005];
    q1=new int[n];
    q2=new int[n];
    int m,w;
    cin>>m>>w;
    for(int i=1;i<=m;i++)
        cin>>*(q1+i)>>*(q2+i);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=w;j++)
        {
            if(j < *(q1+i))
                p[i][j]=p[i][j-1];
            else 
                p[i][j]=max(p[i-1][j],p[i-1][j-*(q1+i)]+*(q2+i));
        }
    cout<<p[m][w]<<endl;
    delete[] p;
    delete[] q1;
    delete[] q2;
}