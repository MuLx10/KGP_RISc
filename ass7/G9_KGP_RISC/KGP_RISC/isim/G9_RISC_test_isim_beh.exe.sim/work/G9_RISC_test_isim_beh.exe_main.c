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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00465996126495719335_1957175458_init();
    work_m_11637003961875856320_0368493982_init();
    work_m_15028245896505428018_0967961054_init();
    work_m_02600146693426429857_1938225339_init();
    work_m_01583501297830402677_3674772129_init();
    work_m_11317369399580989671_3218583386_init();
    work_m_15044064638485622464_2461264495_init();
    work_m_15054436452546716642_0093123207_init();
    work_m_04257848970744227941_3895884150_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_04257848970744227941_3895884150");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
