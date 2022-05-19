#include <iostream>
#include <omp.h>
#include <chrono>
#include <vector>
#include <thread>

using namespace std;

void doNothing() {
   int i;
   i++;
}

int run(int algorithmToRun)
{
    auto startTime = std::chrono::system_clock::now();
    int a[1000001];
    for(int j=1; j<1000000; ++j)
    {
        if(algorithmToRun == 1)
        {
            vector<thread> threads;
            for(int i=0; i<16; i++)
            {
                threads.push_back(thread(doNothing));
            }
            for(auto& thread : threads) thread.join();
        }
        else if(algorithmToRun == 2)
        {
            #pragma omp parallel for num_threads(16)
            for(unsigned i=0; i<16; i++)
            {
                doNothing();
            }
        }
        else if(algorithmToRun == 3)
        {
            a[j] = j;
            if(j%10000 == 0) cout << a[j] << endl;;
        }
    }

    auto endTime = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = endTime - startTime;

    return elapsed_seconds.count();
}

int main()
{
   //  int cppt = run(1);
   //  int ompt = run(2);
    int normal = run(3);

   //  cout<<cppt<<endl;
   //  cout<<ompt<<endl;
    cout<<normal<<endl;

    return 0;
}