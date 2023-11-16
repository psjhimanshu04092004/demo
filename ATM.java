import java.util.Scanner;

public class ATM {
    // Initialize the account balance with a default value
    private static double accountBalance = 1000.0;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Welcome to the ATM!");
            System.out.println("1. Check Balance");
            System.out.println("2. Deposit Money");
            System.out.println("3. Withdraw Money");
            System.out.println("4. Exit");
            System.out.print("Choose an option: ");

            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    checkBalance();
                    break;
                case 2:
                    depositMoney(scanner);
                    break;
                case 3:
                    withdrawMoney(scanner);
                    break;
                case 4:
                    System.out.println("Thank you for using the ATM. Goodbye!");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }

    private static void checkBalance() {
        System.out.println("Your account balance is: $" + accountBalance);
    }

    private static void depositMoney(Scanner scanner) {
        System.out.print("Enter the amount to deposit: $");
        double depositAmount = scanner.nextDouble();
        if (depositAmount > 0) {
            accountBalance += depositAmount;
            System.out.println("Deposit successful. Your new balance is: $" + accountBalance);
        } else {
            System.out.println("Invalid deposit amount. Please try again.");
        }
    }

    private static void withdrawMoney(Scanner scanner) {
        System.out.print("Enter the amount to withdraw: $");
        double withdrawAmount = scanner.nextDouble();
        if (withdrawAmount > 0 && withdrawAmount <= accountBalance) {
            accountBalance -= withdrawAmount;
            System.out.println("Withdrawal successful. Your new balance is: $" + accountBalance);
        } else {
            System.out.println("Invalid withdrawal amount. Please try again.");
        }
    }
}
