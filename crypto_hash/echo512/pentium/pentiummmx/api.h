/*------------------------------------------------------------------------------------ */
/* Implementation of the double pipe ECHO hash function in its 512-bit outputs variant.*/
/* Optimized for Pentium MMX, PII, PIII, amd K7                                        */
/*                                                                                     */
/* Date:     2010-04-12                                                                */
/*                                                                                     */
/* Authors:  Ryad Benadjila  <ryadbenadjila@gmail.com>                                 */
/*           Olivier Billet  <billet@eurecom.fr>                                       */
/*------------------------------------------------------------------------------------ */
#define CRYPTO_BYTES 64
#define CRYPTO_VERSION "2.0"