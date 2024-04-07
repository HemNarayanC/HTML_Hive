#include <stdio.h>

int maxArea(int* height, int heightSize) {
    int maxArea = 0;
    int left = 0;
    int right = heightSize - 1;
    
    while (left < right) {
        int width = right - left;
        int h = height[left] < height[right] ? height[left] : height[right];
        int area = width * h;
        if (area > maxArea) {
            maxArea = area;
        }
        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return maxArea;
}

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int heightSize = sizeof(height) / sizeof(height[0]);
    printf("%d\n", maxArea(height, heightSize));  // Output: 49
    return 0;
}
