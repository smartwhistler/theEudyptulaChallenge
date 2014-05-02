/*
 * hello.c - The Hello, World! Kernel Module
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
static int hello_init(void) {
	printk(KERN_ALERT "Called when the module is loaded.\n");
	printk(KERN_DEBUG "Hello World!\n");
	return 0;
}

static void hello_exit(void) {
	printk(KERN_ALERT "Called when the module is removed.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("7f86002f18c1");
MODULE_DESCRIPTION("for Task 01 of the Eudyptula Challenge");
