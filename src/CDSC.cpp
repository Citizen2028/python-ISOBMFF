// generate by pypp
// original source code: ISOBMFF/CDSC.hpp

#include <boost/python.hpp>

#include "ISOBMFF/CDSC.hpp"



void init_ISOBMFF_CDSC_hpp() {
    boost::python::class_<ISOBMFF::CDSC, boost::python::bases<ISOBMFF::SingleItemTypeReferenceBox>, std::shared_ptr<ISOBMFF::CDSC>>("CDSC")
        ;
}
