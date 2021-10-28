test: transform lower strip palindrome

transform:
	gcc -lm transform/transform.c -o transform.out
	./transform.out

lower:
	gcc lower/lower.c -o lower.out
	./lower.out

strip:
	gcc strip/strip.c -o strip.out
	./strip.out

palindrome:
	gcc palindrome/palindrome.c -o palindrome.out
	./palindrome.out


clean:
	rm *.out

.PHONY: transform lower strip palindrome
