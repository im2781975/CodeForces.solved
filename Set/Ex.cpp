#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool prime[1000000 + 1];
vector<int> parent(1000000 + 1);
vector<int> siz(1000000 + 1);

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    siz[v] = 1;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (siz[a] < siz[b])
            swap(a, b);
        parent[b] = a;
        siz[a] += siz[b];
    }
}

void SieveOfEratosthenes() {
    int n = 1000000;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int main() {
    // Call SieveOfEratosthenes to precompute primes
    SieveOfEratosthenes();

    // Example union-find operations
    int num1 = 7;
    int num2 = 11;

    // Initialize sets
    make_set(num1);
    make_set(num2);

    // Check if the numbers are prime
    if (prime[num1] && prime[num2]) {
        cout << num1 << " and " << num2 << " are prime numbers." << endl;

        // Perform union operation
        union_sets(num1, num2);

        // Check if they are in the same set after union
        if (find_set(num1) == find_set(num2)) {
            cout << num1 << " and " << num2 << " are in the same set." << endl;
        } else {
            cout << "Error: Union failed." << endl;
        }
    } else {
        cout << "Both numbers must be prime for the union operation." << endl;
    }

    return 0;
}

