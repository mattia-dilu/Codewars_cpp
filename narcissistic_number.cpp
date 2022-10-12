#include <cmath>
bool narcissistic( int value ){
  int count = 0;
  int app = value;
  int sum = 0;
  std::string s = std::to_string(value);
  for(int i = 0; i < s.size(); ++i)
    count++;
  while(app){
    sum += pow(app % 10, count);
    app /= 10;
  }
  return(value == sum);
}
