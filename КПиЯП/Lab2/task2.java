import java.util.Scanner;



public class task2 {
    public static double maxOfThreeOut ()
    {
        for(int i = 0; i <3;i++)
        {
            double products[i] = in.nextDouble();
        }
       
        if (products.length !=3) 
        {
            System.out.println("Ожидается массив из 3 переменных!");
        }
        return Math.max(products[0],products[1],products[3]);
    }

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
