// generate by pypp
// original source code: ISOBMFF/SCHM.hpp

#include <boost/python.hpp>

#include "ISOBMFF/SCHM.hpp"
#include "ISOBMFF/Parser.hpp"



class SCHMWrapper :
    public ISOBMFF::SCHM,
    public boost::python::wrapper<ISOBMFF::SCHM>
{
public:
    using ISOBMFF::SCHM::SCHM;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            SCHM::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return SCHM::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_SCHM_hpp() {
    boost::python::class_<SCHMWrapper, boost::python::bases<ISOBMFF::FullBox>, std::shared_ptr<ISOBMFF::SCHM>>("SCHM")
        .def("ReadData", &ISOBMFF::SCHM::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::SCHM::GetDisplayableProperties)
        .def("GetSchemeType", &ISOBMFF::SCHM::GetSchemeType)
        .def("GetSchemeVersion", &ISOBMFF::SCHM::GetSchemeVersion)
        .def("GetSchemeURI", &ISOBMFF::SCHM::GetSchemeURI)
        .def("SetSchemeType", &ISOBMFF::SCHM::SetSchemeType)
        .def("SetSchemeVersion", &ISOBMFF::SCHM::SetSchemeVersion)
        .def("SetSchemeURI", &ISOBMFF::SCHM::SetSchemeURI)
        ;
}
