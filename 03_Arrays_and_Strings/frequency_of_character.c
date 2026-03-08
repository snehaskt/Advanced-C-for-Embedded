
#include <stdio.h>

int main()
{
    char str[100];
    char chr[100];

    int i, j, k;
    int size = 0;
    int count;

    printf("Enter the string: ");
    scanf("%99s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        int found = 0;

        // check if character already processed
        for(k = 0; k < size; k++)
        {
            if(str[i] == chr[k])
            {
                found = 1;
                break;
            }
        }

        if(found)
            continue;

        count = 0;

        // count frequency
        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
                count++;
        }

        printf("%c - %d\n", str[i], count);

        chr[size++] = str[i];
    }

    return 0;
}


/*------------------------ The above Logic is my approch towards optimising memory ------------------------------------*/


/*#include <stdio.h>

  int main()
  {
  char str[100];
  int freq[256] = {0};

  printf("Enter the string: ");
  scanf("%99s", str);

// Count frequency
for(int i = 0; str[i] != '\0'; i++)
{
freq[(unsigned char)str[i]]++;
}

// Print result
for(int i = 0; i < 256; i++)
{
if(freq[i] > 0)
{
printf("%c - %d\n", i, freq[i]);
}
}

return 0;
}*/
