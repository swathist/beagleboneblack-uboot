// SPDX-License-Identifier: GPL-2.0+
/*
 * (C) Copyright 2002
 * Sysgo Real-Time Solutions, GmbH <www.elinos.com>
 * Marius Groeger <mgroeger@sysgo.de>
 *
 * (C) Copyright 2002
 * Sysgo Real-Time Solutions, GmbH <www.elinos.com>
 * Alex Zuepke <azu@sysgo.de>
 *
 * (C) Copyright 2002
 * Gary Jennejohn, DENX Software Engineering, <garyj@denx.de>
 *
 * (C) Copyright 2004
 * DAVE Srl
 * http://www.dave-tech.it
 * http://www.wawnet.biz
 * mailto:info@wawnet.biz
 *
 * (C) Copyright 2004 Texas Insturments
 */

#include <common.h>

__weak void reset_misc(void)
{
	printf("U-Boot %s %s %d\n",__FILE__,__func__,__LINE__);
}

int do_reset(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	printf("U-Boot Start %s %s %d\n",__FILE__,__func__,__LINE__);
	puts ("resetting ...\n");

	udelay (50000);				/* wait 50 ms */

	disable_interrupts();

	reset_misc();
	reset_cpu(0);

	printf("U-Boot End %s %s %d\n",__FILE__,__func__,__LINE__);
	/*NOTREACHED*/
	return 0;
}
