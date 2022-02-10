// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int min = 0, c = 1;
    if (a < b) {
        min = a;
    }
    else {
        min = b;
    }
    for (int i = 1;i<(min/2);i++) {
        if (((a % i) == 0) && ((b % i) == 0))
            c = i;
    }
    return c;
}
