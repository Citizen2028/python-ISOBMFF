// generate by pypp
// original source code: ISOBMFF/FRMA.hpp

#include <boost/python.hpp>

#include "ISOBMFF/FRMA.hpp"
#include "ISOBMFF/Parser.hpp"


class FRMAWrapper :
    public ISOBMFF::FRMA,
    public boost::python::wrapper<ISOBMFF::FRMA>
{
public:
    using ISOBMFF::FRMA::FRMA;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            FRMA::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return FRMA::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_FRMA_hpp() {
    boost::python::class_<FRMAWrapper, boost::python::bases<ISOBMFF::Box>, std::shared_ptr<ISOBMFF::FRMA>>("FRMA")
        .def("ReadData", &ISOBMFF::FRMA::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::FRMA::GetDisplayableProperties)
        .def("GetDataFormat", &ISOBMFF::FRMA::GetDataFormat)
        .def("SetDataFormat", &ISOBMFF::FRMA::SetDataFormat)
        ;
}
