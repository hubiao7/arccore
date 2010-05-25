/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/








/*
 * RTE.h
 *
 *  Created on: 2009-jul-10
 *      Author: rosa
 */

#ifndef RTE_H_
#define RTE_H_

#include "Std_Types.h"
#include "Pwm.h"

void RTE_pwm_sine_update(Pwm_ChannelType channel, Pwm_PeriodType arg);

void RTE_pwm_enable_notifications(Pwm_ChannelType channel, Pwm_EdgeNotificationType type);

#endif /* RTE_H_ */
