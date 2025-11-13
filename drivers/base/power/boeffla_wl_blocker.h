/*
 * Author: andip71, 01.09.2017
 *
 * Version 1.1.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"1.1.0"

#define LIST_WL_DEFAULT				"IPA_WS;IPCRTR_lpass_rx;IPCRTR_mpss_rx;mpss_IPCRTR;mgmt_txrx tx_cmp;ipc00000085_1481_LocApiMsgTask;qcom_sap_wakelock;qcom_rx_wakelock"

#define LENGTH_LIST_WL				2560
#define LENGTH_LIST_WL_DEFAULT		(strlen(LIST_WL_DEFAULT) + 1)
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5