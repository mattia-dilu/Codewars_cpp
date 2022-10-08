bool isPrime(int num) {
  //manage all numbers from 2 to sqrt of num
  for(int i = 2; i <= sqrt(num); ++i) 
    if(num % i == 0) return false; 
  //if number is 1, 0 or negative return false, else return true
  return num <= 1? false : true;
}
