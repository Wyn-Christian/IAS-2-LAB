# Implementation of Diffie Hellman Key Exchange Algorithm

## Aim:

To implement the Diffie-Hellman Key Exchange algorithm using C language

## Description:

Diffie–Hellman Key Exchange establishes a shared secret between two parties that can be used for secret communication for exchanging data over a public network.
It is primarily used as a method of exchanging cryptography keys for use in symmetric encryption algorithms like AES.
The algorithm in itself is very simple. The process begins by having the two parties, Alice and Bob.
Let's assume that Alice wants to establish a shared secret with Bob.

## Algorithm:

1. Both Alice and Bob shares the same public keys `g` and `p`.
2. Alice selects a random public key `a`.
3. Alice computes his secret key `A` as $`g^a \bmod p`$.
4. Then Alice sends `A` to Bob.
5. Similarly Bob also selects a public key `b` and computes his secret key as `B` and sends the same back to Alice.
6. Now both of them compute their common secret key as the other one’s secret key power of $`a \bmod p`$.
