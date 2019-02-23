import java.util.Scanner;
import java.math.BigDecimal;

public class Main{

public static void main(String[] args) {

Scanner cin = new Scanner(System.in);

BigDecimal a = cin.nextBigDecimal();
BigDecimal b = cin.nextBigDecimal();
System.out.println(a.multiply(b));
}
}