#include <iostream>
#include <vector>
#define Y_FEE 10
#define M_FEE 15

using namespace std;

int main() {
  int n;
  int M = 0, Y = 0;
  cin >> n;

  vector<int> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  for(int i = 0; i < n; i++){
    Y += ((arr[i]/30)+1) * Y_FEE;
    M += ((arr[i]/60)+1) * M_FEE;
  }

  if(Y < M){
    cout << "Y " << Y;
  } else if(M < Y){
    cout << "M " << M;
  } else {
    cout << "Y M " << Y;
  }

  return 0;
}