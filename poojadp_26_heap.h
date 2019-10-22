#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_

#include <stdint.h>
#define HEAP_MAX_SIZE 32
 typedef struct _timestamp_ ts;
 struct _timestamp_
 {
 	
 uint32_t takeoff;
 uint32_t landtime;
 uint32_t plane_no;
};
strcut time{
	ts *land_time;
 	ts *takeoff_time;
 
}
typedef struct _heap_ Heap;
struct  _heap_
{
	uint32_t	size;
	int32_t		data[HEAP_MAX_SIZE]	;
};

Heap 		heap_new(int32_t data[], uint32_t len);
Heap*		heap_sort(Heap *heap);
Heap*		heap_insert(Heap *heap, ts time,uint32_t plane_no,uint32_t takeoff);
Heap*		heap_test(Heap *heap);
//int32_t		heap_get_max(Heap *heap);
int32_t		heap_extract_max(Heap *heap);
//uint32_t	heap_size(Heap *heap);

#endif