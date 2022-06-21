/*セグメンテーションフォールトを減らすためのツール群
 *メモリ違反の原因
 * 1. 割り当てしていないポインタへのアクセス
 * 2. 配列のサイズ超過アクセス
 * 3. 解放し忘れによるmallocエラー
 *
 * デバッグが大変なのは１と３
 * ある関数でヒープメモリに生成したものを別関数に渡すような場合に、解放し忘れがある。
 * 複雑になるにつれてメモリが割り当てられていることを前提として考えてしまう。
 * 毎回NULL条件をキャッチしているとコードが増えて読みにくい。
 *
 * 対策案
 * 1. 理想は高級言語のように自動的にメモリが解放されるガーベージコレクションみたいなもの
 * 2. 
 */