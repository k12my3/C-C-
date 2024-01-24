//ques-1
//pow(2,r)>=m+r+1
int calcRedundantBits(int dataBitsLength)
{
   int redundantBitsLength=0;
   int m=dataBitsLength;
    int i;
    for(i=0;i<=m;i++)	
    {
        if(pow(2,i)>=m+i+1)
        {
            redundantBitsLength=i;
            break;
        }
    }
    return redundantBitsLength;
}

//ques-2
int calcRedundantBits(int dataBitsLength)
{
   int redundantBitsLength=0;
   int m=dataBitsLength;
   for(int i=0;i<=m;i++)
   {
       if(pow(2,i)>=m+i+1)
       {
           redundantBitsLength=i;
           break;
       }
    }
    return redundantBitsLength;
}
void calcRedundantBitPositions(int dataBitsLength)
{
    int i,codewordlength,j;
    int redundantBitsLength=calcRedundantBits(dataBitsLength);   
    int m=dataBitsLength;
    int n=redundantBitsLength;
    codewordlength=n+m;
    // int redundantBitPositions[n];
    for(i=0;i<codewordlength;i++)
    {
        j=pow(2,i);
        if(j<=codewordlength)
        printf("%d ",j-1);
    }
}

//ques-3
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

//ques-4
int calcRedundantBits(int dataBitsLength)
{
   int redundantBitsLength=0;
   while((int)pow(2,redundantBitsLength)<(dataBitsLength+redundantBitsLength+1))
   {
       redundantBitsLength++;
   }
   return redundantBitsLength;
}
void calcRedundantBitPositions(int dataBitsLength)
{
    int i,codewordLength,j;
    int redundantBitsLength=calcRedundantBits(dataBitsLength);
    codewordLength= dataBitsLength+redundantBitsLength;
    int redundantBitPositions[10];
    // Traverse the msgBits
	for (i = 0; i < codewordLength; i++) 
    {
		// calculate positions
		if (i == ((int)pow(2, j) - 1)) 
        {
			redundantBitPositions[j]=i;
			printf("%d ",redundantBitPositions[j]);
			j++;
		}
	}
}