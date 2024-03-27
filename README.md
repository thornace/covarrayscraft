# Intro

I intend to describe all I know about covering arrays; definitions, classifications, ways of construction, ways of verifications and my own implementations.

## What they are?

Matrices, matrices that have special properties. a covering array is described by four letters: N, k, v, and t. On a $CA(N;t,k,v)$ the letters mean:
- **N**; the number of rows
- **k**; the number of cols
- **v**; the vocabulary, an integer that represents the number of different symbols accepted in the matrix, ranging from $0$ to $v-1$
- **t**; the strength, take a subset of t columns from k, and every combination of symbols $\{0,\dots,v-1\}\times\dots\times\{0,\dots,v-1\}$ would be present in the matrix.

## Examples

$$CA(4;2,3,2) = \begin{bmatrix}
    0,0,0\\
    0,1,1\\
    1,0,0\\
    1,1,1
\end{bmatrix} $$