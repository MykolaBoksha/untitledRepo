#include <iostream>
/**
 ��������:
 ��'� ��������: ������ �����
 ����� ��������: 121
 ����������� 1.4
 */
int main()
{
    // �������� 1
    unsigned int wA = 43;
    int nB = 5124;
    float fltC = -8976.04;
    double dblD = 3.5e-4;

    // �������� 2
    unsigned int* pwA;
    int* pnB;
    float* pfltC;
    double* pdblD;

    // �������� 3
    void* pV;
    // �������� 4
    pwA = &wA;
    pnB = &nB;
    pfltC = &fltC;
    pdblD = &dblD;

    // �������� 5
    *pwA = 43;
    *pnB = 5124;
    *pfltC = -8976.04;
    *pdblD = 3.5e-4;

    // �������� 6
    int sizewA = sizeof(wA);
    int sizepwA = sizeof(pwA);

    int sizenB = sizeof(nB);
    int sizepnB = sizeof(pnB);

    float sizefltC = sizeof(fltC);
    float sizepfltC = sizeof(pfltC);

    double sizedblD = sizeof(dblD);
    double sizepdblD = sizeof(pdblD);

    //�������� 7 

    pV = &pwA;

}