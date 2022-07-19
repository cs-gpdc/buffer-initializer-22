cd problem-2/test-case-generator
g++ m.cpp && ./a.out > "../test-cases/input/input02.txt"
cd problem-1/author-solutions/
for i in {0..8} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done