#include <iostream>
#include <random>


void userMemoryAllocation(double mem_arr[],double proc_arr[],double mem_pgs_arr[],double pgs_to_bytes[]) {

    std::srand(std::time(0));
    double randomNumber = 0;
    int processID = 0;
    double extraMem = 0;

    for(int i = 0; i <= 99; i++) {
        randomNumber = rand() % 30 + 1;
        mem_arr[i] = randomNumber;
        processID++;
        proc_arr[i] = randomNumber * 80;
        mem_pgs_arr[i] = ceil(proc_arr[i] / 160);
        pgs_to_bytes[i] = (mem_pgs_arr[i]*160);



        std::cout <<"Process ID is: "<< processID << "\nRandom array num is: "<< mem_arr[i]
        << "\nProccess number: "<< proc_arr[i] << "\nMemory Pages: "<< mem_pgs_arr[i]
        << "\nPages in Bytes: "<< pgs_to_bytes[i]<<"\n--------- "<<std::endl;
    }

}


int main() {

    double memory[100];
    double processNumber[100];
    double memoryPages[100];
    double pagesToBytes[100];

    userMemoryAllocation(memory,processNumber,memoryPages,pagesToBytes);

}




