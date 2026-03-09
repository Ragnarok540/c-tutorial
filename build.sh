set -xe

mkdir -p bin

clang -Wall -Wextra -o bin/main src/main.c -lm
clang -Wall -Wextra -o bin/array src/array.c -lm
clang -Wall -Wextra -o bin/pass src/pass.c -lm
