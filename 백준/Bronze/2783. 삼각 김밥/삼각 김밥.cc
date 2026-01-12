#include <iostream>
#include <vector>

using namespace std;

int main(){
  int price, gram, market_count;
  double minimum_price;

  cin >> price >> gram;
  minimum_price = price * 1000.0 / gram;

  cin >> market_count;
  for(int i = 0; i < market_count; i++){
    cin >> price >> gram;
    double price_per_thousand = price * 1000.0 / gram;
    if(price_per_thousand < minimum_price) minimum_price = price_per_thousand;
  }
  cout << fixed;
  cout.precision(2);

  cout << minimum_price;
  return 0;
}