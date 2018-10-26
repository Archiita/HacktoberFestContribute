int Solution::gcd(int A, int B) {
    int s,i,gcd=0;
    if(A==0)
    {
        gcd=B;
        return gcd;
    }
    if(B==0)
    {
        gcd=A;
        return gcd;
    }
    if(A<B)
        s=A;
    else
        s=B;
    for(i=s;i>=2;i--)
    {
        if(A%i==0 && B%i==0)
        {
            gcd=i;
            break;
        }
    }
    if(gcd==0)
        gcd=1;
    return gcd;
}
