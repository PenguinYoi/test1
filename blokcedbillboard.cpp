#include <bits/stdc++.h>
using namespace std;
int area[2005][2005], cnt, cnt1, cnt2, cnt3;
int main(){
  int x1, x2, y1,y2;
  cin >> x1 >> y1 >> x2 >> y2;
  for(int i = x1; i < x2; i++){
    for(int j = y1; j < y2;j++){
      area[i+1000][j+1000] = 1;
      cnt1++;
    }
  }
  cin >> x1 >> y1 >> x2 >> y2;
  for(int i = x1; i < x2; i++){
    for(int j = y1; j < y2;j++){
      area[i+1000][j+1000] = 1;
      cnt2++;
    }
  }
  cin >> x1 >> y1 >> x2 >> y2;
  for(int i = x1; i < x2; i++){
    for(int j = y1; j < y2;j++){
      area[i+1000][j+1000] = 0;
      cnt3++;
    }
  }
  for(int i = 0; i <= 2000; i++){
    for(int j = 0; j <= 2000; j++){
      if(area[i][j]==1)cnt++;
    }
  }
  cout << cnt;
}