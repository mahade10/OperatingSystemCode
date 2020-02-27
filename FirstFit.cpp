#include<bits/stdc++.h>
using namespace std;
void FirstFit(int block[],int process[],int b,int p){
    int allot[p] = {-1};
    for(int i=0;i<p;i++){
        for(int j=0;j<b;j++){
            if(process[i]<=block[j]){
                allot[i] = j;
                block[j] = block[j] - process[i];
                break;
            }
        }
    }
    cout << "Process No.\tProcess Size\tBlock no.\n";
    for(int i=0;i<p;i++){
       cout<<"\t " <<i+1<<"\t"<<process[i]<<"\t\t";
       if(allot[i]!=-1)
       cout<<allot[i]+1<<endl;
       else
        cout<<"not allocated"<<endl;
    }
}
int main()
{
    int b=5,p=4;
    //cout<<"Enter number of block and processes\n";
   // cin>>b>>p;

    int block[b] = {100,500,200,300,600};

   int process[p]={212,417,112,426};
    FirstFit(block,process,b,p);
}
