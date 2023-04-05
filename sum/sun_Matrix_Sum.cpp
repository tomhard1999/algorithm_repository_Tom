#include<iostream>
using namespace std;

int main(){
    int n,m,q;
    
    scanf("%d%d%d",&n,&m,&q);
    int A[n+1][m+1],S[n+1][m+1];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&A[i][j]);
            S[i][j]=S[i-1][j]+S[i][j-1]-S[i-1][j-1]+A[i][j];
        }
    }

    while (q--)
    {
        int x1,y1,x2,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("%d\n",S[x2][y2]-S[x1-1][y2]-S[x2][y1-1]+S[x1-1][y1-1]);
    }
    return 0;

}