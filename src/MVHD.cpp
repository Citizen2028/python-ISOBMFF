// generate by pypp
// original source code: ISOBMFF/MVHD.hpp

#include <boost/python.hpp>

#include "ISOBMFF/MVHD.hpp"
#include "ISOBMFF/Parser.hpp"



class MVHDWrapper :
    public ISOBMFF::MVHD,
    public boost::python::wrapper<ISOBMFF::MVHD>
{
public:
    using ISOBMFF::MVHD::MVHD;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            MVHD::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return MVHD::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_MVHD_hpp() {
    boost::python::class_<MVHDWrapper, boost::python::bases<ISOBMFF::FullBox>, std::shared_ptr<ISOBMFF::MVHD>>("MVHD")
        .def("ReadData", &ISOBMFF::MVHD::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::MVHD::GetDisplayableProperties)
        .def("GetCreationTime", &ISOBMFF::MVHD::GetCreationTime)
        .def("GetModificationTime", &ISOBMFF::MVHD::GetModificationTime)
        .def("GetTimescale", &ISOBMFF::MVHD::GetTimescale)
        .def("GetDuration", &ISOBMFF::MVHD::GetDuration)
        .def("GetRate", &ISOBMFF::MVHD::GetRate)
        .def("GetVolume", &ISOBMFF::MVHD::GetVolume)
        .def("GetMatrix", &ISOBMFF::MVHD::GetMatrix)
        .def("GetNextTrackID", &ISOBMFF::MVHD::GetNextTrackID)
        .def("SetCreationTime", &ISOBMFF::MVHD::SetCreationTime)
        .def("SetModificationTime", &ISOBMFF::MVHD::SetModificationTime)
        .def("SetTimescale", &ISOBMFF::MVHD::SetTimescale)
        .def("SetDuration", &ISOBMFF::MVHD::SetDuration)
        .def("SetRate", &ISOBMFF::MVHD::SetRate)
        .def("SetVolume", &ISOBMFF::MVHD::SetVolume)
        .def("SetMatrix", &ISOBMFF::MVHD::SetMatrix)
        .def("SetNextTrackID", &ISOBMFF::MVHD::SetNextTrackID)
        ;
}
