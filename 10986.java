import java.util.Scanner;

public class Main {

	public static void main (String[] args) {
		int n,m;
		int count=0,adder=0;
		int[] nums;
		Scanner scanner = new Scanner(System.in);
		n = scanner.nextInt();
		m = scanner.nextInt();
		
		nums = new int[n];
		for(int i=0;i<n;i++) {
			nums[i]=scanner.nextInt();
		}
		for(int p=0;p<n;p++) {
			adder = 0;
			for(int q=p;q<n;q++) {
				adder+=nums[q];
				if(adder%m==0) {
					count+=1;
				}
			}
		}
		System.out.print(count);
		scanner.close();
	}
}
