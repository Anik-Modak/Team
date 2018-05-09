#include<bits/stdc++.h>
#define siz 1000
using namespace std;

int info[siz]={0},loc;

void insert(int data)
{
   loc=1;
    while(1){
        if(info[loc]==0){
            info[loc]=data;
            break;
        }
        else if(data<info[loc]) loc=loc*2;
        else if(data>info[loc]) loc=loc*2+1;
        else{
            cout<<"This element is already insert in position: "<<loc<<endl;
            break;
        }
    }
    //cout<<info[loc]<<endl;
}

int main()
{
    int data,n,len,element;
    printf("Enter the number of data: "); cin>>n;
    //90 60 50 95 65 48 98 100 25
    while(n--){
        cin>>data;
        insert(data);
    }
    printf("Enter an element which you insert: "), cin>>element;
    insert(element);

    for(int i=1; i<=loc; i++)
    if(info[i]!=0){
        cout<<i<<" "<<info[i]<<endl;
    }
}
