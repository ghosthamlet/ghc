/* -----------------------------------------------------------------------------
 *
 * (c) The GHC Team, 2009
 *
 * Entry point for standalone Haskell programs.
 *
 * ---------------------------------------------------------------------------*/

#ifndef RTSMAIN_H
#define RTSMAIN_H

/* -----------------------------------------------------------------------------
 * The entry point for Haskell programs that use a Haskell main function
 * -------------------------------------------------------------------------- */

extern int hs_main(int argc, char *argv[], void (*main_init)(void), StgClosure *main_closure);

#endif /* RTSMAIN_H */
