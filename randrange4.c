#include <stdio.h>
#include <gmp.h>

// Generates a random integer in the range [a, b] with a step size of s
// using the specified seed value
void gmp_randrange(mpz_t result, mpz_t a, mpz_t b, mpz_t s, mpz_t seed) {
    // Initialize the random number generator
    gmp_randstate_t state;
    gmp_randinit_default(state);
    gmp_randseed(state, seed);

    // Calculate the number of possible values
    mpz_t num_values;
    mpz_init(num_values);
    mpz_sub(num_values, b, a); // num_values = b - a
    mpz_tdiv_q(num_values, num_values, s); // num_values = (b - a) / s

    // Generate a random integer in the range [0, num_values)
    mpz_urandomm(result, state, num_values);

    // Calculate the final result
    mpz_mul(result, result, s); // result = result * s
    mpz_add(result, result, a); // result = result + a

    // Clear the variables
    mpz_clear(num_values);
    gmp_randclear(state);
}

int main(void) {
    // Initialize the variables
    mpz_t a, b, s, r, seed;

    // Set the values of a, b, and s
    mpz_init_set_str(a, "9999", 10);
    mpz_init_set_str(b, "99999", 10);
    mpz_init_set_str(s, "5", 10);

    // Set the seed value
    mpz_init_set_str(seed, "99999999999", 10);

    // Generate a random integer in the range [a, b) with a step size of s
    // using the specified seed value
    mpz_init(r);
    gmp_randrange(r, a, b, s, seed);

    // Print the result
    printf("Random number: ");
    mpz_out_str(stdout, 10, r);
    printf("\n");

    // Clear the variables
    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(s);
    mpz_clear(r);
    mpz_clear(seed);

    return 0;
}
