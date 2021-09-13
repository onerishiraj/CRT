import java.util.Scanner;

class add_two_number{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter 1st Number: ");
        int a = input.nextInt();
        System.out.println("Enter 2nd Number: ");
        int b = input.nextInt();

        System.out.println("Sum "+ (a+b));
    }
}