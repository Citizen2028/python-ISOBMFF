// generate by pypp
// original source code: ISOBMFF/TKHD.hpp

#include <boost/python.hpp>

#include "ISOBMFF/TKHD.hpp"
#include "ISOBMFF/Parser.hpp"



class TKHDWrapper :
    public ISOBMFF::TKHD,
    public boost::python::wrapper<ISOBMFF::TKHD>
{
public:
    using ISOBMFF::TKHD::TKHD;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            TKHD::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return TKHD::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_TKHD_hpp() {
    boost::python::class_<TKHDWrapper, boost::python::bases<ISOBMFF::FullBox>, std::shared_ptr<ISOBMFF::TKHD>>("TKHD")
        .def("ReadData", &ISOBMFF::TKHD::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::TKHD::GetDisplayableProperties)
        .def("GetCreationTime", &ISOBMFF::TKHD::GetCreationTime)
        .def("GetModificationTime", &ISOBMFF::TKHD::GetModificationTime)
        .def("GetTrackID", &ISOBMFF::TKHD::GetTrackID)
        .def("GetDuration", &ISOBMFF::TKHD::GetDuration)
        .def("GetLayer", &ISOBMFF::TKHD::GetLayer)
        .def("GetAlternateGroup", &ISOBMFF::TKHD::GetAlternateGroup)
        .def("GetVolume", &ISOBMFF::TKHD::GetVolume)
        .def("GetMatrix", &ISOBMFF::TKHD::GetMatrix)
        .def("GetWidth", &ISOBMFF::TKHD::GetWidth)
        .def("GetHeight", &ISOBMFF::TKHD::GetHeight)
        .def("SetCreationTime", &ISOBMFF::TKHD::SetCreationTime)
        .def("SetModificationTime", &ISOBMFF::TKHD::SetModificationTime)
        .def("SetTrackID", &ISOBMFF::TKHD::SetTrackID)
        .def("SetDuration", &ISOBMFF::TKHD::SetDuration)
        .def("SetLayer", &ISOBMFF::TKHD::SetLayer)
        .def("SetAlternateGroup", &ISOBMFF::TKHD::SetAlternateGroup)
        .def("SetVolume", &ISOBMFF::TKHD::SetVolume)
        .def("SetMatrix", &ISOBMFF::TKHD::SetMatrix)
        .def("SetWidth", &ISOBMFF::TKHD::SetWidth)
        .def("SetHeight", &ISOBMFF::TKHD::SetHeight)
        ;
}
