
int monthsum(int* mon) // ������ Ȱ��
{
    int i = 0;
    int monsum = 0;

    for (i = 0; i < 31; i++) {
        monsum += *(mon + i); // �������� Ȱ��
    }

    return monsum;
};
