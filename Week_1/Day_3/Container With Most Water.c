int maxArea(int* height, int heightSize) {
    int i = 0;
    int j = heightSize - 1;
    int max = 0;
    while (i < j) {
        int h = (height[i] < height[j]) ? height[i] : height[j];
        int area = h * (j - i);
        if (area > max)
            max = area;

        if (height[i] < height[j])
            i++;
        else
            j--;
    }

    return max;
}
