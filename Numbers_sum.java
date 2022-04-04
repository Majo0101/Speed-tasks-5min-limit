package training;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        System.out.println("Enter number");

        Scanner vstup = new Scanner(System.in);
        int cislo = vstup.nextInt();

        int check = cislo % 3;

        if (check == 0){

            int vystup = cislo / 3;
            System.out.println((vystup - 1) + " + " + vystup + " + " + (vystup + 1) + " = " + cislo );

        }else{

            System.out.println("Somethings went wrong");
        }
    }
}
