
#include "TXLib.h"

void General ();

void Randomizer (int Mass [], int Size);

void GJM_printf (int Mass [], int Size);

void Replacer (int Mass [], int Size, int Slot1, int Slot2);

void ReplacerReg (int Mass [], int Slot1, int Slot2);

int Finder (int Mass [], int SortSize, int SortElem);

void DFSort (int Mass [], int Size);

int main()
    {
    //txCreateWindow (1300, 600);

    General ();

    return 0;
    }

void General ()
    {
    const int Size = 10;
                     //0,  1,  2,  3,  4,   5,   6,  7, 8, 9
    int Mass [Size] = {2, 10, 13, 12, 68, 320, 400, 17, 8, 6};

    //Randomizer (Mass, Size);

    //int RetVal = Finder (Mass, 2, 320);

    //$c

    //printf (" RetVal = > %d <\n", RetVal);

    DFSort (Mass, Size);

    GJM_printf (Mass, Size);

    }

void Randomizer (int Mass [], int Size)
    {
    for (; Size >= 0; Size--)
        {
        Mass [Size] = rand () * 100 + Size;
        }
    }

void GJM_printf (int Mass [], int Size)
    {
    for (int Count = 0; Count < Size; Count++)
        {
        $g printf ("[%d] = ", Count);

        $y printf ("%d ", Mass [Count]); $d
        }
    printf ("\n");
    }

void Replacer (int Mass [], int Size, int Slot1, int Slot2)
    {

    assert (0 <= Slot1 && Slot1 < Size); int Temp = Mass [Slot1];

    for (int Count = 0; Count < Size; Count ++)
        {
        assert (0 <= Slot1 && Slot1 < Size);
        assert (0 <= Slot2 && Slot2 < Size);

        Mass [Slot1] = Mass [Slot2];
        }

    assert (0 <= Slot2 && Slot2 < Size); Mass [Slot2] = Temp;

    }

void ReplacerReg (int Mass [], int Slot1, int Slot2)
    {
    int Temp1 = Mass [Slot1];

    int Temp2 = Mass [Slot2];

    Mass [Slot1] = Temp2;

    Mass [Slot2] = Temp1;
    }

int Finder (int Mass [], int SortSize, int SortElem)
    {
    for (int Count = 0; Count < SortSize; Count ++)
        {
        if (SortElem < Mass [Count]) return Count;

        $c

        //printf (" Count > %d <", Count);

        //printf (" Mass [Count] > %d <", Mass [Count]);

        //printf (" SortElem > %d <\n", SortElem);
        }

    return SortSize;
    }

void DFSort (int Mass [], int Size)
    {
    if (Mass [0] > Mass [1])
        {
        ReplacerReg (Mass, 0, 1);
        }

    GJM_printf (Mass, Size);

    int SortSize = 2;

    for (int Count = 0; Count < Size-1; Count++)
        {
        GJM_printf (Mass, Size);

        int RetVal = Finder (Mass, SortSize, Mass [SortSize]);

        $c

        printf (" SortSize = > %d <\n", SortSize);

        $d

        $m

        printf (" RetVal = > %d <\n", RetVal);

        $d

        Replacer (Mass, Size, SortSize, RetVal);

        GJM_printf (Mass, Size);

        SortSize ++;

        printf ("---------------------------------------------\n");
        }
    }
