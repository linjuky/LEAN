   #include <iostream>
   using namespace std;
class A {
    int v;
public:
    void Func();
};
void A::Func() { 
cout<<"1";
}
   int main() {
        int n, k;
        double c;
          do {
                 cout<< "Please input n, k:";
                 cin>> n >> k;
          } while(n <k); 
          c = factorial(n) /(factorial(k) *factorial(n - k));
         cout <<"c=" << c << endl;
  }

