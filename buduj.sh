#!/bin/sh


# generowamie plikow .s (asm) w konwencji Intela
# -S -masm=intel

# -g              -> do debugowania 
# -ggdb           -> specjalne debagowanie w gdb ?? 
# -gdwarf-4       -> też powinno byc spoko
# -O3             -> optymalizacja pod szybkosc  -O2 nie jest taka agresywna (klucz do man: optimize even)
# -Ofast          -> specjalna optymilizacja pod szybkosc ale :  Disregard strict standards compliance. 
CC_FLAGI="-std=c11 -Wall -Wextra -Wpedantic -fdiagnostics-color=auto -pthread"
# -ldl <- do -pthread
CC_LINKER="-ldl"
CC_OUTPUT="./prog.elf"
CC_SOURCE="./c.c"


#troche czyszcze nim cos zrobie
[ -f "$CC_OUTPUT" ] && rm "$CC_OUTPUT"
# rm -f *.o

gcc $CC_FLAGI -o "$CC_OUTPUT" $CC_SOURCE $CC_LINKER


#[ -f "$CC_OUTPUT" ] && "$CC_OUTPUT"

if [ -f "$CC_OUTPUT" ]
then
  "$CC_OUTPUT"
fi



