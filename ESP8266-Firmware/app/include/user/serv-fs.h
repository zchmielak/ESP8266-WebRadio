#include "c_types.h"

//#define CACHE_FLASH __attribute__((section(".irom0.rodata")))

struct servFile
{
	const char name[32];
	const char type[16];
	uint16_t size;
	char* content;
	struct servFile *next;
};

//ICACHE_STORE_ATTR ICACHE_RODATA_ATTR

char index_html[] ICACHE_STORE_ATTR ICACHE_RODATA_ATTR = {
  0x3c, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x0a, 0x09, 0x3c, 0x68, 0x65, 0x61,
  0x64, 0x3e, 0x0a, 0x09, 0x09, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x20, 0x63,
  0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x27, 0x75, 0x74, 0x66, 0x2d,
  0x38, 0x27, 0x3e, 0x0a, 0x09, 0x09, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20,
  0x72, 0x65, 0x6c, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 0x68,
  0x65, 0x65, 0x74, 0x22, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x73,
  0x74, 0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x22, 0x20, 0x74, 0x79,
  0x70, 0x65, 0x3d, 0x22, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x63, 0x73, 0x73,
  0x22, 0x2f, 0x3e, 0x0a, 0x09, 0x09, 0x3c, 0x74, 0x69, 0x74, 0x6c, 0x65,
  0x3e, 0x57, 0x65, 0x62, 0x72, 0x61, 0x64, 0x69, 0x6f, 0x20, 0x61, 0x64,
  0x6d, 0x69, 0x6e, 0x69, 0x73, 0x74, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e,
  0x20, 0x70, 0x61, 0x6e, 0x65, 0x6c, 0x3c, 0x2f, 0x74, 0x69, 0x74, 0x6c,
  0x65, 0x3e, 0x0a, 0x09, 0x3c, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x0a,
  0x09, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x0a, 0x09, 0x09, 0x3c, 0x64,
  0x69, 0x76, 0x20, 0x69, 0x64, 0x3d, 0x22, 0x4d, 0x41, 0x49, 0x4e, 0x22,
  0x3e, 0x0a, 0x09, 0x09, 0x09, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x69, 0x64,
  0x3d, 0x22, 0x48, 0x45, 0x41, 0x44, 0x22, 0x3e, 0x0a, 0x09, 0x09, 0x09,
  0x09, 0x3c, 0x69, 0x6d, 0x67, 0x20, 0x73, 0x72, 0x63, 0x3d, 0x22, 0x6c,
  0x6f, 0x67, 0x6f, 0x2e, 0x70, 0x6e, 0x67, 0x22, 0x3e, 0x3c, 0x70, 0x3e,
  0x57, 0x65, 0x62, 0x72, 0x61, 0x64, 0x69, 0x6f, 0x20, 0x61, 0x64, 0x6d,
  0x69, 0x6e, 0x69, 0x73, 0x74, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20,
  0x70, 0x61, 0x6e, 0x65, 0x6c, 0x3c, 0x2f, 0x70, 0x3e, 0x0a, 0x09, 0x09,
  0x09, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x3c,
  0x64, 0x69, 0x76, 0x20, 0x69, 0x64, 0x3d, 0x22, 0x43, 0x4f, 0x4e, 0x54,
  0x45, 0x4e, 0x54, 0x22, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x68,
  0x31, 0x3e, 0x4e, 0x6f, 0x77, 0x20, 0x70, 0x6c, 0x61, 0x79, 0x69, 0x6e,
  0x67, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x3c,
  0x70, 0x3e, 0x3c, 0x73, 0x70, 0x61, 0x6e, 0x20, 0x63, 0x6c, 0x61, 0x73,
  0x73, 0x3d, 0x22, 0x62, 0x6f, 0x6c, 0x64, 0x22, 0x3e, 0x4e, 0x61, 0x6d,
  0x65, 0x3a, 0x20, 0x3c, 0x2f, 0x73, 0x70, 0x61, 0x6e, 0x3e, 0x23, 0x49,
  0x43, 0x59, 0x2d, 0x4e, 0x41, 0x4d, 0x45, 0x23, 0x3c, 0x2f, 0x70, 0x3e,
  0x0a, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x70, 0x3e, 0x3c, 0x73, 0x70, 0x61,
  0x6e, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x62, 0x6f, 0x6c,
  0x64, 0x22, 0x3e, 0x4e, 0x6f, 0x74, 0x69, 0x63, 0x65, 0x3a, 0x20, 0x3c,
  0x2f, 0x73, 0x70, 0x61, 0x6e, 0x3e, 0x23, 0x49, 0x43, 0x59, 0x2d, 0x4e,
  0x4f, 0x54, 0x49, 0x43, 0x45, 0x23, 0x3c, 0x2f, 0x70, 0x3e, 0x0a, 0x09,
  0x09, 0x09, 0x09, 0x3c, 0x70, 0x3e, 0x3c, 0x73, 0x70, 0x61, 0x6e, 0x20,
  0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x62, 0x6f, 0x6c, 0x64, 0x22,
  0x3e, 0x47, 0x65, 0x6e, 0x72, 0x65, 0x3a, 0x20, 0x3c, 0x2f, 0x73, 0x70,
  0x61, 0x6e, 0x3e, 0x23, 0x49, 0x43, 0x59, 0x2d, 0x47, 0x45, 0x4e, 0x52,
  0x45, 0x23, 0x3c, 0x2f, 0x70, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x3c,
  0x70, 0x3e, 0x3c, 0x73, 0x70, 0x61, 0x6e, 0x20, 0x63, 0x6c, 0x61, 0x73,
  0x73, 0x3d, 0x22, 0x62, 0x6f, 0x6c, 0x64, 0x22, 0x3e, 0x55, 0x52, 0x4c,
  0x3a, 0x20, 0x3c, 0x2f, 0x73, 0x70, 0x61, 0x6e, 0x3e, 0x3c, 0x61, 0x20,
  0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x23, 0x49, 0x43, 0x59, 0x2d, 0x55,
  0x52, 0x4c, 0x23, 0x22, 0x20, 0x74, 0x61, 0x72, 0x67, 0x65, 0x74, 0x3d,
  0x22, 0x5f, 0x62, 0x6c, 0x61, 0x6e, 0x6b, 0x22, 0x3e, 0x23, 0x49, 0x43,
  0x59, 0x2d, 0x55, 0x52, 0x4c, 0x23, 0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f,
  0x70, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x70, 0x3e, 0x3c, 0x73,
  0x70, 0x61, 0x6e, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x62,
  0x6f, 0x6c, 0x64, 0x22, 0x3e, 0x42, 0x69, 0x74, 0x72, 0x61, 0x74, 0x65,
  0x3a, 0x20, 0x3c, 0x2f, 0x73, 0x70, 0x61, 0x6e, 0x3e, 0x23, 0x49, 0x43,
  0x59, 0x2d, 0x42, 0x49, 0x54, 0x52, 0x41, 0x54, 0x45, 0x23, 0x20, 0x6b,
  0x42, 0x2f, 0x73, 0x3c, 0x2f, 0x70, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09,
  0x3c, 0x68, 0x31, 0x3e, 0x53, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x20, 0x73,
  0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x0a,
  0x09, 0x09, 0x09, 0x09, 0x3c, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x61, 0x63,
  0x74, 0x69, 0x6f, 0x6e, 0x22, 0x2f, 0x22, 0x20, 0x6d, 0x65, 0x74, 0x68,
  0x6f, 0x64, 0x3d, 0x22, 0x47, 0x45, 0x54, 0x22, 0x3e, 0x0a, 0x09, 0x09,
  0x09, 0x09, 0x09, 0x3c, 0x70, 0x3e, 0x53, 0x65, 0x6c, 0x65, 0x63, 0x74,
  0x20, 0x73, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x3c, 0x62, 0x72,
  0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x73, 0x65, 0x6c, 0x65,
  0x63, 0x74, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x6f,
  0x70, 0x74, 0x69, 0x6f, 0x6e, 0x3e, 0x41, 0x6e, 0x74, 0x79, 0x72, 0x61,
  0x64, 0x69, 0x6f, 0x20, 0x4b, 0x61, 0x74, 0x6f, 0x77, 0x69, 0x63, 0x65,
  0x3c, 0x2f, 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x3e, 0x0a, 0x09, 0x09,
  0x09, 0x09, 0x09, 0x09, 0x3c, 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x3e,
  0x41, 0x6e, 0x74, 0x79, 0x72, 0x61, 0x64, 0x69, 0x6f, 0x20, 0x4b, 0x72,
  0x61, 0x6b, 0xc3, 0xb3, 0x77, 0x3c, 0x2f, 0x6f, 0x70, 0x74, 0x69, 0x6f,
  0x6e, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x6f, 0x70,
  0x74, 0x69, 0x6f, 0x6e, 0x3e, 0x4b, 0x65, 0x72, 0x72, 0x61, 0x6e, 0x67,
  0x20, 0x52, 0x61, 0x64, 0x69, 0x6f, 0x3c, 0x2f, 0x6f, 0x70, 0x74, 0x69,
  0x6f, 0x6e, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x2f, 0x73,
  0x65, 0x6c, 0x65, 0x63, 0x74, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09,
  0x3c, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d,
  0x22, 0x73, 0x75, 0x62, 0x6d, 0x69, 0x74, 0x22, 0x20, 0x76, 0x61, 0x6c,
  0x75, 0x65, 0x3d, 0x22, 0x50, 0x6c, 0x61, 0x79, 0x22, 0x3e, 0x0a, 0x09,
  0x09, 0x09, 0x09, 0x09, 0x3c, 0x2f, 0x70, 0x3e, 0x0a, 0x09, 0x09, 0x09,
  0x09, 0x3c, 0x2f, 0x66, 0x6f, 0x72, 0x6d, 0x3e, 0x0a, 0x09, 0x09, 0x09,
  0x09, 0x3c, 0x68, 0x31, 0x3e, 0x41, 0x64, 0x64, 0x20, 0x73, 0x74, 0x61,
  0x74, 0x69, 0x6f, 0x6e, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x0a, 0x09, 0x09,
  0x09, 0x09, 0x3c, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x61, 0x63, 0x74, 0x69,
  0x6f, 0x6e, 0x22, 0x2f, 0x22, 0x20, 0x6d, 0x65, 0x74, 0x68, 0x6f, 0x64,
  0x3d, 0x22, 0x47, 0x45, 0x54, 0x22, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09,
  0x09, 0x3c, 0x70, 0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x73,
  0x70, 0x61, 0x6e, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x62,
  0x6f, 0x6c, 0x64, 0x22, 0x3e, 0x55, 0x52, 0x4c, 0x3a, 0x20, 0x3c, 0x2f,
  0x73, 0x70, 0x61, 0x6e, 0x3e, 0x3c, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x20,
  0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x74, 0x65, 0x78, 0x74, 0x22, 0x20,
  0x6e, 0x61, 0x6d, 0x65, 0x3d, 0x22, 0x75, 0x22, 0x3e, 0x3c, 0x62, 0x72,
  0x3e, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x73, 0x70, 0x61, 0x6e,
  0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x62, 0x6f, 0x6c, 0x64,
  0x22, 0x3e, 0x50, 0x61, 0x74, 0x68, 0x3a, 0x20, 0x3c, 0x2f, 0x73, 0x70,
  0x61, 0x6e, 0x3e, 0x3c, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79,
  0x70, 0x65, 0x3d, 0x22, 0x74, 0x65, 0x78, 0x74, 0x22, 0x20, 0x6e, 0x61,
  0x6d, 0x65, 0x3d, 0x22, 0x70, 0x22, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65,
  0x3d, 0x22, 0x2f, 0x22, 0x3e, 0x3c, 0x62, 0x72, 0x3e, 0x0a, 0x09, 0x09,
  0x09, 0x09, 0x09, 0x3c, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79,
  0x70, 0x65, 0x3d, 0x22, 0x73, 0x75, 0x62, 0x6d, 0x69, 0x74, 0x22, 0x20,
  0x76, 0x61, 0x6c, 0x75, 0x65, 0x3d, 0x22, 0x41, 0x64, 0x64, 0x22, 0x3e,
  0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3c, 0x2f, 0x70, 0x3e, 0x0a, 0x09,
  0x09, 0x09, 0x09, 0x3c, 0x2f, 0x66, 0x6f, 0x72, 0x6d, 0x3e, 0x0a, 0x09,
  0x09, 0x09, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x09, 0x09, 0x3c,
  0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x09, 0x3c, 0x2f, 0x62, 0x6f, 0x64,
  0x79, 0x3e, 0x0a, 0x3c, 0x2f, 0x48, 0x54, 0x4d, 0x4c, 0x3e
};

char style_css[] ICACHE_STORE_ATTR ICACHE_RODATA_ATTR = {
  0x68, 0x74, 0x6d, 0x6c, 0x2c, 0x20, 0x62, 0x6f, 0x64, 0x79, 0x0a, 0x7b,
  0x0a, 0x09, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x20, 0x30, 0x3b,
  0x0a, 0x09, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x20, 0x30,
  0x3b, 0x0a, 0x09, 0x66, 0x6f, 0x6e, 0x74, 0x3a, 0x20, 0x31, 0x32, 0x70,
  0x78, 0x20, 0x22, 0x54, 0x72, 0x65, 0x62, 0x75, 0x63, 0x68, 0x65, 0x74,
  0x20, 0x4d, 0x53, 0x22, 0x3b, 0x0a, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x72,
  0x3a, 0x20, 0x23, 0x32, 0x32, 0x32, 0x3b, 0x0a, 0x09, 0x62, 0x61, 0x63,
  0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f, 0x6c, 0x6f,
  0x72, 0x3a, 0x20, 0x23, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3b, 0x0a,
  0x7d, 0x0a, 0x0a, 0x23, 0x4d, 0x41, 0x49, 0x4e, 0x0a, 0x7b, 0x0a, 0x09,
  0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x20, 0x31, 0x30, 0x30, 0x25,
  0x3b, 0x0a, 0x09, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3a, 0x20, 0x31, 0x30,
  0x30, 0x25, 0x3b, 0x0a, 0x09, 0x6f, 0x76, 0x65, 0x72, 0x66, 0x6c, 0x6f,
  0x77, 0x3a, 0x20, 0x68, 0x69, 0x64, 0x64, 0x65, 0x6e, 0x3b, 0x0a, 0x09,
  0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x20, 0x30, 0x3b, 0x0a, 0x7d,
  0x0a, 0x0a, 0x23, 0x48, 0x45, 0x41, 0x44, 0x0a, 0x7b, 0x0a, 0x09, 0x77,
  0x69, 0x64, 0x74, 0x68, 0x3a, 0x20, 0x31, 0x30, 0x30, 0x25, 0x3b, 0x0a,
  0x09, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x20, 0x36, 0x35, 0x70,
  0x78, 0x3b, 0x0a, 0x09, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x2d,
  0x74, 0x6f, 0x70, 0x3a, 0x20, 0x35, 0x70, 0x78, 0x3b, 0x0a, 0x09, 0x66,
  0x6c, 0x6f, 0x61, 0x74, 0x3a, 0x20, 0x6c, 0x65, 0x66, 0x74, 0x3b, 0x0a,
  0x09, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d,
  0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x32, 0x42, 0x39, 0x30,
  0x32, 0x31, 0x3b, 0x0a, 0x09, 0x6f, 0x76, 0x65, 0x72, 0x66, 0x6c, 0x6f,
  0x77, 0x3a, 0x20, 0x68, 0x69, 0x64, 0x64, 0x65, 0x6e, 0x3b, 0x0a, 0x09,
  0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x46, 0x30, 0x46, 0x30,
  0x46, 0x30, 0x3b, 0x0a, 0x09, 0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x73, 0x69,
  0x7a, 0x65, 0x3a, 0x20, 0x32, 0x32, 0x70, 0x78, 0x3b, 0x0a, 0x09, 0x6c,
  0x69, 0x6e, 0x65, 0x2d, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x20,
  0x36, 0x30, 0x70, 0x78, 0x3b, 0x0a, 0x09, 0x70, 0x61, 0x64, 0x64, 0x69,
  0x6e, 0x67, 0x2d, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x20, 0x32, 0x30, 0x70,
  0x78, 0x3b, 0x0a, 0x09, 0x62, 0x6f, 0x78, 0x2d, 0x73, 0x68, 0x61, 0x64,
  0x6f, 0x77, 0x3a, 0x20, 0x30, 0x70, 0x78, 0x20, 0x31, 0x30, 0x70, 0x78,
  0x20, 0x31, 0x30, 0x70, 0x78, 0x20, 0x30, 0x70, 0x78, 0x20, 0x23, 0x32,
  0x32, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x23, 0x48, 0x45, 0x41, 0x44,
  0x20, 0x70, 0x0a, 0x7b, 0x0a, 0x09, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61,
  0x79, 0x3a, 0x20, 0x69, 0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x3b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x76, 0x65, 0x72, 0x74, 0x69, 0x63, 0x61, 0x6c, 0x2d,
  0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x20, 0x74, 0x6f, 0x70, 0x3b, 0x0a,
  0x09, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x2d, 0x6c, 0x65, 0x66, 0x74,
  0x3a, 0x20, 0x33, 0x30, 0x70, 0x78, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x23,
  0x43, 0x4f, 0x4e, 0x54, 0x45, 0x4e, 0x54, 0x0a, 0x7b, 0x0a, 0x09, 0x77,
  0x69, 0x64, 0x74, 0x68, 0x3a, 0x20, 0x35, 0x35, 0x25, 0x3b, 0x0a, 0x09,
  0x6f, 0x76, 0x65, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x3a, 0x20, 0x68, 0x69,
  0x64, 0x64, 0x65, 0x6e, 0x3b, 0x0a, 0x09, 0x6d, 0x69, 0x6e, 0x2d, 0x68,
  0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x28,
  0x31, 0x30, 0x30, 0x25, 0x20, 0x2d, 0x20, 0x37, 0x30, 0x70, 0x78, 0x29,
  0x3b, 0x0a, 0x09, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x2d, 0x6c, 0x65,
  0x66, 0x74, 0x3a, 0x20, 0x61, 0x75, 0x74, 0x6f, 0x3b, 0x0a, 0x09, 0x6d,
  0x61, 0x72, 0x67, 0x69, 0x6e, 0x2d, 0x72, 0x69, 0x67, 0x68, 0x74, 0x3a,
  0x20, 0x61, 0x75, 0x74, 0x6f, 0x3b, 0x0a, 0x09, 0x70, 0x61, 0x64, 0x64,
  0x69, 0x6e, 0x67, 0x2d, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x20, 0x32, 0x30,
  0x70, 0x78, 0x3b, 0x0a, 0x09, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67,
  0x2d, 0x72, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x20, 0x32, 0x30, 0x70, 0x78,
  0x3b, 0x0a, 0x09, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x2d, 0x74,
  0x6f, 0x70, 0x3a, 0x20, 0x33, 0x30, 0x70, 0x78, 0x3b, 0x0a, 0x09, 0x62,
  0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f,
  0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x45, 0x30, 0x45, 0x30, 0x45, 0x30,
  0x3b, 0x0a, 0x09, 0x62, 0x6f, 0x78, 0x2d, 0x73, 0x68, 0x61, 0x64, 0x6f,
  0x77, 0x3a, 0x20, 0x31, 0x30, 0x70, 0x78, 0x20, 0x35, 0x70, 0x78, 0x20,
  0x31, 0x30, 0x70, 0x78, 0x20, 0x30, 0x70, 0x78, 0x20, 0x23, 0x32, 0x32,
  0x32, 0x2c, 0x20, 0x2d, 0x31, 0x30, 0x70, 0x78, 0x20, 0x36, 0x70, 0x78,
  0x20, 0x31, 0x30, 0x70, 0x78, 0x20, 0x30, 0x70, 0x78, 0x20, 0x23, 0x32,
  0x32, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x23, 0x43, 0x4f, 0x4e, 0x54,
  0x45, 0x4e, 0x54, 0x20, 0x68, 0x31, 0x0a, 0x7b, 0x0a, 0x09, 0x66, 0x6f,
  0x6e, 0x74, 0x3a, 0x20, 0x32, 0x32, 0x70, 0x78, 0x20, 0x22, 0x54, 0x72,
  0x65, 0x62, 0x75, 0x63, 0x68, 0x65, 0x74, 0x20, 0x4d, 0x53, 0x22, 0x3b,
  0x0a, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x46, 0x30,
  0x46, 0x30, 0x46, 0x30, 0x3b, 0x0a, 0x09, 0x62, 0x61, 0x63, 0x6b, 0x67,
  0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a,
  0x20, 0x23, 0x32, 0x42, 0x39, 0x30, 0x32, 0x31, 0x3b, 0x0a, 0x09, 0x70,
  0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x20, 0x32, 0x70, 0x78, 0x3b,
  0x0a, 0x09, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x3a, 0x20, 0x69,
  0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x2d, 0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x3b,
  0x0a, 0x7d, 0x0a, 0x0a, 0x23, 0x43, 0x4f, 0x4e, 0x54, 0x45, 0x4e, 0x54,
  0x20, 0x70, 0x0a, 0x7b, 0x0a, 0x09, 0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x73,
  0x69, 0x7a, 0x65, 0x3a, 0x20, 0x31, 0x36, 0x70, 0x78, 0x3b, 0x0a, 0x09,
  0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x2d, 0x6c, 0x65, 0x66, 0x74, 0x3a,
  0x20, 0x31, 0x30, 0x70, 0x78, 0x3b, 0x0a, 0x09, 0x6d, 0x61, 0x72, 0x67,
  0x69, 0x6e, 0x2d, 0x74, 0x6f, 0x70, 0x3a, 0x20, 0x30, 0x70, 0x78, 0x3b,
  0x0a, 0x09, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x2d, 0x62, 0x6f, 0x74,
  0x74, 0x6f, 0x6d, 0x3a, 0x20, 0x35, 0x70, 0x78, 0x3b, 0x0a, 0x09, 0x6c,
  0x69, 0x6e, 0x65, 0x2d, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x20,
  0x31, 0x2e, 0x35, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x23, 0x43, 0x4f, 0x4e,
  0x54, 0x45, 0x4e, 0x54, 0x20, 0x61, 0x2c, 0x20, 0x61, 0x3a, 0x76, 0x69,
  0x73, 0x69, 0x74, 0x65, 0x64, 0x0a, 0x7b, 0x0a, 0x09, 0x66, 0x6f, 0x6e,
  0x74, 0x2d, 0x73, 0x69, 0x7a, 0x65, 0x3a, 0x20, 0x31, 0x36, 0x70, 0x78,
  0x3b, 0x0a, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x32,
  0x32, 0x32, 0x3b, 0x0a, 0x09, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x64, 0x65,
  0x63, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, 0x6e, 0x6f,
  0x6e, 0x65, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x23, 0x43, 0x4f, 0x4e, 0x54,
  0x45, 0x4e, 0x54, 0x20, 0x61, 0x3a, 0x68, 0x6f, 0x76, 0x65, 0x72, 0x0a,
  0x7b, 0x0a, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x36,
  0x36, 0x36, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x23, 0x43, 0x4f, 0x4e, 0x54,
  0x45, 0x4e, 0x54, 0x20, 0x73, 0x70, 0x61, 0x6e, 0x2e, 0x62, 0x6f, 0x6c,
  0x64, 0x0a, 0x7b, 0x0a, 0x09, 0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x77, 0x65,
  0x69, 0x67, 0x68, 0x74, 0x3a, 0x20, 0x39, 0x30, 0x30, 0x3b, 0x0a, 0x7d,
  0x0a, 0x0a, 0x23, 0x43, 0x4f, 0x4e, 0x54, 0x45, 0x4e, 0x54, 0x20, 0x66,
  0x6f, 0x72, 0x6d, 0x0a, 0x7b, 0x0a, 0x09, 0x66, 0x6f, 0x6e, 0x74, 0x3a,
  0x20, 0x31, 0x36, 0x70, 0x78, 0x20, 0x22, 0x54, 0x72, 0x65, 0x62, 0x75,
  0x63, 0x68, 0x65, 0x74, 0x20, 0x4d, 0x53, 0x22, 0x3b, 0x0a, 0x7d
};

char logo_png[] ICACHE_STORE_ATTR ICACHE_RODATA_ATTR = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c,
  0x08, 0x06, 0x00, 0x00, 0x00, 0x3a, 0xfc, 0xd9, 0x72, 0x00, 0x00, 0x00,
  0x06, 0x62, 0x4b, 0x47, 0x44, 0x00, 0x2b, 0x00, 0x90, 0x00, 0x21, 0xfe,
  0x28, 0x0d, 0xc4, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00,
  0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18,
  0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4d, 0x45, 0x07, 0xdf, 0x03, 0x0e,
  0x11, 0x2d, 0x24, 0x89, 0x0e, 0x7e, 0xc0, 0x00, 0x00, 0x0b, 0x57, 0x49,
  0x44, 0x41, 0x54, 0x68, 0xde, 0xd5, 0x9b, 0x7f, 0x4c, 0xd4, 0xe7, 0x1d,
  0xc7, 0x5f, 0xdf, 0xef, 0xf7, 0xee, 0x38, 0x4e, 0x5c, 0x8a, 0x9d, 0x15,
  0x29, 0xa7, 0x8f, 0x34, 0x05, 0x2a, 0xcd, 0x4a, 0xc3, 0x8c, 0xb1, 0x3f,
  0xd2, 0x39, 0x60, 0xd8, 0x95, 0xd2, 0x34, 0x50, 0x49, 0x4d, 0x75, 0xa5,
  0x3f, 0xd2, 0x18, 0x5b, 0x5d, 0xd4, 0xa4, 0xb6, 0xa4, 0x36, 0x35, 0xa5,
  0x6e, 0x69, 0x13, 0xb1, 0xb7, 0xa6, 0xd2, 0xe2, 0xe2, 0x18, 0x89, 0x50,
  0x34, 0x4d, 0x4a, 0x0c, 0xb8, 0xad, 0xb3, 0x53, 0x87, 0x86, 0x89, 0xd3,
  0x71, 0xb6, 0xd4, 0xa4, 0xe1, 0x61, 0xc5, 0xda, 0x31, 0xa9, 0x07, 0x2b,
  0xb9, 0x72, 0xc7, 0xf7, 0x7b, 0xfb, 0x83, 0xbb, 0xa7, 0xa7, 0x50, 0x7b,
  0x77, 0x1c, 0x6a, 0xdf, 0x09, 0xe1, 0xcb, 0x97, 0x7b, 0x3e, 0xcf, 0xf3,
  0x7e, 0x3e, 0xbf, 0x9e, 0xe7, 0xf3, 0x3c, 0xa7, 0x31, 0x43, 0x90, 0x52,
  0xce, 0x06, 0x16, 0x85, 0x7f, 0x0a, 0x80, 0x3c, 0x60, 0x21, 0x30, 0x07,
  0xf8, 0x51, 0xf8, 0x63, 0x23, 0xc0, 0x57, 0x40, 0x3f, 0xd0, 0x0b, 0x9c,
  0x02, 0xfa, 0x80, 0x3e, 0x21, 0xc4, 0xff, 0x66, 0x62, 0x5c, 0xda, 0x0c,
  0x10, 0x2d, 0x06, 0x5e, 0x03, 0x96, 0x4c, 0x53, 0xd4, 0x3f, 0x80, 0x17,
  0x85, 0x10, 0x7f, 0xb9, 0x6e, 0x08, 0x4b, 0x29, 0x11, 0x42, 0x20, 0xa5,
  0xcc, 0x01, 0xb6, 0x03, 0x3f, 0x0b, 0x6b, 0x30, 0x99, 0xf8, 0x0a, 0xf8,
  0x08, 0x78, 0x41, 0x08, 0x71, 0x36, 0xd2, 0xe7, 0xb5, 0x22, 0x9c, 0x0b,
  0x6c, 0x03, 0x56, 0x72, 0x75, 0xf0, 0x1e, 0xb0, 0x55, 0x08, 0xf1, 0xe9,
  0x55, 0x27, 0x2c, 0xa5, 0xdc, 0x03, 0xfc, 0x8a, 0x6b, 0x83, 0x3f, 0x08,
  0x21, 0x1e, 0xbf, 0x2a, 0x84, 0xa5, 0x94, 0xcb, 0xc2, 0x33, 0x9d, 0xc5,
  0xb5, 0xc5, 0x00, 0xb0, 0x52, 0x08, 0x71, 0x2c, 0x9e, 0x46, 0x7a, 0xac,
  0xbe, 0x1a, 0xfe, 0xbd, 0x19, 0xe8, 0xbc, 0x0e, 0xc8, 0x12, 0x1e, 0x43,
  0x67, 0x78, 0x4c, 0x6a, 0x8c, 0x49, 0xd3, 0xb0, 0x94, 0xf2, 0xaf, 0xc0,
  0x72, 0xae, 0x4f, 0x1c, 0x12, 0x42, 0xfc, 0x3c, 0x69, 0x84, 0xa5, 0x94,
  0x47, 0x81, 0xbb, 0xb9, 0xbe, 0xf1, 0x77, 0x21, 0xc4, 0x3d, 0x09, 0x9b,
  0x74, 0x94, 0x19, 0x1f, 0xf9, 0x01, 0x90, 0x05, 0xb8, 0x3b, 0x3c, 0xd6,
  0x2b, 0x9a, 0xb7, 0xf6, 0x3d, 0x9a, 0xfd, 0x13, 0x50, 0xc2, 0x0f, 0x0b,
  0x7f, 0x16, 0x42, 0xfc, 0x22, 0x11, 0x0d, 0xaf, 0x8f, 0x85, 0xac, 0x61,
  0x18, 0xd4, 0xd7, 0xd7, 0xb3, 0x7e, 0xfd, 0x7a, 0x7a, 0x7a, 0x7a, 0xd0,
  0x75, 0x3d, 0x69, 0x23, 0xd7, 0x75, 0x1d, 0xaf, 0xd7, 0xcb, 0xfa, 0xf5,
  0xeb, 0xa9, 0xaf, 0xaf, 0xc7, 0x30, 0x8c, 0x58, 0x9a, 0x95, 0x84, 0xc7,
  0x1e, 0xbb, 0x86, 0xa5, 0x94, 0x3f, 0x0d, 0x2f, 0xed, 0xbe, 0x97, 0x6c,
  0x47, 0x47, 0x07, 0x1e, 0x8f, 0x07, 0xbb, 0xdd, 0x8e, 0xc3, 0xe1, 0x60,
  0xff, 0xfe, 0xfd, 0x04, 0x02, 0x81, 0xa4, 0x10, 0x76, 0x38, 0x1c, 0x54,
  0x54, 0x54, 0x10, 0x08, 0x04, 0x08, 0x06, 0x83, 0x3c, 0xf7, 0xdc, 0x73,
  0xac, 0x58, 0xb1, 0x02, 0xd3, 0x34, 0x63, 0x69, 0xbe, 0x44, 0x08, 0x71,
  0x22, 0x56, 0x0d, 0xb7, 0xc6, 0x22, 0xf1, 0xdc, 0xb9, 0x73, 0xec, 0xda,
  0xb5, 0x0b, 0xbb, 0xdd, 0x8e, 0x69, 0x9a, 0x3c, 0xf2, 0xc8, 0x23, 0xb1,
  0x0e, 0x26, 0x26, 0x98, 0xa6, 0x49, 0x65, 0x65, 0x25, 0xa6, 0x69, 0x62,
  0xb7, 0xdb, 0xd9, 0xb5, 0x6b, 0x17, 0xe7, 0xce, 0x9d, 0x8b, 0xb5, 0x79,
  0x6b, 0x4c, 0x26, 0x2d, 0xa5, 0xfc, 0x1d, 0x20, 0x62, 0x99, 0xfd, 0x96,
  0x96, 0x16, 0xf5, 0x77, 0x4e, 0x4e, 0x8e, 0x1a, 0x9c, 0xdf, 0xef, 0x67,
  0xe3, 0xc6, 0x8d, 0x54, 0x57, 0x57, 0xd3, 0xd9, 0xd9, 0x19, 0x33, 0xc1,
  0xce, 0xce, 0x4e, 0xaa, 0xab, 0xab, 0xd9, 0xb8, 0x71, 0x23, 0x7e, 0xbf,
  0x5f, 0x4d, 0x62, 0x4e, 0x4e, 0x8e, 0xfa, 0x4c, 0x4b, 0x4b, 0x0b, 0x0e,
  0x87, 0x23, 0x16, 0x71, 0x22, 0xcc, 0x65, 0x6a, 0xc2, 0x52, 0x4a, 0xa4,
  0x94, 0x8b, 0x80, 0x75, 0xb1, 0x48, 0x1b, 0x1a, 0x1a, 0xa2, 0xbd, 0xbd,
  0x1d, 0x80, 0x40, 0x20, 0xc0, 0xa6, 0x4d, 0x9b, 0xb0, 0x2c, 0x0b, 0x87,
  0xc3, 0x41, 0x43, 0x43, 0x03, 0xfd, 0xfd, 0xfd, 0x8c, 0x8c, 0x8c, 0x70,
  0xf0, 0xe0, 0xc1, 0xc9, 0x7e, 0xa4, 0x69, 0x68, 0xda, 0x64, 0x6f, 0x3a,
  0x78, 0xf0, 0x20, 0x23, 0x23, 0x23, 0xf4, 0xf7, 0xf7, 0xd3, 0xd0, 0xd0,
  0x80, 0xc3, 0xe1, 0xc0, 0xb2, 0x2c, 0x36, 0x6d, 0xda, 0xa4, 0xdc, 0xa4,
  0xbd, 0xbd, 0x9d, 0xa1, 0xa1, 0xa1, 0x58, 0xe7, 0x70, 0x9d, 0x94, 0x72,
  0x51, 0x74, 0xd4, 0x56, 0x84, 0xc3, 0x3b, 0x90, 0x9a, 0x58, 0x25, 0xed,
  0xdb, 0xb7, 0x8f, 0xd4, 0xd4, 0xd4, 0x89, 0x28, 0x51, 0x52, 0x82, 0xdb,
  0xed, 0x06, 0xa0, 0xa7, 0xa7, 0x87, 0x8e, 0x8e, 0x0e, 0x00, 0xc6, 0xc6,
  0xc6, 0xa8, 0xac, 0xac, 0x9c, 0xd4, 0xf6, 0xe2, 0xc5, 0x8b, 0x5c, 0xbc,
  0x78, 0x71, 0xd2, 0xfb, 0xca, 0xca, 0x4a, 0xc6, 0xc6, 0xc6, 0x00, 0xe8,
  0xe8, 0xe8, 0xa0, 0xa7, 0xa7, 0x07, 0x00, 0xb7, 0xdb, 0x4d, 0x49, 0xc9,
  0x44, 0xfc, 0x4c, 0x4d, 0x4d, 0x65, 0xdf, 0xbe, 0x7d, 0xf1, 0x78, 0x46,
  0x4d, 0xf4, 0xee, 0x2a, 0x5a, 0xc3, 0x37, 0x03, 0x4f, 0xc6, 0x2a, 0xe5,
  0xcc, 0x99, 0x33, 0x2a, 0x22, 0x97, 0x94, 0x94, 0x28, 0x0d, 0xb4, 0xb4,
  0xb4, 0xe0, 0x74, 0x3a, 0x01, 0xa8, 0xaa, 0xaa, 0xa2, 0xb0, 0xb0, 0x10,
  0x00, 0x97, 0xcb, 0x45, 0x63, 0x63, 0x23, 0x6b, 0xd6, 0xac, 0x61, 0xf5,
  0xea, 0xd5, 0xac, 0x5e, 0xbd, 0x9a, 0x35, 0x6b, 0xd6, 0xd0, 0xd8, 0xd8,
  0x88, 0xcb, 0xe5, 0x02, 0xa0, 0xb0, 0xb0, 0x90, 0xaa, 0xaa, 0x2a, 0x00,
  0x9c, 0x4e, 0xa7, 0x72, 0x99, 0x40, 0x20, 0xa0, 0x08, 0xeb, 0xba, 0xce,
  0x99, 0x33, 0x67, 0xe2, 0x21, 0xfc, 0x64, 0x98, 0xdb, 0x24, 0x1f, 0xde,
  0x1e, 0x8f, 0x94, 0x0b, 0x17, 0x2e, 0xa8, 0xe7, 0x9b, 0x6f, 0x56, 0xf2,
  0xe8, 0xeb, 0xeb, 0x53, 0xcf, 0xa5, 0xa5, 0xa5, 0x6a, 0x22, 0x3c, 0x1e,
  0x0f, 0xad, 0xad, 0xad, 0x8c, 0x8e, 0x8e, 0xe2, 0x70, 0x38, 0x70, 0x38,
  0x1c, 0x8c, 0x8e, 0x8e, 0xd2, 0xda, 0xda, 0x8a, 0xc7, 0xe3, 0x51, 0xc4,
  0x4a, 0x4b, 0x4b, 0xa7, 0x94, 0x15, 0xdd, 0x47, 0x74, 0xdf, 0x31, 0x62,
  0xfb, 0x54, 0x84, 0x8b, 0xe3, 0x91, 0x30, 0x32, 0x32, 0xa2, 0x9e, 0xd3,
  0xd3, 0xd3, 0x55, 0x54, 0x8d, 0xf8, 0x97, 0xcd, 0x66, 0x23, 0x33, 0x33,
  0x53, 0x7d, 0xa6, 0xa3, 0xa3, 0x63, 0xca, 0x60, 0xe3, 0x70, 0x38, 0x94,
  0x0b, 0x00, 0x64, 0x66, 0x66, 0x62, 0xb3, 0xd9, 0x54, 0x9c, 0x88, 0x44,
  0xfd, 0x48, 0x1f, 0x97, 0xf7, 0x1d, 0x23, 0x8a, 0x2f, 0x21, 0x2c, 0xa5,
  0xbc, 0x13, 0x98, 0x1f, 0x6b, 0xeb, 0x48, 0x5e, 0x0c, 0x85, 0x42, 0xcc,
  0x99, 0x33, 0x07, 0xc3, 0x30, 0xd0, 0x34, 0x8d, 0x81, 0x81, 0x01, 0x00,
  0x2c, 0xcb, 0x22, 0x37, 0x37, 0x17, 0x4d, 0xd3, 0xd0, 0x75, 0x9d, 0x93,
  0x27, 0x4f, 0x2a, 0xdf, 0x9c, 0x0a, 0x63, 0x63, 0x63, 0x9c, 0x3c, 0x79,
  0x12, 0x5d, 0xd7, 0xd1, 0x34, 0x8d, 0xdc, 0xdc, 0x5c, 0x2c, 0xcb, 0x9a,
  0xd8, 0x03, 0x0e, 0x0c, 0xa0, 0x69, 0x1a, 0x86, 0x61, 0x30, 0x67, 0xce,
  0x1c, 0x42, 0xa1, 0x10, 0xc1, 0x60, 0x30, 0xde, 0x5c, 0x3f, 0x3f, 0xcc,
  0x51, 0x69, 0xb8, 0x36, 0xde, 0xfc, 0x18, 0x81, 0xdd, 0x6e, 0x57, 0xcf,
  0xc1, 0x60, 0x70, 0xca, 0xf7, 0x7e, 0xbf, 0x7f, 0xca, 0xa8, 0x1c, 0x1d,
  0xb5, 0xfd, 0x7e, 0x7f, 0x5c, 0x32, 0x13, 0xc8, 0xf7, 0xb5, 0x00, 0xba,
  0x94, 0xd2, 0x0e, 0xdc, 0x1f, 0x4f, 0xcb, 0xd4, 0xd4, 0x54, 0xa5, 0x8d,
  0x88, 0x3f, 0x85, 0x42, 0x21, 0x32, 0x32, 0x32, 0x08, 0x85, 0x42, 0x68,
  0x9a, 0x46, 0x5f, 0x5f, 0x1f, 0x9a, 0xa6, 0x61, 0x59, 0x96, 0x0a, 0x5c,
  0x57, 0x42, 0x61, 0x61, 0x21, 0x96, 0x65, 0x5d, 0xd2, 0x36, 0x5a, 0x66,
  0xc4, 0x77, 0x23, 0x56, 0x13, 0xc9, 0x10, 0x71, 0xe0, 0x7e, 0x29, 0xa5,
  0x5d, 0x0f, 0x97, 0x51, 0xe3, 0x46, 0x5a, 0x5a, 0x9a, 0x9a, 0xe9, 0xe1,
  0xe1, 0x61, 0xf5, 0x6e, 0xf6, 0xec, 0xd9, 0x68, 0x9a, 0x86, 0xcf, 0xe7,
  0x53, 0xfe, 0xec, 0x74, 0x3a, 0xc9, 0xcf, 0xcf, 0x57, 0x03, 0x8f, 0x46,
  0x28, 0x14, 0x22, 0x3f, 0x3f, 0x5f, 0x45, 0xf6, 0xa1, 0xa1, 0x21, 0x7c,
  0x3e, 0x1f, 0x9a, 0xa6, 0x31, 0x7b, 0xf6, 0x6c, 0xd5, 0xcf, 0xf0, 0xf0,
  0xb0, 0xd2, 0x6a, 0xe4, 0x5d, 0x02, 0x58, 0xa4, 0x03, 0xee, 0x44, 0x5a,
  0xde, 0x78, 0xe3, 0x8d, 0xea, 0x79, 0x70, 0x70, 0xf0, 0xdb, 0x32, 0x44,
  0x56, 0x96, 0x32, 0xd3, 0xee, 0xee, 0x6e, 0x95, 0xba, 0xb6, 0x6d, 0xdb,
  0x46, 0x76, 0x76, 0xf6, 0x24, 0x39, 0xd9, 0xd9, 0xd9, 0x6c, 0xdb, 0xb6,
  0x4d, 0xa5, 0x9c, 0xee, 0xee, 0x6e, 0x65, 0xfe, 0x11, 0x59, 0x97, 0xf7,
  0x11, 0xdd, 0x77, 0x9c, 0x70, 0xeb, 0xc0, 0x6d, 0x89, 0xb4, 0x5c, 0xb8,
  0x70, 0xa1, 0xd2, 0x58, 0x57, 0x57, 0x97, 0xda, 0xc9, 0x14, 0x17, 0x17,
  0x2b, 0xbf, 0xab, 0xab, 0xab, 0x53, 0xbe, 0x69, 0xb3, 0xd9, 0x58, 0xbb,
  0x76, 0xed, 0x24, 0x39, 0x6b, 0xd7, 0xae, 0x55, 0x51, 0xd9, 0xef, 0xf7,
  0x53, 0x57, 0x57, 0xa7, 0x7c, 0xb7, 0xb8, 0xb8, 0x58, 0x6d, 0x52, 0xba,
  0xba, 0xba, 0x94, 0x45, 0x2c, 0x5c, 0xb8, 0x30, 0x51, 0xc2, 0xb7, 0xe9,
  0x40, 0x6e, 0x22, 0x2d, 0xcb, 0xcb, 0xcb, 0x15, 0x99, 0xe6, 0xe6, 0x66,
  0x65, 0x6e, 0x65, 0x65, 0x65, 0x4a, 0x93, 0xba, 0xae, 0xb3, 0x63, 0xc7,
  0x0e, 0x95, 0x7e, 0x0e, 0x1c, 0x38, 0x30, 0x49, 0xce, 0x81, 0x03, 0x07,
  0x54, 0xba, 0xda, 0xb1, 0x63, 0x87, 0xb2, 0x88, 0xec, 0xec, 0x6c, 0xca,
  0xca, 0xca, 0x94, 0xdb, 0x34, 0x37, 0x37, 0xab, 0x49, 0x29, 0x2f, 0x2f,
  0x4f, 0x94, 0x70, 0xae, 0x0e, 0x2c, 0x48, 0xa4, 0x65, 0x41, 0x41, 0x01,
  0x79, 0x79, 0x79, 0x2a, 0x0d, 0x79, 0x3c, 0x1e, 0x34, 0x4d, 0x23, 0x10,
  0x08, 0xb0, 0x65, 0xcb, 0x16, 0xec, 0x76, 0x3b, 0x63, 0x63, 0x63, 0x2c,
  0x58, 0x30, 0x21, 0xde, 0xe7, 0xf3, 0xa9, 0xb5, 0xb7, 0xae, 0xeb, 0x8a,
  0x58, 0x7b, 0x7b, 0x3b, 0x3e, 0x9f, 0x4f, 0x59, 0xcd, 0xd8, 0xd8, 0x18,
  0x36, 0x9b, 0x8d, 0xe7, 0x9f, 0x7f, 0x9e, 0x40, 0x20, 0x80, 0xa6, 0x69,
  0x78, 0x3c, 0x1e, 0x95, 0xa6, 0xf2, 0xf2, 0xf2, 0x28, 0x28, 0x28, 0x48,
  0x94, 0xf0, 0x02, 0x4d, 0x4a, 0x79, 0x18, 0xb8, 0x37, 0x91, 0xd6, 0xbd,
  0xbd, 0xbd, 0xd4, 0xd4, 0xd4, 0x28, 0x2d, 0xec, 0xdc, 0xb9, 0x13, 0x21,
  0x84, 0x32, 0xf5, 0xaf, 0xbf, 0xfe, 0x5a, 0x05, 0x98, 0xb7, 0xde, 0x7a,
  0x8b, 0x0f, 0x3f, 0xfc, 0x10, 0x4d, 0xd3, 0x58, 0xbe, 0x7c, 0xa2, 0x16,
  0x78, 0xe8, 0xd0, 0x21, 0x42, 0xa1, 0x10, 0x45, 0x45, 0x45, 0xac, 0x5b,
  0x37, 0xb1, 0x67, 0x19, 0x1d, 0x1d, 0xc5, 0xe5, 0x72, 0xa9, 0x0d, 0x86,
  0x94, 0x92, 0x0d, 0x1b, 0x36, 0x28, 0x97, 0xa9, 0xad, 0xad, 0x55, 0x13,
  0x9d, 0x00, 0x8e, 0xe8, 0x7c, 0x7b, 0xb0, 0x15, 0x37, 0x16, 0x2f, 0x5e,
  0xcc, 0xd2, 0xa5, 0x4b, 0x31, 0x4d, 0x13, 0x5d, 0xd7, 0x79, 0xfd, 0xf5,
  0xd7, 0x95, 0x3f, 0x46, 0x47, 0x53, 0xc3, 0x30, 0x38, 0x71, 0xe2, 0x84,
  0x0a, 0x46, 0xa5, 0xa5, 0xa5, 0x6a, 0x09, 0xa9, 0x69, 0x1a, 0x27, 0x4e,
  0x9c, 0x50, 0x84, 0x66, 0xcd, 0x9a, 0xa5, 0x3e, 0x67, 0xb3, 0xd9, 0x78,
  0xe3, 0x8d, 0x37, 0xd0, 0x75, 0x1d, 0xd3, 0x34, 0x59, 0xba, 0x74, 0x29,
  0x8b, 0x17, 0x2f, 0x9e, 0xce, 0x16, 0xfb, 0x47, 0x3a, 0x10, 0x4a, 0xb4,
  0xb5, 0x65, 0x59, 0xd4, 0xd4, 0xd4, 0x90, 0x9b, 0x9b, 0x8b, 0xcb, 0xe5,
  0x52, 0xfb, 0xe1, 0xcb, 0xcb, 0x34, 0x87, 0x0f, 0x1f, 0x56, 0x29, 0x2a,
  0x2d, 0x2d, 0x8d, 0x9c, 0x9c, 0x1c, 0x72, 0x72, 0x72, 0xd4, 0x84, 0x0c,
  0x0d, 0x0d, 0x71, 0xf8, 0xf0, 0xe1, 0x49, 0xe5, 0x21, 0xd3, 0x34, 0xa9,
  0xa8, 0xa8, 0xc0, 0xe5, 0x72, 0x91, 0x9b, 0x9b, 0x4b, 0x4d, 0x4d, 0x8d,
  0x32, 0xed, 0x04, 0x11, 0xd2, 0xa4, 0x94, 0x1f, 0x01, 0xf7, 0xcd, 0x64,
  0x55, 0xad, 0xaa, 0xaa, 0x8a, 0xf1, 0xf1, 0x71, 0x82, 0xc1, 0x20, 0xaf,
  0xbc, 0xf2, 0x8a, 0x5a, 0x88, 0x74, 0x77, 0x77, 0xf3, 0xf2, 0xcb, 0x2f,
  0x63, 0xb7, 0xdb, 0xb1, 0xd9, 0x6c, 0x97, 0x14, 0x14, 0x66, 0x08, 0x7f,
  0xd3, 0x99, 0x38, 0x9d, 0x9b, 0x31, 0xf4, 0xf6, 0xf6, 0x32, 0x3e, 0x3e,
  0x0e, 0xc0, 0xbc, 0x79, 0xf3, 0x58, 0xb2, 0x64, 0x09, 0x2e, 0x97, 0x4b,
  0xed, 0x9b, 0x23, 0x2e, 0x30, 0x3e, 0x3e, 0x4e, 0x6f, 0x6f, 0xef, 0x4c,
  0x13, 0xfe, 0xca, 0x06, 0xc8, 0x99, 0x92, 0xee, 0x74, 0x3a, 0x69, 0x6d,
  0x6d, 0x55, 0xf9, 0x33, 0x27, 0x27, 0x87, 0xb6, 0xb6, 0x36, 0xde, 0x7b,
  0xef, 0x3d, 0x06, 0x07, 0x07, 0x71, 0x3a, 0x9d, 0x58, 0x96, 0xa5, 0xfc,
  0xb7, 0xb5, 0xb5, 0x95, 0xda, 0xda, 0x5a, 0xbe, 0xf9, 0xe6, 0x9b, 0x99,
  0x1a, 0x92, 0xd4, 0x81, 0x4f, 0x66, 0x4c, 0xba, 0x94, 0x1c, 0x3b, 0x76,
  0x4c, 0x05, 0xa7, 0xe3, 0xc7, 0x8f, 0xd3, 0xd0, 0xd0, 0xc0, 0xc8, 0xc8,
  0x88, 0x5a, 0x4a, 0xae, 0x5a, 0xb5, 0x4a, 0x2d, 0x54, 0x8e, 0x1d, 0x3b,
  0x16, 0xf3, 0x19, 0x51, 0x82, 0xf8, 0xc4, 0x06, 0x9c, 0x9d, 0x29, 0xe9,
  0x4d, 0x4d, 0x4d, 0x8a, 0x58, 0x74, 0xa0, 0x2b, 0x2e, 0x2e, 0xa6, 0xa4,
  0xa4, 0x84, 0x5b, 0x6e, 0xb9, 0x85, 0xb4, 0xb4, 0x34, 0x46, 0x46, 0x46,
  0x68, 0x6f, 0x6f, 0xc7, 0xe9, 0x74, 0xd2, 0xd4, 0xd4, 0xc4, 0xe6, 0xcd,
  0x9b, 0x67, 0x6a, 0x48, 0x67, 0x75, 0xe0, 0xf3, 0x99, 0x90, 0x1c, 0x0a,
  0x85, 0x38, 0x7d, 0xfa, 0xf4, 0x25, 0xdb, 0x42, 0xcb, 0xb2, 0xb8, 0xef,
  0xbe, 0xfb, 0x28, 0x2a, 0x2a, 0xc2, 0xed, 0x76, 0x93, 0x92, 0x92, 0x82,
  0xdf, 0xef, 0xa7, 0xb4, 0xb4, 0x54, 0xed, 0xb2, 0x4e, 0x9f, 0x3e, 0x3d,
  0xe5, 0x26, 0x23, 0x49, 0xf8, 0x5c, 0x0b, 0x9b, 0x5e, 0x52, 0x7b, 0x30,
  0x0c, 0x83, 0xfd, 0xfb, 0xf7, 0xb3, 0x67, 0xcf, 0x9e, 0x2b, 0x9e, 0x16,
  0x2c, 0x5b, 0xb6, 0x8c, 0xa7, 0x9e, 0x7a, 0x8a, 0xb9, 0x73, 0xe7, 0x52,
  0x5d, 0x5d, 0xcd, 0x85, 0x0b, 0x17, 0xb0, 0x2c, 0x8b, 0xc7, 0x1f, 0x7f,
  0x9c, 0x8a, 0x8a, 0x8a, 0xa4, 0xd6, 0xb8, 0xc3, 0x85, 0x4a, 0x2d, 0x42,
  0xb8, 0x11, 0x58, 0x9d, 0x2c, 0xc1, 0x81, 0x40, 0x80, 0xc7, 0x1e, 0x7b,
  0x0c, 0xd3, 0x34, 0x09, 0x06, 0x83, 0xbc, 0xf9, 0xe6, 0x9b, 0x2a, 0x32,
  0xbf, 0xff, 0xfe, 0xfb, 0x7c, 0xf6, 0xd9, 0x67, 0xca, 0xd4, 0x2d, 0xcb,
  0xc2, 0xed, 0x76, 0x73, 0xc3, 0x0d, 0x37, 0xa8, 0xc2, 0xa0, 0x61, 0x18,
  0x34, 0x35, 0x35, 0xc5, 0x5a, 0x7f, 0x8e, 0x15, 0x7f, 0x14, 0x42, 0xac,
  0x89, 0x64, 0xfa, 0xad, 0xc9, 0x92, 0xaa, 0x69, 0x1a, 0x5e, 0xaf, 0x57,
  0x69, 0xc7, 0xed, 0x76, 0xb3, 0x68, 0xd1, 0x22, 0x6e, 0xba, 0xe9, 0x26,
  0x4a, 0x4a, 0x4a, 0xd8, 0xbd, 0x7b, 0x37, 0xef, 0xbe, 0xfb, 0x2e, 0x45,
  0x45, 0x45, 0x64, 0x64, 0x64, 0x00, 0xf0, 0xc5, 0x17, 0x5f, 0xf0, 0xf1,
  0xc7, 0x1f, 0xab, 0x85, 0x87, 0x69, 0x9a, 0x78, 0xbd, 0xde, 0x2b, 0x56,
  0x49, 0x12, 0xc0, 0x56, 0x55, 0xe2, 0x11, 0x42, 0x48, 0x26, 0xee, 0x47,
  0x4d, 0x1b, 0x29, 0x29, 0x29, 0x6a, 0x67, 0x33, 0x3e, 0x3e, 0xce, 0xf2,
  0xe5, 0xcb, 0x95, 0x4f, 0x5a, 0x96, 0x85, 0xdf, 0xef, 0x27, 0x2b, 0x2b,
  0x8b, 0x67, 0x9f, 0x7d, 0x96, 0xb7, 0xdf, 0x7e, 0x9b, 0x77, 0xde, 0x79,
  0x87, 0xbc, 0xbc, 0xbc, 0x49, 0xe4, 0x9a, 0x9b, 0x9b, 0x49, 0x49, 0x49,
  0x49, 0x16, 0xd9, 0xbe, 0x30, 0x47, 0x6c, 0x51, 0x2f, 0x3f, 0x00, 0x36,
  0x4c, 0x57, 0x72, 0x4f, 0x4f, 0x0f, 0x5e, 0xaf, 0x97, 0xd4, 0xd4, 0x54,
  0x0c, 0xc3, 0x60, 0xe5, 0xca, 0x95, 0x6a, 0x39, 0x18, 0x39, 0x70, 0xeb,
  0xed, 0xed, 0xe5, 0xc8, 0x91, 0x23, 0x78, 0xbd, 0x5e, 0xce, 0x9f, 0x3f,
  0xcf, 0xf0, 0xf0, 0xb0, 0x22, 0x6c, 0x59, 0x96, 0x3a, 0x35, 0xec, 0xe9,
  0xe9, 0xe1, 0xd6, 0x5b, 0x6f, 0x4d, 0x06, 0xe1, 0x0f, 0x22, 0x0f, 0xd1,
  0x84, 0x6b, 0x92, 0x41, 0x78, 0xef, 0xde, 0xbd, 0xaa, 0xde, 0xb4, 0x6a,
  0xd5, 0x2a, 0x0c, 0xc3, 0xe0, 0xfc, 0xf9, 0xf3, 0x0c, 0x0c, 0x0c, 0x70,
  0xfc, 0xf8, 0x71, 0x8e, 0x1e, 0x3d, 0x8a, 0xcf, 0xe7, 0x23, 0x25, 0x25,
  0x45, 0x6d, 0x0a, 0x34, 0x4d, 0x23, 0x23, 0x23, 0x03, 0xb7, 0xdb, 0x8d,
  0xcd, 0x66, 0xa3, 0xab, 0xab, 0x8b, 0xd4, 0xd4, 0x54, 0xf6, 0xee, 0xdd,
  0xcb, 0xd6, 0xad, 0x49, 0xf1, 0xb6, 0x9a, 0x49, 0x84, 0x85, 0x10, 0xa3,
  0x52, 0xca, 0x5a, 0xe2, 0x38, 0x6e, 0x99, 0x0a, 0x5e, 0xaf, 0x57, 0x3d,
  0x7f, 0xfa, 0xe9, 0xa7, 0x3c, 0xfc, 0xf0, 0xc3, 0x93, 0xa2, 0xad, 0xcb,
  0xe5, 0x52, 0x05, 0xba, 0xf2, 0xf2, 0x72, 0x8a, 0x8a, 0x8a, 0x54, 0x45,
  0xf2, 0xcb, 0x2f, 0xbf, 0x54, 0xd5, 0x8d, 0x68, 0x59, 0xd3, 0x40, 0xad,
  0x10, 0x62, 0x54, 0xc5, 0x98, 0xe8, 0x55, 0x11, 0xf0, 0x63, 0xe0, 0xbf,
  0x89, 0x48, 0xb5, 0xd9, 0x6c, 0xd4, 0xd7, 0xd7, 0xd3, 0xd6, 0xd6, 0xa6,
  0x52, 0x51, 0xa4, 0x0a, 0x19, 0x0c, 0x06, 0x09, 0x06, 0x83, 0xe4, 0xe7,
  0xe7, 0x73, 0xcf, 0x3d, 0xf7, 0x70, 0xfb, 0xed, 0xb7, 0x93, 0x99, 0x99,
  0x49, 0x7a, 0x7a, 0x3a, 0xa6, 0x69, 0x5e, 0x32, 0x21, 0x36, 0x9b, 0x8d,
  0xcd, 0x9b, 0x37, 0x73, 0xf6, 0xec, 0x59, 0x2c, 0xcb, 0xe2, 0xc1, 0x07,
  0x1f, 0xe4, 0x99, 0x67, 0x9e, 0x51, 0xeb, 0xf1, 0x04, 0x30, 0x17, 0xb8,
  0x10, 0x39, 0x5f, 0xd2, 0xa6, 0x58, 0x0e, 0x6e, 0x00, 0xea, 0xe2, 0x95,
  0xea, 0xf7, 0xfb, 0x79, 0xf4, 0xd1, 0x47, 0x31, 0x0c, 0x43, 0x05, 0xa9,
  0xf9, 0xf3, 0xe7, 0xe3, 0x76, 0xbb, 0x59, 0xb6, 0x6c, 0x19, 0xf7, 0xde,
  0x7b, 0x2f, 0xb3, 0x66, 0xcd, 0x22, 0x10, 0x08, 0x5c, 0x31, 0xbf, 0x6a,
  0x9a, 0xc6, 0xe0, 0xe0, 0x20, 0x4f, 0x3f, 0xfd, 0x34, 0x86, 0x61, 0x60,
  0x9a, 0xe6, 0x25, 0x6e, 0x12, 0x27, 0x7e, 0x2d, 0x84, 0xd8, 0x79, 0x89,
  0x62, 0xa6, 0x48, 0xce, 0x3b, 0xa5, 0x94, 0x4f, 0x00, 0x3f, 0x89, 0x27,
  0x15, 0x9d, 0x3a, 0x75, 0x4a, 0x69, 0xd6, 0xed, 0x76, 0x53, 0x57, 0x57,
  0x37, 0x29, 0xf2, 0x46, 0x17, 0xdb, 0xaf, 0xb4, 0x42, 0x9b, 0x3b, 0x77,
  0x2e, 0xd9, 0xd9, 0xd9, 0xf4, 0xf7, 0xf7, 0x63, 0x18, 0x06, 0xa7, 0x4e,
  0x9d, 0xe2, 0xae, 0xbb, 0xee, 0x8a, 0x77, 0x05, 0xf6, 0xaf, 0xcb, 0xc9,
  0x46, 0x9f, 0x3c, 0x5c, 0x8e, 0x5f, 0xc6, 0x9b, 0x8a, 0xda, 0xda, 0xda,
  0x54, 0xb5, 0xf1, 0x81, 0x07, 0x1e, 0x98, 0x76, 0x0e, 0x5d, 0xb1, 0x62,
  0x85, 0x3a, 0x4e, 0x69, 0x6b, 0x6b, 0x4b, 0x24, 0x45, 0x4d, 0xc9, 0x41,
  0xff, 0x8e, 0x25, 0xd8, 0x39, 0xe0, 0xa1, 0x58, 0x25, 0x8f, 0x8f, 0x8f,
  0x53, 0x50, 0x50, 0x80, 0x69, 0x9a, 0x64, 0x65, 0x65, 0xa9, 0x6a, 0xe3,
  0x74, 0x50, 0x56, 0x56, 0x86, 0xdb, 0xed, 0xc6, 0x34, 0x4d, 0xee, 0xb8,
  0xe3, 0x8e, 0x78, 0x7d, 0xf8, 0xa1, 0x30, 0x87, 0xc9, 0xd6, 0xf8, 0x3d,
  0xdb, 0xbb, 0xed, 0xc0, 0x16, 0x7e, 0x58, 0xf8, 0x8d, 0x10, 0xe2, 0x85,
  0xef, 0xfa, 0xe7, 0x15, 0x2f, 0xa6, 0x85, 0x1b, 0x36, 0xfe, 0x80, 0xc8,
  0x36, 0x0a, 0x21, 0x5e, 0x48, 0xf8, 0x62, 0x5a, 0x14, 0xf9, 0x3d, 0x5c,
  0xbb, 0xab, 0xc2, 0xb1, 0x22, 0xa6, 0x2b, 0xc5, 0x31, 0xdd, 0x22, 0x0b,
  0x0b, 0x7a, 0xf5, 0x3a, 0x26, 0xfb, 0x6a, 0xac, 0xf7, 0xa7, 0x63, 0xbe,
  0x3e, 0x2c, 0x84, 0x78, 0x09, 0x28, 0xbb, 0x0e, 0xc9, 0x96, 0x09, 0x21,
  0x5e, 0x4a, 0xfa, 0xf5, 0xe1, 0x28, 0xf2, 0xf3, 0x80, 0x76, 0xe0, 0xce,
  0x6b, 0x4c, 0xf4, 0x9f, 0xc0, 0xfd, 0x42, 0x88, 0xff, 0xc4, 0xb5, 0x7d,
  0x9d, 0x46, 0x81, 0xee, 0x09, 0x60, 0xf7, 0x35, 0x22, 0xfb, 0xa4, 0x10,
  0xe2, 0xf7, 0x89, 0x34, 0x4c, 0xf8, 0x26, 0x68, 0xb8, 0xc3, 0xf4, 0xab,
  0x9c, 0xb6, 0xb6, 0x00, 0xe9, 0x89, 0x92, 0x9d, 0x16, 0xe1, 0x30, 0x7c,
  0x42, 0x88, 0xdf, 0x02, 0x46, 0x38, 0xa8, 0xcd, 0x44, 0x25, 0xbd, 0x37,
  0x2c, 0xdb, 0x08, 0xf7, 0xe5, 0x9b, 0x56, 0x45, 0x26, 0xd9, 0xa3, 0x93,
  0x52, 0xa6, 0x03, 0x2f, 0x02, 0xcf, 0x01, 0x89, 0x96, 0x2c, 0xc6, 0x00,
  0x0f, 0xf0, 0x9a, 0x10, 0xe2, 0x62, 0x32, 0xc7, 0xa7, 0xcd, 0xa4, 0xfd,
  0x49, 0x29, 0xe7, 0x33, 0x71, 0xa5, 0x22, 0x8b, 0x89, 0xaf, 0xe2, 0x2d,
  0x00, 0x6e, 0xe4, 0xd2, 0xaf, 0xe2, 0x0d, 0x01, 0xff, 0x0e, 0x6b, 0x72,
  0x00, 0xf8, 0x5c, 0x08, 0x71, 0x7e, 0xa6, 0xc6, 0xf4, 0x7f, 0x77, 0x09,
  0xbb, 0x39, 0x3d, 0xa8, 0x99, 0xed, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
  0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

const struct servFile logoFile = {
	"/logo.png",
	"image/png",
	sizeof(logo_png)-1,
	logo_png,
	NULL
};

const struct servFile styleFile = {
	"/style.css",
	"text/css",
	sizeof(style_css)-1,
	style_css,
	(struct servFile*)&logoFile
};

const struct servFile indexFile = {
	"/",
	"text/html",
	sizeof(index_html)-1,
	index_html,
	(struct servFile*)&styleFile
};
