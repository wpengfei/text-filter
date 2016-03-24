/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ia64/kernel/signal.c
static long
{
get_user(flags, &sc->sc_flags);
get_user(nat, &sc->sc_nat);
get_user(ip, &sc->sc_ip);			/* instruction pointer */
get_user(cfm, &sc->sc_cfm);
get_user(um, &sc->sc_um);			/* user mask */
get_user(scr->pt.ar_rsc, &sc->sc_ar_rsc);
get_user(scr->pt.ar_unat, &sc->sc_ar_unat);
get_user(scr->pt.ar_fpsr, &sc->sc_ar_fpsr);
get_user(scr->pt.ar_pfs, &sc->sc_ar_pfs);
get_user(scr->pt.pr, &sc->sc_pr);		/* predicates */
get_user(scr->pt.b0, &sc->sc_br[0]);		/* b0 (rp) */
get_user(scr->pt.b6, &sc->sc_br[6]);		/* b6 */
copy_from_user(&scr->pt.r1, &sc->sc_gr[1], 8);	/* r1 */
copy_from_user(&scr->pt.r8, &sc->sc_gr[8], 4*8);	/* r8-r11 */
copy_from_user(&scr->pt.r12, &sc->sc_gr[12], 2*8);	/* r12-r13 */
copy_from_user(&scr->pt.r15, &sc->sc_gr[15], 8);	/* r15 */
get_user(scr->pt.ar_ccv, &sc->sc_ar_ccv);		/* ar.ccv */
get_user(scr->pt.b7, &sc->sc_br[7]);			/* b7 */
get_user(scr->pt.r14, &sc->sc_gr[14]);			/* r14 */
copy_from_user(&scr->pt.ar_csd, &sc->sc_ar25, 2*8); /* ar.csd & ar.ssd */
copy_from_user(&scr->pt.r2, &sc->sc_gr[2], 2*8);	/* r2-r3 */
copy_from_user(&scr->pt.r16, &sc->sc_gr[16], 16*8);	/* r16-r31 */
copy_from_user(current->thread.fph, &sc->sc_fr[32], 96*16);
}
