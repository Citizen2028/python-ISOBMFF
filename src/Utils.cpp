// generate by pypp
// original source code: ISOBMFF/Utils.hpp

#include <boost/python.hpp>

#include "ISOBMFF/Utils.hpp"



void init_ISOBMFF_Utils_hpp() {
    boost::python::def("Pad", &ISOBMFF::Utils::Pad);
    boost::python::def("ToString", static_cast<std::string(*)(const std::vector<std::string> &)>(&ISOBMFF::Utils::ToString));
    //boost::python::def("ToString", static_cast<std::string(*)(const std::vector<T> &)>(&ISOBMFF::Utils::ToString));
    boost::python::def("ToHexString", static_cast<std::string(*)(unsigned char)>(&ISOBMFF::Utils::ToHexString));
    boost::python::def("ToHexString", static_cast<std::string(*)(unsigned short)>(&ISOBMFF::Utils::ToHexString));
    boost::python::def("ToHexString", static_cast<std::string(*)(unsigned int)>(&ISOBMFF::Utils::ToHexString));
    boost::python::def("ToHexString", static_cast<std::string(*)(unsigned long)>(&ISOBMFF::Utils::ToHexString));
}
