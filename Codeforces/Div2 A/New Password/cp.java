import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Main {

    public static void main(String args[]) throws IOException{

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));


        PrintWriter out = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(in.readLine().trim());

        int n, k;
        n = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());
        char c='a';
        StringBuilder s = new StringBuilder();

        while(n-- != 0){
            if(c-'a' == k){
                c = 'a';
            }
            s.append(c);
            ++c;
        }

        out.println(s);
        
        out.flush();
        out.close();

    }

}