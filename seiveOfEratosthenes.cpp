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
This code is helpful for finding     all numbers which are prime in a given range 
time complexity is reduced from O(sqrt(n)*N) to O(N*logN*logN)
TC -> O(N*logN*logN) 

vector v contains if a number is prime or not

*/
