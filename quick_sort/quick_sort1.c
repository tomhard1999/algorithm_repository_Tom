#include<stdio.h>
const int N=1e6+10;

int n;
int q[N];

void quick_sort(int q[],int l,int r){
    if(l>=r) return ;//判定边界

    int x=q[l],i=l-1,j=r+1;
    while(i<j){
        do i++;while(q[i]<x);
        do j--;while(q[j]>x);
        if(i<j){
            int t=q[i];
            q[i]=q[j];
            q[j]=t;
        }
    }
    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&q[i]);

    quick_sort(q,0,n-1);

    for(int i=0;i<n;i++) printf("%d ",q[i]);
    return 0;
}