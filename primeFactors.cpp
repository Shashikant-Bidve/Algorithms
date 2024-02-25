vector<pair<int,int>> primeFactors(int n){
  vector<pair<int,int>> ans;
  for(int i = 2; i*i<=n; i++){
    if(n%i == 0){
      int cnt = 0;
      while(n%i == 0){
        cnt++;
        n = n/i;
      }
      ans.push_back({i,cnt});
    }
  }
  if(n > 1){ans.push_back({n,1});}
  return ans;
}


/*

  This code is useful in finding prime factors of a given number in 
  TC -> O(sqrt(n)*logN) 
  
*/
