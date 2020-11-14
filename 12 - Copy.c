//source : https://prepinsta.com/c-program/to-replace-a-substring-in-a-string/
//Algorithm

//Start
//Accept the main string
//Accept the sub-string
//Accept the string, with which to replace the sub-string.
//Check if the sub-string is present in the main string or not
//If the sub-string is not present in the main string, terminate the program.
//If the substring is present in the main string, than continue.
//Iterate each character of the main string
//Replace the sub-string with the inputed string.
//Print the new string.




#include  <stdio.h>
#include  <string.h>
  int main() {
        char str[256], substr[128], replace[128], output[256];
        int i = 0, j = 0, flag = 0, start = 0;
        //Accepts all the inputs
        printf("Enter your input string:\n");
        gets(str);
        printf("Enter the string to be removed:\n");
        gets(substr);

        printf("Enter the string to replace:\n");
        gets(replace);
        str[strlen(str) - 1] = '\0';
        substr[strlen(substr) - 1] = '\0';
        replace[strlen(replace) - 1] =  '\0';

        // check whether the substring to be replaced is present 
        while (str[i] != '\0')
        {
                if (str[i] == substr[j]) 
                {
                        if (!flag)
                                start = i;
                        j++;
                        if (substr[j] == '\0')
                                break;
                        flag = 1;
                } 
                else 
                {
                        flag = start = j = 0;
                }
                i++;
        }

        if (substr[j] == '\0' && flag)
        {
                for (i = 0; i < start; i++)
                        output[i] = str[i];
                // replace substring with another string 
                for (j = 0; j < strlen(replace); j++) 
                {
                        output[i] = replace[j];
                        i++;
                }

                // copy remaining portion of the input string "str" 
                for (j = start + strlen(substr); j < strlen(str); j++)
                {
                        output[i] = str[j];
                        i++;
                }

                // print the final string 
                output[i] = '\0';
                printf("Output: %s\n", output);
        } else {
                printf("%s is not a substring of %s\n", substr, str);
        }
        return 0;
  }