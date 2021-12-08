import java.util.Scanner;

public class MoneyChange {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int money = input.nextInt();
        System.out.println(moneyChange(money));
    }
    private static int moneyChange(int money){
        if(money >= 10)
            return money/10 + moneyChange(money % 10);
        else if(money >= 5)
            return money/5 + moneyChange(money % 5);
        return money;
    }
}
