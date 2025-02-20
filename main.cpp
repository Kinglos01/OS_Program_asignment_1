#include <iostream>
#include <random>


void userMemoryAllocation(double mem_arr[],double proc_arr[],double mem_pgs_arr[],double unuse_mem[]) {

    std::srand(std::time(0));
    double randomNumber = 0;
    int counter = 0;

    for(int i = 0; i <= 99; i++) {
        randomNumber = rand() % 30 + 1;
            mem_arr[i] = randomNumber;
            counter++;
            proc_arr[i] = randomNumber * 80;
            mem_pgs_arr[i] = ceil(proc_arr[i] / 160);

        std::cout <<"count is: "<< counter << "\nRandom array num is: "<< mem_arr[i]
        << "\nProccess number: "<< proc_arr[i] << "\nMemory Pages: "<< mem_pgs_arr[i]<<"\n--------- "<<std::endl;
    }

}


int main() {

    double memory[100];
    double processNumber[100];
    double memoryPages[100];
    double unuesedMemory[100];

    userMemoryAllocation(memory,processNumber,memoryPages,unuesedMemory);

}




