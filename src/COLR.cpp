// generate by pypp
// original source code: ISOBMFF/COLR.hpp

#include <boost/python.hpp>

#include "ISOBMFF/COLR.hpp"
#include "ISOBMFF/Parser.hpp"



class COLRWrapper :
    public ISOBMFF::COLR,
    public boost::python::wrapper<ISOBMFF::COLR>
{
public:
    using ISOBMFF::COLR::COLR;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            COLR::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return COLR::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_COLR_hpp() {
    boost::python::class_<COLRWrapper, boost::python::bases<ISOBMFF::Box>, std::shared_ptr<ISOBMFF::COLR>>("COLR")
        .def("ReadData", &ISOBMFF::COLR::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::COLR::GetDisplayableProperties)
        .def("GetColourType", &ISOBMFF::COLR::GetColourType)
        .def("GetColourPrimaries", &ISOBMFF::COLR::GetColourPrimaries)
        .def("GetTransferCharacteristics", &ISOBMFF::COLR::GetTransferCharacteristics)
        .def("GetMatrixCoefficients", &ISOBMFF::COLR::GetMatrixCoefficients)
        .def("GetFullRangeFlag", &ISOBMFF::COLR::GetFullRangeFlag)
        .def("GetICCProfile", &ISOBMFF::COLR::GetICCProfile)
        .def("SetColourType", &ISOBMFF::COLR::SetColourType)
        .def("SetColourPrimaries", &ISOBMFF::COLR::SetColourPrimaries)
        .def("SetTransferCharacteristics", &ISOBMFF::COLR::SetTransferCharacteristics)
        .def("SetMatrixCoefficients", &ISOBMFF::COLR::SetMatrixCoefficients)
        .def("SetFullRangeFlag", &ISOBMFF::COLR::SetFullRangeFlag)
        .def("SetICCProfile", &ISOBMFF::COLR::SetICCProfile)
        ;
}
