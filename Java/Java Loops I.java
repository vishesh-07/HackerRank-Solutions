import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
public class Solution {
    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        int n = scanner.nextInt();
        for(int i=1;i<=10;i++){
            int j=i*n;
            System.out.println(n+" x "+i+" = "+j);
        }
        scanner.close();
    }
}
