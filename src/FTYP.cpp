// generate by pypp
// original source code: ISOBMFF/FTYP.hpp

#include <boost/python.hpp>

#include "ISOBMFF/FTYP.hpp"
#include "ISOBMFF/Parser.hpp"



class FTYPWrapper :
    public ISOBMFF::FTYP,
    public boost::python::wrapper<ISOBMFF::FTYP>
{
public:
    using ISOBMFF::FTYP::FTYP;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            FTYP::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return FTYP::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_FTYP_hpp() {
    boost::python::class_<FTYPWrapper, boost::python::bases<ISOBMFF::Box>, std::shared_ptr<ISOBMFF::FTYP>>("FTYP")
        .def("ReadData", &ISOBMFF::FTYP::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::FTYP::GetDisplayableProperties)
        .def("GetMajorBrand", &ISOBMFF::FTYP::GetMajorBrand)
        .def("GetMinorVersion", &ISOBMFF::FTYP::GetMinorVersion)
        .def("GetCompatibleBrands", &ISOBMFF::FTYP::GetCompatibleBrands)
        .def("SetMajorBrand", &ISOBMFF::FTYP::SetMajorBrand)
        .def("SetMinorVersion", &ISOBMFF::FTYP::SetMinorVersion)
        .def("SetCompatibleBrands", &ISOBMFF::FTYP::SetCompatibleBrands)
        .def("AddCompatibleBrand", &ISOBMFF::FTYP::AddCompatibleBrand)
        ;
}
