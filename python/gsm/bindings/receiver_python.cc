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
/* BINDTOOL_HEADER_FILE(receiver/receiver.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(bca2d27955a8de4022a24e653b010e7c)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gsm/receiver/receiver.h>
// pydoc.h is automatically generated in the build directory
#include <receiver_pydoc.h>

void bind_receiver(py::module& m)
{

    using receiver    = ::gr::gsm::receiver;


    py::class_<receiver, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<receiver>>(m, "receiver", D(receiver))

        .def(py::init(&receiver::make),
           py::arg("osr"),
           py::arg("cell_allocation"),
           py::arg("seq_nums"),
           py::arg("process_uplink") = false,
           D(receiver,make)
        )
        




        
        .def("set_cell_allocation",&receiver::set_cell_allocation,       
            py::arg("cell_allocation"),
            D(receiver,set_cell_allocation)
        )


        
        .def("set_tseq_nums",&receiver::set_tseq_nums,       
            py::arg("tseq_nums"),
            D(receiver,set_tseq_nums)
        )


        
        .def("reset",&receiver::reset,       
            D(receiver,reset)
        )

        ;




}








