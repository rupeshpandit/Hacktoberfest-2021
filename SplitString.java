import java.util.function.BiFunction;
import java.util.*;
public class MyClass {
    public static BiFunction<String, Integer, String> splitFromBeginning = (s, i) -> s.substring(0, i);
    public static BiFunction<String, Integer, String> splitFromEnding = (s, i) -> s.substring(i);
    public static void main(String args[]) {
      System.out.println(splitFromBeginning.apply("hello world",2));
      System.out.println(splitFromBeginning.apply("ok hello",2));
      System.out.println(splitFromEnding.apply("hacktoberfest2021",2));
      System.out.println(splitFromEnding.apply("github",2));
    }
}
//OUTPUT IS
// he
// ok
// cktoberfest2021
// thub
