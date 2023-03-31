#include<iostream>

using namespace std;

typedef long long LL;
const int N=1e5+10;
int q[N],temp[N];

LL merge_sort1(int q[],int l,int r){
    if(l>=r) return 0;

    int mid=r+l>>1;

    LL res=merge_sort1(q,l,mid)+merge_sort1(q,mid+1,r);

    int k=0,i=l,j=mid+1;
    while ((i<=mid&&j<=r))
    {
        if(q[i]<=q[j]) temp[k++]=q[i++];
        else {
            temp[k++]=q[j++];
            res+=mid-i+1;
        }
    }
    
    while(i<=mid) temp[k++]=q[i++];
    while(j<=r) temp[k++]=q[j++];

    for(int i=l,j=0;i<=r;i++,j++) q[i]=temp[j];

    return res;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&q[i]);
    LL res=merge_sort1(q,0,n-1);
    printf("%d ",res);
    return 0;
}
