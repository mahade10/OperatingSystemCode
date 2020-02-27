#include <bits/stdc++.h>
using namespace std;
void bestFit(int process[],int p,int block[],int b){

    int allot[p];
     memset(allot, -1, sizeof(allot));

    for(int i=0;i<p;i++){
        int bestidx =-1;
        for(int j=0;j<b;j++){
            if(process[i]<=block[j]){
                if(bestidx == -1){
                    bestidx = j;
                }
                else if(block[bestidx]>block[j]){
                    bestidx = j;
                }
            }
        }
        if(bestidx != -1){
            allot[i] = bestidx;
            block[bestidx] = block[bestidx] - process[i];
        }
    }
     cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < p; i++)
    {
        cout << "   " << i+1 << "\t\t" << process[i] << "\t\t";
        if (allot[i] != -1)
            cout << allot[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}
int main()
{
    int p =5,b = 4;
    int process[5] = {100, 500, 200, 300, 600};
     int block[4] = {212, 417, 112, 426};
     bestFit(process,p,block,b);

}
