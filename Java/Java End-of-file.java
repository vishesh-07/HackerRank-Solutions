import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ab=sc.nextLine();
        int i=0;
        do
        {
          System.out.println(i+1 + " " + ab);
          if(sc.hasNextLine())
          ab=sc.nextLine();
          else
          ab=null;
          i=i+1;
        }while(ab!=null);
  }
}
