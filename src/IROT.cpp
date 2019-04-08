// generate by pypp
// original source code: ISOBMFF/IROT.hpp

#include <boost/python.hpp>

#include "ISOBMFF/IROT.hpp"
#include "ISOBMFF/Parser.hpp"



class IROTWrapper :
    public ISOBMFF::IROT,
    public boost::python::wrapper<ISOBMFF::IROT>
{
public:
    using ISOBMFF::IROT::IROT;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            IROT::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return IROT::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_IROT_hpp() {
    boost::python::class_<IROTWrapper, boost::python::bases<ISOBMFF::Box>, std::shared_ptr<ISOBMFF::IROT>>("IROT")
        .def("ReadData", &ISOBMFF::IROT::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::IROT::GetDisplayableProperties)
        .def("GetAngle", &ISOBMFF::IROT::GetAngle)
        .def("SetAngle", &ISOBMFF::IROT::SetAngle)
        ;
}
