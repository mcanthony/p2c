/* Header for module hpib_3, generated by p2c */
#ifndef HPIB_3_H
#define HPIB_3_H



#ifndef IODECLARATIONS_H
#include <p2c/iodecl.h>
#endif



#ifdef HPIB_3_G
# define vextern
#else
# define vextern extern
#endif
extern boolean P_requested PP((int select_code));
extern long P_ppoll PP((int select_code));
extern long P_spoll PP((long device));
extern Void request_service PP((int select_code, long response));
extern boolean P_listener PP((int select_code));
extern boolean P_talker PP((int select_code));
extern boolean P_remoted PP((int select_code));
extern boolean locked_out PP((int select_code));



#undef vextern

#endif /*HPIB_3_H*/

/* End. */

