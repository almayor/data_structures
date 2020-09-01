#include "unity.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

int suite_array(void);
int suite_list(void);
int suite_stack(void);
int suite_queue(void);
int suite_max_pq(void);
int suite_min_pq(void);

int main(void) {
	return (suite_array() ||
			suite_list() ||
			suite_stack() ||
			suite_queue() ||
			suite_max_pq() ||
			suite_min_pq());
}
