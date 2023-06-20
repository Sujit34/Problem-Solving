import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class NewYearChaos {
	public static void minimumBribes(List<Integer> q) {
		int bribe = 0;
		for (int i = q.size() - 1; i >= 0; i--) {
			if (q.get(i) != i + 1) {
				if (q.get(i - 1) == i + 1) {
					bribe += 1;
					int temp = q.get(i);
					q.set(i - 1, q.get(i));
					q.set(i, temp);
				} else if (q.get(i - 2) == i + 1) {
					bribe += 2;
					int temp = q.get(i - 2);
					q.set(i - 2, q.get(i - 1));
					q.set(i - 1, q.get(i));
					q.set(i, temp);
				} else {
					System.out.println("Too chaotic");
					return;
				}
			}
		}
		System.out.println(bribe);
	}

	public static void main(String[] args) throws IOException {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		int t = Integer.parseInt(bufferedReader.readLine().trim());

		IntStream.range(0, t).forEach(tItr -> {
			try {
				int n = Integer.parseInt(bufferedReader.readLine().trim());

				List<Integer> q = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
						.map(Integer::parseInt).collect(toList());

				minimumBribes(q);
			} catch (IOException ex) {
				throw new RuntimeException(ex);
			}
		});

		bufferedReader.close();
	}
}
