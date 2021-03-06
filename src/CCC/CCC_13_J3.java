package CCC;
import java.io.*;
import java.util.*;
/*
 * CCC '13 J3 - From 1987 to 2013
 * Carson Tang
 */
public class CCC_13_J3 {
    public static void main(String[] args) throws IOException {
        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        String s = sc.readLine();
        s = Integer.toString(Integer.parseInt(s) + 1);
        while (!distinct(s)) {
            s = Integer.toString(Integer.parseInt(s) + 1);
        }
        System.out.println(s);
    }
    public static boolean distinct(String s) {
        String f ="";
        for(int i = 0; i < s.length(); i++) {
            if(f.contains(Character.toString(s.charAt(i)))){
                return false;
            } else {
                f+=s.charAt(i);
            }
        }
        return true;
    }
}