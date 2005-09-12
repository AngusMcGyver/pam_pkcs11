/*
 * PKCS #11 PAM Login Module
 * Copyright (C) 2003 Mario Strasser <mast@gmx.net>,
 * config mgmt copyright (c) 2005 Juan Antonio Martinez <jonsito@teleline.es>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * $Id$
 */

/*
* configuration related functions
*/
#ifndef _PAM_CONFIG_H_
#define _PAM_CONFIG_H_

#include "../scconf/scconf.h"

struct configuration_st {
	char * config_file;
	scconf_context *ctx;
	int debug;
	int nullok;
	int try_first_pass;
	int use_first_pass;
	int use_authok;
	char *pkcs11_module;
	char *pkcs11_modulepath;
	int slot_num;
	char *ca_dir;
	char *crl_dir;
	int crl_policy;
	char *username; /* provided user name */
};

struct configuration_st *pk_configure( int argc, const char **argv );

#endif
