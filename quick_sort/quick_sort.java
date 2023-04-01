import java.util.Scanner;;
public class quick_sort {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[100010];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        quick_s(arr,0,n-1);
        for(int i=0;i<n;i++){
            System.out.printf("%d ",arr[i]);
        }
    }
    public static void quick_s(int q[],int l ,int r) {
        int i=l-1;
        int j=r+1;
        int x=q[l+r>>1];
        if(l>=r) return;
        while(i<j){
            do i++;while(x>q[i]);
            do j--;while(x<q[j]);
            if(i<j){
                int t=q[i];
                q[i]=q[j];
                q[j]=t;
            }
            quick_s(q, l, j);
            quick_s(q, j+1, r);
        }
    }
}
