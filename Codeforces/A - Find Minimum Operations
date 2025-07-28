import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
 
// Solved in 2024
 
 
 
public class Tests {
 
    static void sorts(long arr[], long index[]) {
        int n = arr.length;
 
        for (int i = 0; i < n - 1; i++) {
 
            int min_idx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
 
            long temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
 
            long tempindex = index[min_idx];
            index[min_idx] = index[i];
            index[i] = tempindex;
        }
    }
    
    
   static long  counter (long n ,long k ) {
          int  num = 0 ; 
            
            if ( k == 1 ) { 
                return n;
                }
            
            
            
            
            while ( n >= k ) { 
                 num += n%k ; 
                 n = n/k;
                }
            return num +n ;
            
            
    }
    
    
    
 
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int t = scan.nextInt();
 
        
        while ( t-- > 0 ) {
            long n = scan.nextLong();
            long k = scan.nextLong();
            
            long num = counter(n, k);
            System.out.println(num);
            
        }
        
        
        
        
        
        
        
        
    }
}
