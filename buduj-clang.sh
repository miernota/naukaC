#!/bin/sh


# generowamie plikow .s (asm) w konwencji Intela
# -S -masm=intel

CC_FLAGI="-std=c11 -Weverything -pthread -ggdb"
# -ldl <- do pthread
CC_LINKER="-ldl"
CC_OUTPUT="./prog"
CC_SOURCE="./src/*.c"


#troche czyszcze nim cos zrobie
[ -f "$CC_OUTPUT" ] && rm "$CC_OUTPUT"
# rm -f *.o

clang-3.8 $CC_FLAGI -o "$CC_OUTPUT" $CC_SOURCE $CC_LINKER


#[ -f "$CC_OUTPUT" ] && "$CC_OUTPUT"

if [ -f "$CC_OUTPUT" ]
then
  "$CC_OUTPUT"
fi



