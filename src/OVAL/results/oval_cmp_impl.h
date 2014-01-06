/*
 * Copyright 2014 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
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
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *     Šimon Lukašík
 */

#ifndef OSCAP_OVAL_CMP_IMPL_H_
#define OSCAP_OVAL_CMP_IMPL_H_

#include "../common/util.h"
#include "oval_definitions.h"
#include "oval_types.h"

OSCAP_HIDDEN_START;

oval_result_t evaluate(char *sys_data, char *state_data, oval_datatype_t sys_data_type, oval_datatype_t state_data_type, oval_operation_t operation);

OSCAP_HIDDEN_END;

#endif