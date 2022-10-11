#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  // your code here
  int count  = 0; 
  std::vector<int> v = input;
  for(int i = 0; i < v.size(); ++i){
    if(v[i] == 0){
      count ++;
      v.erase(v.begin() + i);
    }
  }  
  for(int i = 0; i < count; ++i)
    v.push_back(0);
  std::cout << count;
  return v;
}
