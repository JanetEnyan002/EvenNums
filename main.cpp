/* Janet 10990297*/

#include <iostream>

using namespace std;

int main()
{
    cout << "calculating the sum of even numbers from 1 to 10000"<< endl;
    int sum =0;
    int countEven =0;

    for (int a=2; a<= 10000;a++){
       if (a%2 ==0){
            sum = sum+ a;
            countEven++;
       }
    }
    cout<<"The number of even numbers available in the given range is "<< countEven<<endl<<endl;
    cout<<"the sum of the even is:"<< sum << endl<<endl;
    float mean;
    mean = sum /countEven;
    cout<< "The mean is therefore calculated as "<<mean<<endl;
    return 0;
}
