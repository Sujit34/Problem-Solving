
public class chessKnight {
	static int solution(String cell) {
	    int row = cell.charAt(0)-'a';
	    int column = cell.charAt(1)-'0';
	    
	    int highestRowNo = 'h' -'a';
	    int lowestRowNo = 'a' -'a';
	    int count = 0;
	    
	    if(row+2 <= highestRowNo && column + 1 <=8 ) count++;
	    if(row+2 <= highestRowNo && column - 1 >=1 ) count++;
	    if(row-2 >= lowestRowNo && column + 1 <=8 ) count++;
	    if(row-2 >= lowestRowNo && column - 1 >=1 ) count++;
	    
	    if(row+1 <= highestRowNo && column + 2 <=8 ) count++;
	    if(row+1 <= highestRowNo && column - 2 >=1 ) count++;
	    if(row-1 >= lowestRowNo && column + 2 <=8 ) count++;
	    if(row-1 >= lowestRowNo && column - 2 >=1 ) count++;
	    
	    return count;
	}
	
	public static void main(String[] args) {
		System.out.println(solution("a1"));
	}
}
