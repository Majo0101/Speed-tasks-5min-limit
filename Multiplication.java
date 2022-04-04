package training;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        System.out.println("Enter number:");

        Scanner vstup = new Scanner(System.in);
        int cislo = vstup.nextInt();

        int vystup0;
        int vystup1;
        int vystup2;
        int vystup3;
        int check=0;

        for(int stop = 2; cislo > stop; stop++){

            vystup0 = cislo % stop;

            if (vystup0 == 0){

                vystup1 = cislo / stop;

                for (int count = 2; count < vystup1; count++) {

                    vystup2 = vystup1 % count;

                    if(vystup2 == 0 ){

                        vystup3 = vystup1 / count;
                        System.out.println(stop +" x "+ count +" x "+ vystup3 +" = "+cislo);
                        /*Vypis vsetkych kombinacii okrem nasobenia cislom 1*/
                        check++;
                    }
                }
            }
        }

        if (check==0){
            System.out.println("Somethings went wrong");
        }
    }
}
