ll n = 1000001;
vector<bool> v(n,true);
void seiveOfEratosthenes(){
for(int i=2;i*i<n;i++){
	if(v[i]){
		for(int j = i*i;j<n;j+=i){
			v[j] = false;
		}
	}
}
}

/*
all the prime numbers less than or equal to a given integer n.

*/
