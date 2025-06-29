
import java.util.Scanner;

// https://atcoder.jp/contests/abc215/tasks/abc215_b
// AC

public class B_log_2_N {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        int ans = 0;
        while (true) { 
            if(((long)1 << ans) > a)
            {
                System.out.println(ans - 1);
                sc.close();
                return;
            }          
            ans++;  
        }
    }
}