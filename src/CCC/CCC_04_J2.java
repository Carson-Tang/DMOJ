package CCC;
import java.io.*;
import java.util.*;
/*
 * CCC '04 J2 - Terms of Office
 * Carson Tang
 */
public class CCC_04_J2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int min = sc.nextInt();
        int max = sc.nextInt();
        int diff = max-min;
        for(int i = 0 ;i <= diff; i++) {
            if(i%2==0) {
                if(i%3==0) {
                    if(i%4==0) {
                        if(i%5==0) {
                            System.out.println("All positions change in year " + (i+min));
                        }
                    }
                }
            }
        }
    }
}