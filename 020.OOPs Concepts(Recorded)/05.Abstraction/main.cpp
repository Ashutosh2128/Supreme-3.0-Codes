#include<iostream>
#include"bird.h"
using namespace std;

void birdDoesSomething(Bird* &bird) {
    bird -> eat();
    bird -> fly();
    bird -> eat();
}

int main() {
    Bird* bird = new pigeon();
    birdDoesSomething(bird);

    //Bird* b2 = new Bird(); // Won't work


    return 0;
}