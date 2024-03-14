#include<stdio.h>
#include<stdint.h>
#include<netinet/in.h>
#include<stdlib.h>


uint32_t nbo(char *file){

	FILE *fd = fopen(file, "rb");
	
	if(fd == NULL){
		printf("Error: There's no target file!");
		exit(1);
	}
	
	uint32_t arg;
	
	fread(&arg, sizeof(uint32_t), 1, fd);
	
	return ntohl(arg);

}

int main(int argc, char *argv[]){

	uint32_t arg1 = nbo(argv[1]);
	uint32_t arg2 = nbo(argv[2]);


	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", arg1, arg1, arg2, arg2, arg1+arg2, arg1+arg2);
	
}

