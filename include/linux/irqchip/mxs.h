/*
 * Copyright (C) 2013 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __LINUX_IRQCHIP_MXS_H
#define __LINUX_IRQCHIP_MXS_H

#ifdef CONFIG_PM_SLEEP
extern int mxs_icoll_suspend(void);
extern void mxs_icoll_resume(void);
#endif
extern void icoll_handle_irq(struct pt_regs *);

#endif
