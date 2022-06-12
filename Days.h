
int monthsum(int* mon) // 포인터 활용
{
    int i = 0;
    int monsum = 0;

    for (i = 0; i < 31; i++) {
        monsum += *(mon + i); // 포인터의 활용
    }

    return monsum;
};
