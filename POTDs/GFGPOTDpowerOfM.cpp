class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
            if (n==0){
                return 1;
            }
            if (n%2==0){
                return PowMod((x*x)%M,n/2,M);
            }
            else{
                return (x*PowMod((x*x)%M,n/2,M))%M;
            }
            
		}
};