#include <iostream>

using namespace::std;

int main(){

  int n, q, k, a ,b;
  int **arr;
  int **query;

  scanf("%d %d\n", &n, &q);
  arr = new int* [n];
  query = new int* [q];

  for(int i = 0; i < n; i++){
    scanf("%d", &k);
    arr[i] = new int[k];
    for(int j = 0; j < k; j++){
      scanf("%d", *(arr + i) + j);
    }
  }
  // Scan queries
  for(int i = 0; i < q; i++){
    query[i] = new int[2];
    scanf("%d %d", &query[i][0], &query[i][1]);
    // scanf("%d %d", *(query + i), *(query + i) + 1);
  }

  //Output
  for(int i = 0; i < q; i++){
    // printf("%d\n", (*(*(arr + (*(*(query + i)))) + (*(*(query + i) + 1)))));
    // printf("%d\n", arr[*(*(query + i))][(*(*(query + i) + 1))]);
    printf("%d\n", arr[query[i][0]][query[i][1]]);
  }
  return 0;
}