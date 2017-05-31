// Aka the Kerninghan Algorithm
// The hamming distance is bitwise distance between two pieces of information. 
// to get the distance we do XOR and count the distance until the two pieces of info are the same

class Solution {
public:
    int hammingDistance(int x, int y) {
        int val = x^y; // XOR original pieces of info
        int dist = 0; // start a counter at 0
        while(val){ // while loop to increment counter
            ++dist; // increment counter
            val &= val - 1; // count down differences between information
        }
        return dist; // return counter
    }
};
