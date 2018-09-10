/*
 * This example wants to demonstrate the module_init() and the module_exit() macros.
 * Is better option than using init_module() and cleanup_module().
 */

#include <linux/module.h> // Needed by all modules
#include <linux/kernel.h> // Needed for the KERN_INFO
#include <linux/init.h>   // Needed for all the macros

static int __init hello_world_2_init(void)
{
    printk(KERN_INFO "Hello world 2\n");
    return 0;
}

static void __exit hello_world_2_exit(void)
{
    printk(KERN_INFO "Goodybe, world 2 \n");
}

module_init(hello_world_2_init);
module_exit(hello_world_2_exit);
