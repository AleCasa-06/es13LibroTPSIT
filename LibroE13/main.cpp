#include <iostream>
#include "thread"


using namespace std;

void CreaNumeri(int n, int* arr){

    for(int i = 0; i < n; i++){
        arr[i%10] = 1 + random()%100;

    }

}

void StampaNumeri(int n, int* arr){
    for(int i = 0; i < n; i++){
        cout << "numeri: \n" << arr[i%10] << endl;
    }
}





int main() {
    int num = 0;
    cout << "Quanti numeri vuoi nella tua sequenza" << endl;
    cin >> num;
    int arr[10];
    int* p = arr;
    thread th1(CreaNumeri, num, p);
    thread th2(StampaNumeri, num, p);
    th1.join();
    th2.join();


    return 0;
}
