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
#include "device-internal.h"

static int thermistor_get_prop(int prop, int *val)
{
	switch (prop) {
	case PROP_THERMISTOR_ADC:
		return PLUGIN_GET(temperature_adc)(val);
	case PROP_THERMISTOR_VALUE:
		return PLUGIN_GET(temperature_value)(val);
	}

	return -1;
}

static const struct device thermistor = {
	.name     = "thermistor",
	.set_prop = NULL,
	.get_prop = thermistor_get_prop,
	.type     = DEVICE_TYPE_THERMISTOR,
};

static void __CONSTRUCTOR__ module_init(void)
{
	add_device(&(thermistor.type));
}

static void __DESTRUCTOR__ module_fini(void)
{
	remove_device(&(thermistor.type));
}
