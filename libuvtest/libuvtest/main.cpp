#pragma comment (lib, "libuv.lib")
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "IPHLPAPI.lib") 
#pragma comment(lib, "Psapi.lib")



#include <stdio.h>
#include <stdlib.h>
#include <uv.h>	
#include <memory.h>

int main() {
	uv_loop_t *loop = (uv_loop_t*)malloc(sizeof(uv_loop_t));
	uv_loop_init(loop);

	printf("Now quitting.\n");
	uv_run(loop, UV_RUN_DEFAULT);

	uv_loop_close(loop);
	free(loop);
	return 0;
}
