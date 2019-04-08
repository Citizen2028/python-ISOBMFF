// generate by pypp
// original source code: ISOBMFF/ISPE.hpp

#include <boost/python.hpp>

#include "ISOBMFF/ISPE.hpp"
#include "ISOBMFF/Parser.hpp"



class ISPEWrapper :
    public ISOBMFF::ISPE,
    public boost::python::wrapper<ISOBMFF::ISPE>
{
public:
    using ISOBMFF::ISPE::ISPE;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            ISPE::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return ISPE::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_ISPE_hpp() {
    boost::python::class_<ISPEWrapper, boost::python::bases<ISOBMFF::FullBox>, std::shared_ptr<ISOBMFF::ISPE>>("ISPE")
        .def("ReadData", &ISOBMFF::ISPE::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::ISPE::GetDisplayableProperties)
        .def("GetDisplayWidth", &ISOBMFF::ISPE::GetDisplayWidth)
        .def("GetDisplayHeight", &ISOBMFF::ISPE::GetDisplayHeight)
        .def("SetDisplayWidth", &ISOBMFF::ISPE::SetDisplayWidth)
        .def("SetDisplayHeight", &ISOBMFF::ISPE::SetDisplayHeight)
        ;
}
