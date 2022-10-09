class Room
{

	double length, width, height , nwindows;

	void setAttr( double l, double w, double h, double n)
	{
		length = l;
		width = w;
		height = h;
		nwindows = n; 
	}

	double area()
	{
		return (length * width);
	}

	void display()
	{
		System .out.println("Dimensions of room is: " + length + " x " + width + " x " +height);
		System .out.println("number of windows in room is: " + nwindows + "\n");		
	}

}

class roomDemo
{
	public static void main(String[] s)
		{
			Room r1 = new Room();
			Room r2 = new Room();
		

			r1.display();
			r2.display();

			r1.setAttr(12, 13 ,14, 2);
			r2.setAttr(9, 12 ,11,4);

			r1.display();
			r2.display();
			
			double ar1 = r1.area();
			double ar2 = r2.area();

			System.out.println("area of room 1 is: " + ar1 + "\n");
			System.out.println("area of room 2 is: " + ar2 + "\n");
		}
}







