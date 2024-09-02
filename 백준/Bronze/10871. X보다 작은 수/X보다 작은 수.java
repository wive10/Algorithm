import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        ArrayList<Integer> result = new ArrayList<>();

        String[] firstLine = reader.readLine().split(" ");
        int testcase = Integer.parseInt(firstLine[0]);
        int cg = Integer.parseInt(firstLine[1]);

        String[] secondLine = reader.readLine().split(" ");
        for (int i = 0; i < testcase; i++) {
            int eg = Integer.parseInt(secondLine[i]);
            if (cg > eg) {
                result.add(eg);
            }
        }

        for (int value : result) {
            System.out.print(value + " ");
        }
    }
}