 public class matrixmultiply {
    public static void main(String[] s) {
        
        int [][] m1 = {{1,2,3},{4,5,6},{7,8,9}};
        int [][] m2 = {{1,2,3},{4,5,6},{7,8,9}};
        int m3[][] = new int [3][3];

        int i,j,k;

        for (i = 0; i < m1.length; i++) {
            for (j = 0; j < m1.length; j++) {
                for (k = 0; k < m1.length; k++) {
                    m3[i][j] = m3[i][j] + (m1[j][k]*m2[k][j]);
                }
            }
        }

        System.out.println("\nfirst matrix is\n");
        display(m1);
        System.out.println("second matrix is\n");
        display(m2);
        System.out.println("multiplication of first & second matrix is\n");
       display(m3);
 
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
