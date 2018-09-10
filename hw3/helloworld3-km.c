/*
 * This implements the __init, __initdata and __exit macros.
 */

#include <linux/module.h>    // Needed by all modules
#include <linux/kernel.h>    // Needed by KERN_INFO
#include <linux/init.h>      // Needed by the macros

static int helloworld3_data __initdata = 3;

static int __init helloworld_3_init(void)
{
    printk(KERN_INFO "Hello, world %d\n", helloworld3_data);
    return 0;
}

static void __exit helloworld_3_exit(void)
{
    printk(KERN_INFO "Goodbye, world 3\n");
}

module_init(helloworld_3_init);
module_exit(helloworld_3_exit);
