#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
// Check if the user provided the file size as a command line argument
if (argc < 2) {
printf("Usage: %s <file size in bytes>\n", argv[0]);
return 1;
}

// Get the file size from the command line argument
long size = atol(argv[1]);

// Open a file for writing
FILE *fp = fopen("random.bin", "w");
if (fp == NULL) {
printf("Error opening file!\n");
return 1;
}

// Seed the random number generator
srand(time(0));

// Write the specified number of random bytes to the file
for (int i = 0; i < size; i++) {
fputc(rand(), fp);
}

// Close the file
fclose(fp);

printf("Done!\n");
return 0;
}
