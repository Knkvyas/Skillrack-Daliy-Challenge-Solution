import java.util.*;
public class Reverse_String {
    static int count=1;
    static void reverse(String l)
    {
        if(count>l.length())
        {
            for(int i=0;i<count-l.length();i++){
                System.out.print("*");
                System.out.print(" ");
            }
            for(int i=l.length();i>0;i--){
                System.out.print(l.substring(i-1,i));
                System.out.print(" ");
            }
        }
        else if(count<=l.length()){
            for(int i=l.length();i>0;i--){
                System.out.print(l.substring(i-1,i));
                System.out.print(" ");
            }
            count++;
        }
        System.out.print("\n");
    }
    public static void main(String[] args) {
		String k;
		Scanner input = new Scanner(System.in);
		k=input.next();
		int t=1;
		int P=0;
		int length = k.length();
		int i=0;
		while(i+t<=length){
		    String l = k.substring(i,i+t);
		    reverse(l);
		    i=i+t;
		    t++;
		}
		if(i<length){
		    String q = k.substring(i,length);
		    reverse(q);
		}

	}
}