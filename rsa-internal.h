/* rsa-internal.h

   The RSA publickey algorithm.

   Copyright (C) 2001, 2002 Niels Möller

   This file is part of GNU Nettle.

   GNU Nettle is free software: you can redistribute it and/or
   modify it under the terms of either:

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at your
       option) any later version.

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at your
       option) any later version.

   or both in parallel, as here.

   GNU Nettle is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received copies of the GNU General Public License and
   the GNU Lesser General Public License along with this program.  If
   not, see http://www.gnu.org/licenses/.
*/

#ifndef NETTLE_RSA_INTERNAL_H_INCLUDED
#define NETTLE_RSA_INTERNAL_H_INCLUDED

#include "nettle-types.h"

#define _rsa_sec_compute_root_itch _nettle_rsa_sec_compute_root_itch
#define _rsa_sec_compute_root _nettle_rsa_sec_compute_root

/* side-channel silent root computation */
mp_size_t
_rsa_sec_compute_root_itch(const struct rsa_private_key *key);
void
_rsa_sec_compute_root(const struct rsa_private_key *key,
                      mp_limb_t *rp, const mp_limb_t *mp,
                      mp_limb_t *scratch);

#endif /* NETTLE_RSA_INTERNAL_H_INCLUDED */
