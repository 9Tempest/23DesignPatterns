#include "Evaluator.h"


int main(int argc, char const *argv[])
{
    Evaluator e;
    Student s{2,20,"HUAWEI"};
    e.setStrategy(s);
    e.evaluate();
    s.study();
    e.setStrategy(s);
    e.evaluate();
    return 0;
}
