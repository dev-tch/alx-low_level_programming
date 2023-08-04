#define BIG_END  0
#define LIT_END  1
/**
* get_endianness - determine the type of ordering bytes
* Return: (0 or 1)
*/
int get_endianness(void)
{
short int data = 0x0001;
char *ptr = (char *)&data;
return (ptr[0] ? LIT_END : BIG_END);
}
