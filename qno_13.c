//convert bytes into kb, mb, and gb.
//1 gb = 1024 mb, 1 mb = 1024 kb, 1 kb = 1024 bytes

# include <stdio.h>

int main() {
    float bytes;
    printf("enter bytes: ");
    scanf("%f", &bytes);

    float kb = bytes / 1024;
    printf("%f bytes = %f kb \n", bytes, kb);

    float mb = kb / 1024;
    printf("%f bytes = %f mb\n", bytes, mb);

    float gb = mb / 1024;
    printf("%f bytes = %f gb\n", bytes, gb);
    return 0;
}