#include <iostream>



using namespace std;

void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

void bubblesort(int arr[],int n){
  for (size_t i = 0; i < n-1; i++) {
    for (size_t j = 0; j < n-i-1; j++) {
      if(arr[j]>arr[j+1]){
        swap(&arr[j],&arr[j+1]);
      }
    }
  }
}

void printarray(int arr[],int n){
  for (size_t i = 0; i < n; i++) {
    std::cout<<arr[i]<<' ';
  }
  std::cout<< '\n';
}

int main() {

  int n;
  std::cout << "Inserer taille de la liste:";
  std::cin >> n;

  int arr[n];

  for (size_t i = 0; i < n; i++) {
    std::cout << "Inserer un élément:";
    std::cin >> arr[i];
  }
  //std::cout << arr[-1] << '\n';

  //int n=sizeof(arr)/sizeof(arr[0]);
  std::cout << "Avant:\n";
  printarray(arr,n);
  bubblesort(arr,n);
  std::cout << "Apres(en ordre):\n";
  printarray(arr,n);
  
  return 0;
}
