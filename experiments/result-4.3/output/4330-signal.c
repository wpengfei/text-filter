/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/alpha/kernel/signal.c
static long
{
get_user(regs->pc, &sc->sc_pc);
get_user(regs->r0, sc->sc_regs+0);
get_user(regs->r1, sc->sc_regs+1);
get_user(regs->r2, sc->sc_regs+2);
get_user(regs->r3, sc->sc_regs+3);
get_user(regs->r4, sc->sc_regs+4);
get_user(regs->r5, sc->sc_regs+5);
get_user(regs->r6, sc->sc_regs+6);
get_user(regs->r7, sc->sc_regs+7);
get_user(regs->r8, sc->sc_regs+8);
get_user(sw->r9, sc->sc_regs+9);
get_user(sw->r10, sc->sc_regs+10);
get_user(sw->r11, sc->sc_regs+11);
get_user(sw->r12, sc->sc_regs+12);
get_user(sw->r13, sc->sc_regs+13);
get_user(sw->r14, sc->sc_regs+14);
get_user(sw->r15, sc->sc_regs+15);
get_user(regs->r16, sc->sc_regs+16);
get_user(regs->r17, sc->sc_regs+17);
get_user(regs->r18, sc->sc_regs+18);
get_user(regs->r19, sc->sc_regs+19);
get_user(regs->r20, sc->sc_regs+20);
get_user(regs->r21, sc->sc_regs+21);
get_user(regs->r22, sc->sc_regs+22);
get_user(regs->r23, sc->sc_regs+23);
get_user(regs->r24, sc->sc_regs+24);
get_user(regs->r25, sc->sc_regs+25);
get_user(regs->r26, sc->sc_regs+26);
get_user(regs->r27, sc->sc_regs+27);
get_user(regs->r28, sc->sc_regs+28);
get_user(regs->gp, sc->sc_regs+29);
get_user(usp, sc->sc_regs+30);
get_user(sw->fp[i], sc->sc_fpregs+i);
get_user(sw->fp[31], &sc->sc_fpcr);
}
