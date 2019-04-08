// generate by pypp
// original source code: ISOBMFF/THMB.hpp

#include <boost/python.hpp>

#include "ISOBMFF/THMB.hpp"



void init_ISOBMFF_THMB_hpp() {
    boost::python::class_<ISOBMFF::THMB, boost::python::bases<ISOBMFF::SingleItemTypeReferenceBox>, std::shared_ptr<ISOBMFF::THMB>>("THMB")
        ;
}
