#include<iostream>

using namespace std;
const int N=1e6+10;
int a[N],S[N];
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        S[i]=a[i]+S[i-1];
    }

    while(m--){
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d\n",S[r]-S[l]+a[l]);
    }
    return 0;
}
