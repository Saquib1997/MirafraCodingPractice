#include <stdio.h>
#include <stdint.h>
union abc{
	uint32_t x;
	char arr[4];
};
int main(){
	union abc var;
	var.x=0x12345678;
	char temp;
	temp=var.arr[0];
	var.arr[0]=var.arr[3];
	var.arr[3]=temp;
	temp=var.arr[1];
	var.arr[1]=var.arr[2];
	var.arr[2]=temp;
	uint8_t *ptr=&a;
	temp=*ptr;
	*ptr=*(ptr+3);
	*(ptr+3)=temp;

return 0;
}
