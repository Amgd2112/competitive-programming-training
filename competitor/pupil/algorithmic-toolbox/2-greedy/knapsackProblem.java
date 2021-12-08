import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class knapsackProblem {

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int numberOfItems = input.nextInt();
        int capacity = input.nextInt();
        double[][] items = new double[numberOfItems][2];
        for(int i = 0; i < numberOfItems; i += 1){
            for(int j = 0; j < 2; j += 1)
                items[i][j] = input.nextInt();
        }
        Arrays.sort(items, new Comparator<double[]>() {
            @Override
            public int compare(double[] o1, double[] o2) {
                Double itemIdOne = o1[0] / o1[1];
                Double itemIdTwo = o2[0] / o2[1];
                return itemIdTwo.compareTo(itemIdOne);
            }
        });

        System.out.printf("%.4f \n", knapsack(items, capacity, 0, numberOfItems));
    }

    private static double knapsack(double[][] items, double capacity, int i, int numberOfItems){
        if(i == numberOfItems)
            return 0;

        if(capacity > items[i][1])
            return items[i][0] + knapsack(items, capacity - items[i][1], i + 1, numberOfItems);

        return capacity * (items[i][0] / items[i][1]);
    }
}
