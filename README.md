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
