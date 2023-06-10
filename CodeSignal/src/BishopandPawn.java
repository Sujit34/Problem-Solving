
public class BishopandPawn {
	boolean solution(String bishop, String pawn) {
		int disC = Math.abs((bishop.charAt(0) - 'a') - (pawn.charAt(0) - 'a'));
		int disR = Math.abs((bishop.charAt(1) - '0') - (pawn.charAt(1) - '0'));
		return disC == disR ? true : false;
	}

}
