import java.util.*;
public class fib {
    public static void main(String[] args) {
        int n, fib = 0 ,last = 0,current = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value of n");
        n = sc.nextInt();
        System.out.println("Fibbonacci Series................................");
        System.out.println(""+last);
         System.out.println(""+current);
        while(fib<n){
            fib = last + current;
            last = current;
            current = fib;
            System.out.println(""+current);
        }
        sc.close();
    }
}
