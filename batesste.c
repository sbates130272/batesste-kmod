/*  batesste.c - A useful kernel module for Stephen Bates
 *
 *  Copyright (C) 2016 by Stephen Bates <sbates@raithlin.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init batesste_init(void)
{
    printk("batesste module loaded!\n");

    return 0;
}


static void __exit batesste_exit(void)
{
    printk(KERN_ALERT "batesste module unloaded!\n");
}

MODULE_AUTHOR("Stephen Bates <sbates@raithlin.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");
module_init(batesste_init);
module_exit(batesste_exit);
