import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.math.BigInteger;

public class Main {

    public static void main(String args[]) throws IOException{

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        // Scanner in = new Scanner(System.in);


        PrintWriter out = new PrintWriter(System.out);
        
        BigInteger int1, int2;

        while(in.ready()){
            int1 = new BigInteger(in.readLine());
            int2 = new BigInteger(in.readLine());
            out.println(int1.multiply(int2));
        }
        
        out.flush();
        out.close();

    }

}