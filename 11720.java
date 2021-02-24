import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        int cnt, sum = 0;
        String num; 
        Scanner sc = new Scanner(System.in);
        cnt = sc.nextInt();
        num = sc.next(); 
        
        for(int i = 0; i < cnt; i++) {
            sum += Integer.parseInt(num.substring(i, i + 1));
        }
        System.out.println(sum); 
    }
}
