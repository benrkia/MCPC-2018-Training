import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Map;
import java.util.HashMap;
import java.util.Arrays;

public class Main {

    public static void main(String args[]) throws IOException{

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        
        
        int n, max, count;
        String s[], frosh;
        Map<String, Integer> map = new HashMap<String, Integer>();
        while((n = Integer.parseInt(in.readLine())) != 0){
            map.clear();
            
            while(n-- != 0){
                s = in.readLine().split(" ");
                Arrays.sort(s);
                frosh = String.join("", s);
                map.put(frosh, map.containsKey(frosh) ? map.get(frosh)+1 : 1);
            }

            max = 1;
            count = 0;
            for(Map.Entry<String, Integer> obj : map.entrySet()){
                if(obj.getValue() > max){
                    max = obj.getValue();
                    count = obj.getValue();
                }else if (obj.getValue() == max){
                    count += obj.getValue();
                }
            }

            out.println(count);

        }

        
        out.flush();
        out.close();

    }

}