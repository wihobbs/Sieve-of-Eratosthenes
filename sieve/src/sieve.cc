// sieve of eratosthenes
// hobbs 2021
// c++
#include </acct/wihobbs/personal/sieve/inc/sieve.h>

#include <cstdlib>
#include <iostream>
#include <chrono>
#include <ctime>

int main(int argc, char* argv[]) {
    const int n = std::stoi(argv[1]);
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    #pragma omp parallel
	{	
		eratosthenes(n);
	}
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Elapsed time: " << elapsed.count() << "s\n" << std::endl;
    return 0;
}

int eratosthenes(int n) {
    bool *arr[n];
    bool is_prime = true;
    bool is_not_prime = false;
    for (int i = 0; i < n; ++i) { arr[i] = &is_prime; };
    std::cout << "1" << std::endl;
    for (int i = 2; i < n; ++i) {
        if (arr[i] == &is_prime) {
        std::cout << i << std::endl;
            for (int j = i; i*j < n; ++j) {
                arr[i*j] = &is_not_prime;
            }
        }
    }
    return 0;

}

