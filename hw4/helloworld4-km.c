/*
 * This example demosntrates the module documentation.
 */

#include <linux/module.h>    // Needed by all modules
#include <linux/kernel.h>    // Needed for KERN_INFO
#include <linux/init.h>      // Needed for the macros
#define DRIVER_AUTHOR "Francisco Pedraza <pacopedraza87@gmail.com>"
#define DRIVER_DESC "A very basic example of a driver."

static int __init init_helloworld_4(void)
{
    printk(KERN_INFO "Hello, world! 4\n");
    return 0;
}

static void __exit cleanup_helloworld_4(void)
{
    printk(KERN_INFO "Goodbye, world 4\n");
}

module_init(init_helloworld_4);
module_exit(cleanup_helloworld_4);

MODULE_LICENSE("GPL");

MODULE_AUTHOR(DRIVER_AUTHOR);       // Who wrote this module
MODULE_DESCRIPTION(DRIVER_DESC);    // What does this module

// Makes use of /dev/testdevice.
// Is used to automatic configure module
MODULE_SUPPORTED_DEVICE("testdevice")
