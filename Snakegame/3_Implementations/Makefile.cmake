SRC=unity/unity.c\
src/Snakegame.c\
test/test_Snakegame.c\
main.c

INC= -Iunity\
-Iinc\
Itest

PROJECT_NAME = SNAKEGAME.out

$(PROJECT_NAME) : $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
    ./$[PROJECT_NAME]
doc:
    make -c documentation

clean:
     rm -rt $(PROJECT_NAME) documentation/html