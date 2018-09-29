# オブジェクトファイルとライブラリファイルの違い

C言語のソースファイルをコンパイルするとオブジェクトファイルが出来る。
また、コンパイルオプションでライブラリを作成することも出来る。

オブジェクトファイルもライブラリファイルもどちらも機械語を含んだバイナリファイルである。

ライブラリファイルはオブジェクトファイルをまとめたものだが、単純に並べて一つにした
だけのものなのか、なにか追加・修正されているのか？確かめてみる。

## キーワード：
 - オブジェクトファイルフォーマット：ELF, Mach-O, PE
 - セクション、セグメント、リンカ、ローダ、
 - シンボルテーブル、シンボルテーブルの索引（インデックス）

