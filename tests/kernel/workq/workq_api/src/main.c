/*
 * Copyright (c) 2016 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <ztest.h>
extern void test_workq_start_before_submit(void);
extern void test_work_submit_to_queue_thread(void);
extern void test_work_submit_to_queue_isr(void);
extern void test_work_submit_thread(void);
extern void test_work_submit_isr(void);
extern void test_delayed_work_submit_to_queue_thread(void);
extern void test_delayed_work_submit_to_queue_isr(void);
extern void test_delayed_work_submit_thread(void);
extern void test_delayed_work_submit_isr(void);
extern void test_delayed_work_cancel_from_queue_thread(void);
extern void test_delayed_work_cancel_from_queue_isr(void);
extern void test_delayed_work_cancel_thread(void);
extern void test_delayed_work_cancel_isr(void);

/*test case main entry*/
void test_main(void *p1, void *p2, void *p3)
{
	ztest_test_suite(test_workq_api,
		ztest_unit_test(test_workq_start_before_submit),/*keep first!*/
		ztest_unit_test(test_work_submit_to_queue_thread),
		ztest_unit_test(test_work_submit_to_queue_isr),
		ztest_unit_test(test_work_submit_thread),
		ztest_unit_test(test_work_submit_isr),
		ztest_unit_test(test_delayed_work_submit_to_queue_thread),
		ztest_unit_test(test_delayed_work_submit_to_queue_isr),
		ztest_unit_test(test_delayed_work_submit_thread),
		ztest_unit_test(test_delayed_work_submit_isr),
		ztest_unit_test(test_delayed_work_cancel_from_queue_thread),
		ztest_unit_test(test_delayed_work_cancel_from_queue_isr),
		ztest_unit_test(test_delayed_work_cancel_thread),
		ztest_unit_test(test_delayed_work_cancel_isr));
	ztest_run_test_suite(test_workq_api);
}
