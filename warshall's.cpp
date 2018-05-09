#include<iostream>
using namespace std;
#define f 999
int min(int x,int y){
      if(x>y){
        return y;
      }
      else
      {
          return x;
      }
}

int a[100][100],p[100][100];
int main(){


     int node,edge,i,j,k,c,d,e;
     cin>>node>>edge;
     for(i=0;i<edge;i++){
        cin>>c>>d>>e;
        a[c][d]=e;
        p[c][d]=e;
    }
     for(i=0;i<node;i++)
        {

            for(j=0;j<node;j++)
            {
                if(a[i][j]==0){
                    a[i][j]=f;
                }

            }
        }


    for(k=0;k<node;k++)
    {
        for(i=0;i<node;i++)
        {

            for(j=0;j<node;j++)
            {
                p[i][j]=min(a[i][j],(a[i][k]+a[k][j]));

            }
        }

    for(i=0;i<node;i++)
        {

            for(j=0;j<node;j++)
            {
                a[i][j]=p[i][j];
                }

            }
        }


    for(i=0;i<node;i++){
            for(j=0;j<node;j++)
                {
                //adj[i][j]=A[n][i][j];
                cout<<p[i][j]<<" ";

                }
            cout<<"\n";
    }

     return 0;
}
