public class twodarray {

    public static void main(String[] args) {
        
        int [][] matrix1 = {{1,2,3},
		  {4,5,6},
		  {7,8,9}};
        int [][] matrix2 = {{1,2,3},
		  {4,5,6},
		  {7,8,9}};
        int matrix3[][] = new int [3][3]; 
        
        int i,j;

        for (i = 0; i < matrix1.length; i++) {
            for (j = 0; j < matrix2.length; j++) {
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        System.out.println("\nfirst matrix is\n");
        display(matrix1);
        System.out.println("second matrix is\n");
        display(matrix2);
        System.out.println("additon of first & second matrix is\n");
        display(matrix3);
    }
    static void display(int arr[][])
    {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
