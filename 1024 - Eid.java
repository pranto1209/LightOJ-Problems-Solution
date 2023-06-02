import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int t = cin.nextInt();
        for(int tc=1; tc<=t; tc++) {
            BigInteger x, ans = BigInteger.valueOf(1);
            int n = cin.nextInt();
            for(int i=0; i<n; i++) {
                x = cin.nextBigInteger();
                ans = ans.multiply(x).divide(ans.gcd(x));
            }
            System.out.println("Case " + tc + ": " + ans);
            System.gc();
        }
    }
}
