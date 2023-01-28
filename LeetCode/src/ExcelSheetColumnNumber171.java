
public class ExcelSheetColumnNumber171 {
	public static int titleToNumber(String columnTitle) {
		int result = 0;
		for (int i = columnTitle.length() - 1; i >= 0; i--) {
			int charNo = columnTitle.charAt(i) - 64;
			int multiple = (columnTitle.length() - 1) - i;
			while (multiple > 0) {
				charNo = charNo * 26;
				multiple--;
			}

			result = result + charNo;
		}

		return result;
	}

	public static void main(String[] args) {
		System.out.println(titleToNumber("ZCB"));
	}

}
