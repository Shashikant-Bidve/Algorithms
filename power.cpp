// power

int power(long long a, long long b, int m){
    long long ans = 1;
    while(b){
        if (b&1) ans = (ans*a) % m;
        b /= 2;
        a = (a*a) % m;
    }
    return ans%m;
}
