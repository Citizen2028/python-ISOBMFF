// generate by pypp
// original source code: ISOBMFF/IPCO.hpp

#include <boost/python.hpp>

#include "ISOBMFF/IPCO.hpp"



void init_ISOBMFF_IPCO_hpp() {
    boost::python::class_<ISOBMFF::IPCO, boost::python::bases<ISOBMFF::ContainerBox>, std::shared_ptr<ISOBMFF::IPCO>>("IPCO")
        .def("GetPropertyAtIndex", &ISOBMFF::IPCO::GetPropertyAtIndex)
        .def("GetProperty", &ISOBMFF::IPCO::GetProperty)
        .def("GetProperties", &ISOBMFF::IPCO::GetProperties)
        ;
}
