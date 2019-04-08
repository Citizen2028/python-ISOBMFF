// generate by pypp
// original source code: ISOBMFF/HDLR.hpp

#include <boost/python.hpp>

#include "ISOBMFF/HDLR.hpp"
#include "ISOBMFF/Parser.hpp"



class HDLRWrapper :
    public ISOBMFF::HDLR,
    public boost::python::wrapper<ISOBMFF::HDLR>
{
public:
    using ISOBMFF::HDLR::HDLR;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            HDLR::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return HDLR::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_HDLR_hpp() {
    boost::python::class_<HDLRWrapper, boost::python::bases<ISOBMFF::FullBox>, std::shared_ptr<ISOBMFF::HDLR>>("HDLR")
        .def("ReadData", &ISOBMFF::HDLR::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::HDLR::GetDisplayableProperties)
        .def("GetHandlerType", &ISOBMFF::HDLR::GetHandlerType)
        .def("GetHandlerName", &ISOBMFF::HDLR::GetHandlerName)
        .def("SetHandlerType", &ISOBMFF::HDLR::SetHandlerType)
        .def("SetHandlerName", &ISOBMFF::HDLR::SetHandlerName)
        ;
}
