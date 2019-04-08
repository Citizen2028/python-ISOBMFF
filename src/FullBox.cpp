// generate by pypp
// original source code: ISOBMFF/FullBox.hpp

#include <boost/python.hpp>

#include "ISOBMFF/FullBox.hpp"
#include "ISOBMFF/Parser.hpp"



class FullBoxWrapper :
    public ISOBMFF::FullBox,
    public boost::python::wrapper<ISOBMFF::FullBox>
{
public:
    using ISOBMFF::FullBox::FullBox;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            FullBox::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return FullBox::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_FullBox_hpp() {
    boost::python::class_<FullBoxWrapper, boost::python::bases<ISOBMFF::Box>, std::shared_ptr<ISOBMFF::FullBox>>("FullBox", boost::python::init<const std::string &>())
        .def("ReadData", &ISOBMFF::FullBox::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::FullBox::GetDisplayableProperties)
        .def("GetVersion", &ISOBMFF::FullBox::GetVersion)
        .def("GetFlags", &ISOBMFF::FullBox::GetFlags)
        .def("SetVersion", &ISOBMFF::FullBox::SetVersion)
        .def("SetFlags", &ISOBMFF::FullBox::SetFlags)
        ;
}
