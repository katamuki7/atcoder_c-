macでAtcoderをやるときにコンパイルがGCCではないため、  
```
<bits/stdc++.h>
```
が使えません。  
ローカルでの環境構築は怖いのでdockerで簡易的な実行環境を作っています。  
また、解いた問題は`abc`フォルダの中にアーカイブとして残しておきます。

実行方法
```ターミナル
docker-compose build
docker-compose run dev
```

C++の実行方法メモ
```
//コンパイル方法
g++ -o {コンパイル後のファイル名} {実行ファイル名}.cpp
//実行方法
./{コンパイル後のファイル名}
//同時（どっちでもOK）
g++ hello.cpp -o hello && ./hello

g++ -o hello hello.cpp && ./hello
```
