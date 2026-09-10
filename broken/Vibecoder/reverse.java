import java.util.*;
public class reverse {
    public static void main(String[] args) {
        int n , rev = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an integer :");
        n = sc.nextInt();
        while(n != 0){
            int digit = n % 10;
            rev = rev * 10 + digit;
           n = n / 10;  
        }
        System.out.println("Reverse Integer is "+rev);
        sc.close();

    }
}
