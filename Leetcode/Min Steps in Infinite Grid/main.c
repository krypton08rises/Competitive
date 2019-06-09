/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 *
 * @Output Integer
 */
int coverPoints(int* A, int n1, int* B, int n2) {
        int i = 1;
        int sum = 0;
        while(i<n1){
                        int x = abs(A[i]-A[i-1]);
                        int y = abs(B[i]-B[i-1]);
                            if(x>=y)
                                sum+=x;
                            else sum+=y;
                            i++;
            }
        return sum;
}
