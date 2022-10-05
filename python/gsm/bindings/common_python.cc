/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(flow_control/common.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(8959d83e9eef8a31155e21912e1e8524)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gsm/flow_control/common.h>
// pydoc.h is automatically generated in the build directory
#include <common_pydoc.h>

void bind_common(py::module& m)
{


    py::enum_<::gr::gsm::filter_policy>(m,"filter_policy")
        .value("FILTER_POLICY_DEFAULT", ::gr::gsm::filter_policy::FILTER_POLICY_DEFAULT) // 0
        .value("FILTER_POLICY_PASS_ALL", ::gr::gsm::filter_policy::FILTER_POLICY_PASS_ALL) // 1
        .value("FILTER_POLICY_DROP_ALL", ::gr::gsm::filter_policy::FILTER_POLICY_DROP_ALL) // 2
        .export_values()
    ;

    py::implicitly_convertible<int, ::gr::gsm::filter_policy>();



}








