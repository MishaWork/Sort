

#include "TXLib.h"

void Numbers ();

void Read (int Numb[], int Size);

void Control (int Numb [], int Size, int OldLeft, int Left, int OldRight, int Right, int Middle, const char* Name);

void Sum (int Numb [], int Size);

int  Max (int Numb [], int Size);

void Multyply (int Numb [], int Size);

int MinPos (int Numb [], int Size);



void Comp (const int Numb [], const int NumbTest [], int Size);

void Sort (int Numb [], int Size);

void Randomizer (int Numb [], int Size);

int  BiggyNiggy = 0;

int  NiggyBigster = 0;

void BigM ();

void VeryBigM ();

void BubbleSort (int Numb [], int Size);

void Graphics ();

void Pixelating (double x, double y, COLORREF Color);

void Division (int Numb [], int Size, int Left, int Right);



int main()
    {
    txCreateWindow (800, 600);

    /*int Val1 = 0;

    scanf ("%d", &Val1);

    int Val2 = 0;

    scanf ("%d", &Val2);

    if (Val1 < Val2)  printf ("Val2 %d", Val2);
    else  printf ("Val1 %d", Val1);

    return 0;*/

    Numbers ();

    }

void Numbers ()
    {

    const int Size = 10;

    //                 0   1  2  3  4

    //int Numb [Size] = {50, 345, 2, 51, 50, 99, 310, 1, 44, 50};

    int Numb [Size] = {50, 345, 2, 51, 50, 99, 310, 1, 44, 50};

    //int NumbTest [Size] = {10, 7, 15, 8, 3};

    //Replacer (Numb, 1, 2);

    //Read (Numb, Size);

    //Randomizer (Numb, Size);

    //Control (Numb, Size);

    //Sum (Numb, Size);

    //Max (Numb, Size);

    //Multyply (Numb, Size);

    //Comp (Numb, NumbTest, Size);

    ///int Slot = MinPos (Numb, Size);

    //Sort (Numb, Size);

    //BubbleSort (Numb, Size);

    //Control (Numb, Size);

    //BigM ();

    VeryBigM ();

    //printf ("SLOT %d\n", Slot);

    //Graphics ();

    int Left = 0;

    int Right = Size - 1;

    BiggyNiggy = 0;

    NiggyBigster = 0;

    Division (Numb, Size, Left, Right);

    printf ("BiggyNiggy %d\n", BiggyNiggy);

    printf ("NiggyBigster %d\n", NiggyBigster);
    }

void Read (int Numb[], int Size)
    {
    int Count = 0;

    while (Count < Size)
        {

        printf ("%d: ", Count);

        scanf ("%d", &Numb [Count]);

        Count ++;

        }
    }

void Control (int Numb [], int Size, int OldLeft, int OldRight, int Left, int Right, int Middle, const char* Name)
    {

     return;

    txClearConsole ();

    printf ("\n");

    for (int Count = 0; Count < Size; Count ++)
        {
        $G

        if (Count < OldLeft) $D;

        if (Count > OldRight) $D;

        if (Count == Left) $C;

        if (Count == Middle) $Y;

        if (Count == Right) $R;

        if (Count == Left && Count == Right) $M;

        printf ("%03d ", Count);
        }

    $d

    printf ("   %s\n", Name);

    for (int Count = 0; Count < Size; Count ++)
        {
        $g

        if (Count < OldLeft) $d;

        if (Count > OldRight) $d;

        if (Count == Left) $c;

        if (Count == Middle) $y;

        if (Count == Right) $r;

        if (Count == Left && Count == Right) $m;

        printf ("%03d ", Numb [Count]);
        }

    printf ("\n");

    $d

    }

void Sum (int Numb [], int Size)
    {

    int Sum = 0;

    for (int Count = 0; Count < Size; Count ++)
        {

        //printf ("SumOld%d, ", Sum);

        Sum = Sum + Numb [Count];

        //printf ("Count%d, ", Count);

        //printf ("Numb [Count]%d, ", Numb [Count]);

        //printf ("SumNew%d\n", Sum);

        }

    printf ("SUM %d\n", Sum);

    }

int Max (int Numb [], int Size)
    {

    int Max = Numb [0];

    int SubMax = 0;

    int Slot = 0;

    for (int Count = 0; Count < Size; Count ++)
        {

        if (Max < Numb [Count])
            {

            SubMax = Max;

            Max = Numb[Count];

            Slot = Count;

            }

        }

    //printf ("MAX %d\n", Max);

    //printf ("SUBMAX %d\n", SubMax);

    //printf ("SLOTmax %d\n", Slot);

    return Slot;

    }

int MinPos (int Numb [], int Size)
    {

    int Min = Numb [0];

    int Slot = 0;

    for (int Count = 0; Count < Size; Count ++)
        {

        //printf ("*");

        BiggyNiggy++;

        if (Min > Numb [Count])
            {

            Min = Numb[Count];

            Slot = Count;

            }

        }

    //printf ("MIN %d\n", Min);

    //printf ("SLOTmin %d\n", Slot);

    return Slot;

    }

void Multyply (int Numb [], int Size)
    {

    long long Mult = 1;

    for (int Count = 0; Count < Size; Count ++)
        {

        Mult = Mult * Numb [Count];

        }

    //printf ("MULT %lld\n", Mult);

    }

    //10 11 12 10 20


    //3000 6000 500 7000 6500 5000 9000 8000 1000

void Replacer (int Numb [], int Slot1, int Slot2)
    {

    NiggyBigster ++;

    int Temp1 = Numb [Slot1];

    int Temp2 = Numb [Slot2];

    Numb [Slot1] = Temp2;

    Numb [Slot2] = Temp1;
    }

void Comp (const int Numb [], const int NumbTest [], int Size)
    {

    int Check = 0;

    for (int Count = 0; Count < Size; Count++)
        {
        if (Numb [Count] != NumbTest [Count])
            {
            {$r printf ("Numb [%d] = %d, NumbTest [%d] = %d\n", Count, Numb [Count], Count, NumbTest [Count]); $d}

            Check = 1;
            }
        }

    if (Check == 0) {$g printf ("OKKKKKKKKKKKKKKKK"); $d}
    }

void Sort (int Numb [], int Size)
    {

    BiggyNiggy = 0;

    NiggyBigster = 0;

    int Changer = 0;

    while (Changer < Size-1)
        {

        int Minimum = MinPos (Numb, Size - Changer);
        Replacer (Numb, Minimum, Size - Changer - 1);

        //printf ("MaxSlot %d\n", Minimum);

        Changer ++;
        }

    //printf ("MassSize, %d, ", Size);

    //printf ("Compare#, %d, ", BiggyNiggy);

    //printf ("Change#, %d\n", NiggyBigster);

    Pixelating (Size, BiggyNiggy, TX_LIGHTRED);

    Pixelating (Size, NiggyBigster, TX_PINK);

    }

void Randomizer (int Numb [], int Size)
    {
    for (int Count = 0; Count < Size; Count++)
        {
        Numb [Count] = rand ();
        }
    }

void BigM ()
    {

    int Numb [1000] = {};

    for (int Size = 10; Size < 1000; Size++)
        {

        Randomizer (Numb, Size);



        }
    }

void VeryBigM ()
    {

    int Numb [1000] = {};

    for (int Size = 10; Size < 1000; Size++)
        {

        Randomizer (Numb, Size);

        BubbleSort (Numb, Size);

        Randomizer (Numb, Size);

        Sort (Numb, Size);

        Randomizer (Numb, Size);

        int Left = 0;

        int Right = Size - 1;

        BiggyNiggy = 0;

        NiggyBigster = 0;

        Division (Numb, Size, Left, Right);

        Pixelating (Size, BiggyNiggy, TX_YELLOW);

        Pixelating (Size, NiggyBigster, TX_WHITE);

        }
    }

void BubbleSort (int Numb [], int Size)
    {

    BiggyNiggy = 0;

    NiggyBigster = 0;

    int Changer = 0;

    for (int Count1 = 0; Count1 + 1 < Size; Count1++)
        {
        for (int Count = 0; Count + 1 < Size; Count++)
            {
            //printf ("DEDofshina%d\n", Count);

            assert (0 <= Count && Count < Size);

            assert (0 <= Count + 1 && Count + 1 < Size);

            BiggyNiggy ++;

            if (Numb [Count] > Numb [Count + 1]) Replacer (Numb, Count, Count + 1);
            }
        }

    //printf ("MassSizel; %d; ", Size);

    //printf ("Compare#; %d; ", BiggyNiggy);

    //printf ("Change#; %d\n", NiggyBigster);

    Pixelating (Size, BiggyNiggy, TX_LIGHTCYAN);

    Pixelating (Size, NiggyBigster, TX_LIGHTBLUE);

    }

void Graphics ()
    {
    txSetFillColor (TX_NULL);

    //txRectangle (0, 0, 400, 600);
    //txRectangle (400, 0, 800, 600);
    }

void Pixelating (double x, double y, COLORREF Color)
     {
     txSetColor (Color);

     txSetFillColor (Color);

     txCircle (x , - y/10 + 600, 2);
     }

void Division (int Numb [], int Size, int Left, int Right)
    {
    int OldLeft = Left, OldRight = Right;

    int MiddlePos = (Right + Left) / 2;

    int Middle = Numb [MiddlePos];

    //$e printf ("\n<< Division (Numb, Size = %d, Left = %d, Right = %d): OldLeft = %d, OldRight = %d, MiddlePos = %d, Middle = %d \n", Size, Left, Right, OldLeft, OldRight, MiddlePos, Middle); $d

    Control (Numb, Size, OldLeft, OldRight, Left, Right, (Right + Left) / 2, "Start");

    if (Left >= Right) {Control (Numb, Size, OldLeft, OldRight, Left, Right, (Right + Left) / 2, "Too small, return"); return;}

    if (Right - Left == 1)
        {
        if (Numb [Left] > Numb [Right])
            {
            Replacer (Numb, Left, Right);
            }

        Control (Numb, Size, OldLeft, OldRight, Left, Right, (Right + Left) / 2, "Replaced 2 elements, return");

        return;
        };

    while (Left < Right)
        {
        while (Left < Right)
            {
            BiggyNiggy = BiggyNiggy + 1;

            if (Numb [Left] >= Middle) break;

            Left ++;
            }

        while (Right > Left)
            {
            BiggyNiggy = BiggyNiggy + 1;

            if (Numb [Right] <= Middle) break;

            Right --;
            }

        Control (Numb, Size, OldLeft, OldRight, Left, Right, -1, "Found bad elements");

        Replacer (Numb, Left, Right);

        Control (Numb, Size, OldLeft, OldRight, Left, Right, -1, "Replaced two elements");

        Left ++;
        Right --;
        }

    Control (Numb, Size, OldLeft, OldRight, Left, Right, -1, "End");

    if (Left > Right)
        {
        int L = Left, R = Right;
        Right = L, Left = R;

        Control (Numb, Size, OldLeft, OldRight, Left, Right, -1, "Left and Right corrected");
        }

    //getch ();

    Division (Numb, Size, OldLeft, Left);

    Division (Numb, Size, Right, OldRight);
    }
