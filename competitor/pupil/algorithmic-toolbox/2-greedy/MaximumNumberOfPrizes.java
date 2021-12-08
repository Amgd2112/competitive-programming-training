import java.util.*;
public class MaximumNumberOfPrizes {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int ti = input.nextInt();
        int i = getQuadraticNumber(ti);
        System.out.println(i);
        System.out.println(prizes(ti, i));
    }

    private static String prizes(int ti, int i) {
        String[] prize = new String[i];
        int j;
        for(j = 1; j < i; j += 1){
//            System.out.printf("%s ", j);
            prize[j - 1] = Integer.toString(j);
            ti -= j;
        }
        prize[j - 1] = Integer.toString(ti);
        return String.join(" ", prize);
    }

    private static int getQuadraticNumber(double n){
        /*Triangular number
        Rule : ti = i * (i + 1) /2;
        so if ti = n, n = i * (i + 1) / 2, i^2 + i - 2n = 0 in quadratic form*/
        return (int) (- 1 + Math.sqrt(1 + 4 * 2 * n))/2;
    }
}
