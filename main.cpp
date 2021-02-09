#include <iostream>
#include "Statemaschine.h"




int main() {
    StateMaschine stm;
    State* states[]={
            new Test1State(&stm),
            new Test2State(&stm),
    };

    stm.run(states,2,StateIdentifier::State1);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
