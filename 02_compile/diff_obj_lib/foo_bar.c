/*
 * オブジェクトファイルとライブラリは何が違うのかを確かめるための
 * サンプルソースコード。
 *
 * gcc -c -o foo_bar.o foo_bar.c
 
 * ar -o foo_bar.a foo_bar.o
 *
 * objdump で foo_bar.o と foo_bar.a の違いを探す
 */

int foo(int x){
	int a = 2;
	return a+x;
}

int bar(int y){
	const int b=3;
	return b*3;
}

