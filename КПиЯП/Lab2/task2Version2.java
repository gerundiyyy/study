import java.util.Scanner;

public class task2Version2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double[] prices = new double[3];
        double maxPrice;

        System.out.println("Найдём магазин, с максимальной ценой!");
        for (int i = 0; i < 3; i++) {
            System.out.println("Введи цену магазина " +(i+1));
            prices[i] = in.nextDouble();
        }
        
        maxPrice = Math.max(prices[0], Math.max(prices[1], prices[2]));
        for (int i = 0; i < 3; i++) {
            if (prices[i]==maxPrice) {
                System.out.println("Максимальная цена продукта в магазине "+ (i+1));
            }
        }
        in.close();
    }
}
