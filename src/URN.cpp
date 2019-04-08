// generate by pypp
// original source code: ISOBMFF/URN.hpp

#include <boost/python.hpp>

#include "ISOBMFF/URN.hpp"



void init_ISOBMFF_URN_hpp() {
    boost::python::class_<ISOBMFF::URN, boost::python::bases<ISOBMFF::FullBox>, std::shared_ptr<ISOBMFF::URN>>("URN")
        ;
}
