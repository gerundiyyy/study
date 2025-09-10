import java.util.Scanner;

public class task1 {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.println("Input x: \n");
        double x = in.nextDouble();
        double y =  x * x + 4 * x - 6;
         
        String message = (x == 6)? "No solution": "Solution:";
        System.out.println(message);
        if (message =="Solution:")
        {
            System.out.println("Вычисленное значение y: " + y); 
        }
      
        in.close();
    }
}
