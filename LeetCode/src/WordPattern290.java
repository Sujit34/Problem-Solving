import java.util.HashMap;

public class WordPattern290 {
    public static void main(String[] args) {
        System.out.println(wordPattern("abba", "dog cat cat dog"));
    }

    public static boolean wordPattern(String pattern, String s) {
        String[] str = s.split(" ");
        if (pattern.length() != str.length) return false;
        HashMap<Character, String> hashMap = new HashMap<>();
        for (int i = 0; i < pattern.length(); i++) {
            if (hashMap.containsKey(pattern.charAt(i))) {
                if (!hashMap.get(pattern.charAt(i)).equals(str[i])) return false;
            } else {
                if(hashMap.containsValue(str[i])) return false;
                hashMap.put(pattern.charAt(i), str[i]);
            }
        }
        return true;
    }
}
