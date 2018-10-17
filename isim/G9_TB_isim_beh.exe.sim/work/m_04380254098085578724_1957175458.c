/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "%t: PC: %d, PC_NXT: %d, BRANCH %d ";
static const char *ng1 = "/home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/KGP_Risc/ProgramCounter.v";
static int ng2[] = {1, 0};

static void Monitor_47_3(char *);


static void Monitor_47_3(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2064);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1664U);
    t7 = *((char **)t6);
    t6 = (t0 + 1344U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 2, ng0, 5, t0, (char)118, t1, 64, (char)118, t5, 32, (char)118, t7, 32, (char)118, t8, 1);

LAB1:    return;
}

static void Initial_31_0(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(32, ng1);

LAB2:    xsi_set_current_line(33, ng1);
    t2 = ((char*)((ng2)));
    memset(t1, 0, 8);
    xsi_vlog_signed_unary_minus(t1, 32, t2, 32);
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_36_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng1);
    t2 = (t0 + 3792);
    *((int *)t2) = 1;
    t3 = (t0 + 3256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng1);

LAB5:    xsi_set_current_line(38, ng1);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(40, ng1);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(43, ng1);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 32, t5, 32);
    t12 = (t0 + 2064);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB11:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng1);
    t12 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_signed_unary_minus(t11, 32, t12, 32);
    t13 = (t0 + 2064);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 32);
    goto LAB8;

LAB9:    xsi_set_current_line(41, ng1);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB11;

}

static void Always_45_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng1);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng1);

LAB5:    xsi_set_current_line(47, ng1);
    t4 = (t0 + 3280);
    xsi_vlog_strobe(0, (void *)Monitor_47_3, t4);
    goto LAB2;

}


extern void work_m_04380254098085578724_1957175458_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_36_1,(void *)Always_45_2};
	xsi_register_didat("work_m_04380254098085578724_1957175458", "isim/G9_TB_isim_beh.exe.sim/work/m_04380254098085578724_1957175458.didat");
	xsi_register_executes(pe);
}
