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

static int touch_get_prop(int prop, int *val)
{
	switch (prop) {
	case PROP_TOUCH_SCREEN_FLIP_MODE:
		return PLUGIN_GET(touchscreen_clear_cover)(val);
	case PROP_TOUCH_SCREEN_GLOVE_MODE:
		return PLUGIN_GET(touchscreen_glove_mode)(val);
	case PROP_TOUCH_KEY_FLIP_MODE:
		return PLUGIN_GET(touchkey_flip_mode)(val);
	case PROP_TOUCH_KEY_GLOVE_MODE:
		return PLUGIN_GET(touchkey_glove_mode)(val);
	}

	return -1;
}

static int touch_set_prop(int prop, int val)
{
	switch (prop) {
	case PROP_TOUCH_SCREEN_FLIP_MODE:
		return PLUGIN_SET(touchscreen_clear_cover)(val);
	case PROP_TOUCH_SCREEN_GLOVE_MODE:
		return PLUGIN_SET(touchscreen_glove_mode)(val);
	case PROP_TOUCH_KEY_FLIP_MODE:
		return PLUGIN_SET(touchkey_flip_mode)(val);
	case PROP_TOUCH_KEY_GLOVE_MODE:
		return PLUGIN_SET(touchkey_glove_mode)(val);
	}

	return -1;
}

static const struct device touch = {
	.name     = "touch",
	.set_prop = touch_set_prop,
	.get_prop = touch_get_prop,
	.type     = DEVICE_TYPE_TOUCH,
};

static void __CONSTRUCTOR__ module_init(void)
{
	add_device(&(touch.type));
}

static void __DESTRUCTOR__ module_fini(void)
{
	remove_device(&(touch.type));
}
