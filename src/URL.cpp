// generate by pypp
// original source code: ISOBMFF/URL.hpp

#include <boost/python.hpp>

#include "ISOBMFF/URL.hpp"



void init_ISOBMFF_URL_hpp() {
    boost::python::class_<ISOBMFF::URL, boost::python::bases<ISOBMFF::FullBox>, std::shared_ptr<ISOBMFF::URL>>("URL")
        ;
}
