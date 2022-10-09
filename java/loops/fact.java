import java.util.*;

class fact
{
	public static void main (String[] s)
	{

		//declaring variables 
		int x,i, result;
		result = 1;

		//getting input from user
		Scanner input = new Scanner(System.in);
		System.out.print("enter a number: ");
		x = input.nextInt();

		//modifying result over loop
		for(i=1; i<=x; i++)
			result = result * i; 

		//printing out result
		System.out.print(x + "! = " + result);	
	}		
}