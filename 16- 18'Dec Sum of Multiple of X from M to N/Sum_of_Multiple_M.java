import java.util.Scanner;
public class Sum_of_Multiple_M {
    public static void main(String args[]) {
        int M,N,X,i,sum=0;
        Scanner in = new Scanner(System.in);
        M = in.nextInt();
        N= in.nextInt();
        X = in.nextInt();
        if((M>=1 && M<=N) && (N>=1 && N<=1000)){
            for(i=M;i<=N;i++){
                if(i%X==0){
                    sum+=i;
                }
            }
            if(sum!=0){
                System.out.println("Sum = "+sum);
            }
            else{
                System.out.println("-1");
            }
        }
        return;
    }
}
