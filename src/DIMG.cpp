// generate by pypp
// original source code: ISOBMFF/DIMG.hpp

#include <boost/python.hpp>

#include "ISOBMFF/DIMG.hpp"



void init_ISOBMFF_DIMG_hpp() {
    boost::python::class_<ISOBMFF::DIMG, boost::python::bases<ISOBMFF::SingleItemTypeReferenceBox>, std::shared_ptr<ISOBMFF::DIMG>>("DIMG")
        ;
}
