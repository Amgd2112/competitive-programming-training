import java.util.Scanner;

public class CarFueling {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int distance = input.nextInt();
        int move = input.nextInt();
        int numberOfRefills = input.nextInt() + 2;
        int[] refills = new int[numberOfRefills];

        int i;
        for(i = 1; i < numberOfRefills - 1; i += 1)
            refills[i] = input.nextInt();
        refills[i] = distance;

        System.out.println(minimumNumberOfRefills(move, 0, 1, refills, numberOfRefills, 0));
    }

    private static int minimumNumberOfRefills(int move, int stop1, int stop2, int[] refills, int numberOfRefills, int result){
        if(stop2 == numberOfRefills)
            return result;

        if(refills[stop2] - refills[stop2 - 1] > move)
            return -1;

        if(move >= refills[stop2] - refills[stop1])
            return minimumNumberOfRefills(move, stop1, stop2 + 1, refills, numberOfRefills, result);

        return minimumNumberOfRefills(move, stop2 - 1, stop2 + 1, refills, numberOfRefills, result + 1);
    }
}
