// generate by pypp
// original source code: ISOBMFF/PITM.hpp

#include <boost/python.hpp>

#include "ISOBMFF/PITM.hpp"
#include "ISOBMFF/Parser.hpp"



class PITMWrapper :
    public ISOBMFF::PITM,
    public boost::python::wrapper<ISOBMFF::PITM>
{
public:
    using ISOBMFF::PITM::PITM;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            PITM::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return PITM::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_PITM_hpp() {
    boost::python::class_<PITMWrapper, boost::python::bases<ISOBMFF::FullBox>, std::shared_ptr<ISOBMFF::PITM>>("PITM")
        .def("ReadData", &ISOBMFF::PITM::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::PITM::GetDisplayableProperties)
        .def("GetItemID", &ISOBMFF::PITM::GetItemID)
        .def("SetItemID", &ISOBMFF::PITM::SetItemID)
        ;
}
