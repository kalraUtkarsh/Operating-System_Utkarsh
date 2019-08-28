  void reverse(const char *str) //you don't need to modify your string
   { 
      if (*str != '\0') //if the first character is not '\O' 
        reverse((str + 1)); // call again the function but with +1 in the pointer addr
      printf("%c", *str); // then print the character
    }

int main()
{
  char input[4096] = {0};

  printf("Enter a word please => ");
  scanf("%s", input);
  reverse(input);
  printf("\n");
  return (0);
}
