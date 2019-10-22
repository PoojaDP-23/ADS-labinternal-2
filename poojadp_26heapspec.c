#include <stdint.h>
#include <assert.h>
#include "heap.h"

void test_sort( int32_t data[], uint32_t len) 
{
	uint32_t idx;
	for (idx = 1; idx <= len; ++idx) {
		assert (data[idx] <= data[idx+1]);		
	}
}

void test_heap()
{
	int32_t data[] = { 0998, 1223, 1654, 2397, 1900, 0187, 1256, 4593, 2361, 1778, 7300};
	
	Heap heap = heap_new(data, 10);	
	heap_insert(&heap, 4700,768904,1);
	//heap_test(&heap);
	//assert(heap_get_max(&heap) == 93);
	assert(heap_extract_min(&heap) == 0187);
	heap_test(&heap);
	assert(heap_size(&heap) == 10);

	heap_sort(&heap);
	test_sort(heap.data, 10);

}

int main()
{
	test_heap();
	return 0;
}