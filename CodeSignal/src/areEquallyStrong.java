
public class areEquallyStrong {
	boolean solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
		int myStrongHand = yourLeft > yourRight ? yourLeft : yourRight;
		int myWeakHand = yourLeft < yourRight ? yourLeft : yourRight;
		int friendsStrongHand = friendsLeft > friendsRight ? friendsLeft : friendsRight;
		int friendsWeakHand = friendsLeft < friendsRight ? friendsLeft : friendsRight;

		return myStrongHand == friendsStrongHand ? myWeakHand == friendsWeakHand ? true : false : false;
	}
}
