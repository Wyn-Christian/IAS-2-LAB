# Implementation of Cipher

## Aim:

To write a C program to implement the RSA encryption algorithm.

## Description:

**RSA** is an algorithm used by modern computers to encrypt and decrypt messages. It is an **asymmetric cryptographic algorithm**. Asymmetric means that there are two different
keys. This is also called **public key cryptography**, because one of them can be given to everyone.
A basic principle behind RSA is the observation that it is practical to find three very large positive integers `e`, `d` and `n` such that with modular exponentiation for all
integer `m`:

$$
(m^e)^d = m (\bmod n)
$$

The public key is represented by the integers `n` and `e`; and, the private key, by the integer `d`. `m` represents the message.
RSA involves a public key and a private key.
The public key can be known by everyone and is used for encrypting messages.
The intention is that messages encrypted with the public key can only be decrypted in a reasonable amount of time using the private key

## Algorithm:

1. Select two co-prime numbers as `p` and `q`.
2. Compute n as the product of `p` and `q`.
3. Compute $`(p-1)*(q-1)`$ and store it in `z`.
4. Select a random prime number `e` that is less than that of `z`.
5. Compute the private key, `d` as $`e * \bmod^{-1}(z)`$
6. The cipher text is computed as $`message^e * \bmod{n}`$.
