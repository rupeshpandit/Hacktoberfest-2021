import java.util.function.Function;
import java.util.*;
public class FindAsciiSum {
    public static Function<String, Integer> findAsciiSum = (s) -> {
        int sum = 0;
        for(int i=0;i<s.length();i++){
            sum += s.charAt(i);
        }
        return sum;
    };
    public static void main(String args[]) {
      System.out.println(findAsciiSum.apply("hello world"));
      System.out.println(findAsciiSum.apply("ok hello"));
      System.out.println(findAsciiSum.apply("hacktoberfest2021"));
      System.out.println(findAsciiSum.apply("github"));
    }
}
//OUTPUT IS
// 1116
// 782
// 1578
// 643
