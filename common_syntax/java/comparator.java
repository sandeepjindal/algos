import java.lang.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
        /****Don't alter the code below*****/
        Scanner in = new Scanner(System.in);
        ArrayList<pair> arr = new ArrayList<pair>();
        int n = in.nextInt();
        in.nextLine();
        for(int i = 0;i<n;i++)
        {
            int a = in.nextInt();
            int b = in.nextInt();
            arr.add(new pair(a,b));
            in.nextLine();
        }
        in.close();
        Comparator<pair> byRanking = (pair p1, pair p2) -> {
                if(p1.second == p2.second){
                return Integer.compare(p2.first, p1.first);
                } else{
                    return Integer.compare(p2.second, p1.second);
                }
        };     
        Collections.sort(arr,byRanking);
        for(int i=0;i<n;i++)
        {
            System.out.println(arr.get(i).first + " " + arr.get(i).second);
        }
        /*********************************************************************/
        
    }
}
//your code goes here
class pair{
    int first;
    int second;
    pair(int a, int b){
        first = a;
        second = b;
    }
   // PairSort.sorting(List<pair> arr);
   }
