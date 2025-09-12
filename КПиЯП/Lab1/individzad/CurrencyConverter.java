import java.util.Scanner;

public class CurrencyConverter {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        System.out.print("Введите цену товара в рублях: ");
        double priceInRubles = in.nextDouble();
        
        // Курсы валют (условные значения)
        double usdRate = 0.011; // 1 RUB = 0.011 USD
        double eurRate = 0.010; // 1 RUB = 0.010 EUR
        
        double priceInUSD = priceInRubles * usdRate;
        double priceInEUR = priceInRubles * eurRate;
        
        System.out.println("Цена в рублях: " + priceInRubles + " RUB");
        System.out.println("Цена в долларах США: " + String.format("%.2f", priceInUSD) + " USD");
        System.out.println("Цена в евро: " + String.format("%.2f", priceInEUR) + " EUR");
        
        in.close();
    }
}