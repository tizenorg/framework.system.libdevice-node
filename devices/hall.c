/*
 * device-node
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the License);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <stdio.h>
#include <errno.h>
#include "device-internal.h"

static int hall_get_prop(int prop, int *val)
{
	switch (prop) {
	case PROP_HALL_STATUS:
		return PLUGIN_GET(hall_status)((char*)val);
	}

	return -EINVAL;
}

static const struct device hall = {
	.name     = "hall",
	.set_prop = NULL,
	.get_prop = hall_get_prop,
	.type     = DEVICE_TYPE_HALL,
};

static void __CONSTRUCTOR__ module_init(void)
{
	add_device(&(hall.type));
}

static void __DESTRUCTOR__ module_fini(void)
{
	remove_device(&(hall.type));
}
