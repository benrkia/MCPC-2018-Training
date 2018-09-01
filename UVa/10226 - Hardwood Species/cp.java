import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Map;
import java.util.TreeMap;

public class Main {

    public static void main(String args[]) throws IOException{

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        
        
        int t = Integer.parseInt(in.readLine());
        String s;
        TreeMap<String, Integer> trees = new TreeMap<String, Integer>();
        in.readLine();
        while(t--!=0){
            double count = 0;
            trees.clear();
            while((s=in.readLine())!=null && !s.equals("")){
                ++count;
                trees.put(s, !trees.containsKey(s) ? 1 : trees.get(s)+1);
            }

            count /= 100;

            for(Map.Entry<String, Integer> obj : trees.entrySet()){
                out.printf("%s %.4f\n", obj.getKey(), obj.getValue()/count);
            }

            if(t!=0)
                out.println();
        }
        
        out.flush();
        out.close();

    }

}