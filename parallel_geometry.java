import java.util.*;
import java.io.*;

public class Main {
  public static void main(String args[]) throws IOException {
    
    //write your code here
   Scanner sc= new Scanner(System.in);
   int t;
   long[] a= new long[12];
   t=sc.nextInt();
   for(int i=0;i<t;i++)
   {
     for(int j=0;j<12;j++)
     {
     a[j]=sc.nextInt();
     }
     Arrays.sort(a);
     if(a[0]==a[3] &&a[4]==a[7] &&a[8]==a[11])
     {
       System.out.println("yes");
     }
     else
     {
       System.out.println("no");
     }
   }
}
}
