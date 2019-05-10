// Skillrack challenge 9-May 2019 ( Inverted Triangle With Numbers
//Input - 5
//Output ->
//   1  * 2  * 3  * 4  * 5 
//   - 9  * 8  * 7  * 6 
//   - - 10  * 11  * 12 
//   - - - 14  * 13 
//   - - - - 15 




import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int i,k,j,c1 = 0,c2 =0;
        for(i=0;i<n;i++)
        {
            for(k=0;k<i;k++)
                System.out.print("- ");
            if(i%2==0){
                for(j=c2+1;j<=c2+n-i;j++)
                {
                    c1 = j;
                    System.out.print(j+" ");
                    if(j!=c2+n-i)
                        System.out.print(" * ");
                }
                System.out.print("\n");
            }
            else
            {
                for(j=c1+n-i;j>c1;j--)
                {
                    if(c2<j)
                        c2 = j;
                    System.out.print(j+" ");
                    if(j!=c1+1)
                        System.out.print(" * ");
                }
                System.out.print("\n");
            }
        }
    }
}