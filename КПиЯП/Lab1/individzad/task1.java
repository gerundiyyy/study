import java.util.Scanner;

public class task1 {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.println("Input distance in kilometers: \n");
        double distkm = in.nextDouble();
        System.out.println("Distance in km "+ distkm);

        double distsazhen = distkm * 469;
        System.out.println("Distance in sazhen "+ distsazhen);

        double distvershok= distkm * 22.490;
        System.out.println("Distance in vershok "+ distvershok);

        in.close();
    }
}
