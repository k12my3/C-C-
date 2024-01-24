HAMMING EXPERIMENT 5 CODES


// FIRST CODE// 

/*pow(2,r)>=m+r+1*/
int calcRedundantBits(int dataBitsLength)
{
int redundantBitsLength=0;
int r,m=dataBitsLength;
for(r=0;r<=m;r++)
{
if(pow(2,r)>=m+r+1)
{
redundantBitsLength=r;
break;
}
}
return redundantBitsLength;
}
------------------------------------------------------------------------------
//SECOND CODE//

int calcRedundantBits(int dataBitsLength)
{
int redundantBitsLength=0;
for(int r=1;r<=dataBitsLength;r++)
{if(pow(2,r)>=(dataBitsLength+r+1))
{
redundantBitsLength=r;
break;
}
}
return redundantBitsLength;
}
void calcRedundantBitPositions(int dataBitsLength)
{
int r,codewordLength,i;
int redundantBitsLength=calcRedundantBits(dataBitsLength);
codewordLength= dataBitsLength+redundantBitsLength;
//int redundantBitPositions[10];
for (r = 0; r < codewordLength; r++)
{
i=pow(2,r);
if(i<=codewordLength)
{
printf("%d ",i-1);
}
}
}
-------------------------------------------------------------------------------------
//THIRD CODE//


int codeWord[64];
int calcRedundantBits(int dataBitsLength)
{
    int redundantBitsLength=0;
    //write the code to calculate number of redundant bits
    for(int i=0;i<dataBitsLength;i++)
    {
        if(pow(2,redundantBitsLength)<(dataBitsLength+redundantBitsLength+1))
        {
            redundantBitsLength++;
        }
    }
    return redundantBitsLength;
}

void initializeCodeWord(int dataBitsLength, int *dataWord)
{
    int i,codewordLength,j,k;
    j=k=0;
    int redundantBitsLength=calcRedundantBits(dataBitsLength);
    codewordLength= dataBitsLength+redundantBitsLength;
    // In the codeword, initializ the redundant bits with 0
    for (i = 0; i < codewordLength; i++)
    {
        //write your code here
        for (i = 1; i <= codewordLength; i++)
        {
            if(!(i && (!(i & (i - 1)))))
            {
                codeWord[i]=dataWord[j];
                j++;
            }
            /* DONOT EDIT THE BELOW CODE */
            printf("%d ",codeWord[i]);
        }
    }
}
---------------------------------------------------------------------------------------------
//FOURTH CODE//

int input[32];
// Store hamming code
int code[32];
int ham_calc(int, int);
void solve(int n,int input[]);
// Function to calculate bit for
// ith position
int ham_calc(int position, int c_l)
{
    int count = 0, i, j;
    i = position - 1;
    // Traverse to store Hamming Code
    while (i < c_l) 
    {
        for (j = i; j < i + position; j++) 
        {
            // If current boit is 1
            if (code[j] == 1)
            count++;
        }
    // Update i
    i = i + 2 * position;
    }
    if (count % 2 == 0)
        return 0;
    else
        return 1;
}
// Function to calculate hamming code
void find(int n,int input[])
{
    int i, p_n = 0, c_l, j, k;
    i = 0;
    // Find msg bits having set bit
    // at x'th position of number
    while (n > (int)pow(2, i) - (i + 1)) 
    {
        p_n++;
        i++;
    }
    c_l = p_n + n;
    j = k = 0;
    // Traverse the msgBits
    for (i = 0; i < c_l; i++) 
    {
        // Update the code
        if (i == ((int)pow(2, k) - 1)) 
        {
            code[i] = 0;
            k++;
        }
        // Update the code[i] to the
        // input character at index j
        else 
        {
            code[i] = input[j];
            j++;
        }
    }
    // Traverse and update the
    // hamming code
    for (i = 0; i < p_n; i++) 
    {
        // Find current position
        int position = (int)pow(2, i);
        // Find value at current position
        int value = ham_calc(position, c_l);
        // Update the code
        code[position - 1] = value;
    }
    // Print the Hamming Code
    for (i = 0; i < c_l; i++)
        printf("%d ", code[i]);
}
------------------------------------------------------------------------------------------------------------------------