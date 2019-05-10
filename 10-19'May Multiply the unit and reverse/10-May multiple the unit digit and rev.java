import java.util.*;
class Product{
    int rem;
    public int[] Prod(int[] nums,int N)
    {
        for(int i=0;i<N;i++){
            rem = nums[i]%10;
            rem = nums[i]*rem;
            nums[i] = rem;
        }
        return nums;
    }
}

public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int[] nums = new int[N];
        for(int i=0;i<N;i++)
            nums[i] = in.nextInt();
        Product out = new Product();
        int[] n = out.Prod(nums,N);
        
        for(int i=N-1;i>=0;i--)
        {
           System.out.print(n[i]+" ");
        }
	}
}