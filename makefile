CC = gcc
FLAG = -Wall -g
AR = ar -rcs
LibLoop = advancedClassificationLoop.o basicClassification.o
LibRec =  advancedClassificationRecursion.o basicClassification.o
.PHONY: all clean
 
all: basicClassification.o advancedClassificationRecursion.o advancedClassificationLoop.o loops recursives loopd recursived mains maindloop maindrec
loops: $(LibLoop)
	$(AR) libclassLoops.a $(LibLoop)
recursives: $(LibRec)
	$(AR) libclassrec.a $(LibRec)
loopd: $(LibLoop)
	$(CC) -shared -o libclassLoops.so $(LibLoop) -lm  
recursived: $(LibRec)
	$(CC) -shared -o libclassrec.so $(LibRec)  -lm 
mains: main.o libclassrec.a
	$(CC) $(FLAG) -o mains main.o libclassrec.a -lm 
main.o: main.c NumClass.h
	$(CC) $(FLAG) -c main.c -lm
maindloop: main.o
	$(CC) $(FLAG) -o maindloop main.o ./libclassLoops.so -lm
maindrec: main.o
	$(CC) $(FLAG) -o maindrec main.o ./libclassrec.so -lm
clean:
	rm -f *.o *.so *.a maindloop maindrec mains
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAG) -c advancedClassificationLoop.c -lm
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAG) -c basicClassification.c -lm 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAG) -c advancedClassificationRecursion.c -lm

