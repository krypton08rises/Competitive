/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer
 */
int maxSubArray(const int* A, int n1) {
        int i,j,sum,finalsum;
        sum = A[0];
        finalsum = A[0];
        for(i=1;i<n1;++i){
            sum+=A[i];
            if(sum<A[i])
                sum=A[i];
            if(finalsum<sum)
                finalsum = sum;
        }
    return finalsum;
}
