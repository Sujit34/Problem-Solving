import java.util.HashMap;

public class RansomNote383 {
    public static void main(String[] args) {
        System.out.println(canConstruct("bg", "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj"));
    }

    public static boolean canConstruct(String ransomNote, String magazine) {
        HashMap<Character, Integer> hashMap = new HashMap<>();

        for (int i = 0; i < ransomNote.length(); i++) {
            if (hashMap.containsKey(ransomNote.charAt(i)))
                hashMap.put(ransomNote.charAt(i), hashMap.get(ransomNote.charAt(i)) + 1);
            else
                hashMap.put(ransomNote.charAt(i), 1);
        }

        int count = 0;

        for (int i = 0; i < magazine.length(); i++) {
            if (hashMap.containsKey(magazine.charAt(i))) {
                if (hashMap.get(magazine.charAt(i)) > 0) count++;
                hashMap.put(magazine.charAt(i), hashMap.get(magazine.charAt(i)) - 1);

            }
        }

        return count == ransomNote.length();

    }
}
