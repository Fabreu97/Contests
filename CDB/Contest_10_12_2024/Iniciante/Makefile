###### MAKEFILE ######
# Autor: Fernando Abreu
# Ciclo
# 1.) use o comando create: para criar os arquivos de entrada e saida, caso já exista não precisa rodar
# 2.) use o comando run:	para compilar e executar a solução e enviando a saída para o arqivo de saida .out
# 3.) use o comando out:	para verificar o conteudo da saída

FILE := C.cpp
FOLDER := $(basename $(FILE))
IN := $(addsuffix .in, $(basename $(FILE)))
OUT := $(addsuffix .out, $(basename $(FILE)))
CORRECT := 

run:
	g++ -g -O2 -std=gnu++20 -static -o $(FOLDER)/main $(FOLDER)/$(FILE)
	./$(FOLDER)/main < $(FOLDER)/$(IN) > $(FOLDER)/$(OUT)
	
out:
	cat $(FOLDER)/$(OUT)

create:
	touch $(FOLDER)/$(IN) $(FOLDER)/$(OUT) 

clean:
	rm -f $(FOLDER)/main