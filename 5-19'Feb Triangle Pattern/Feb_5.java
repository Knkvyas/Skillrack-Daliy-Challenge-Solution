import java.util.Scanner;
public class Feb_5 {
    public static void main(String args[]) {
        int N,X,i,j=1,count=1;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter N:");
        N = in.nextInt();
        System.out.print("Enter X:");
        X = in.nextInt();
        for(i=1;i<=N;i++){
            count=i;
            while(count>0){
                if(j%X!=0){
                    System.out.print(" "+j+" ");
                }
                else 
                    System.out.print(" "+'*'+" ");
                j++;
                count--;
            }
            System.out.print("\n");
        }
    }
}
