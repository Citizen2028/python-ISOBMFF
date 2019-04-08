// generate by pypp
// original source code: ISOBMFF/Box.hpp

#include <boost/python.hpp>

#include "ISOBMFF/Box.hpp"
#include "ISOBMFF/Parser.hpp"



class BoxWrapper :
    public ISOBMFF::Box,
    public boost::python::wrapper<ISOBMFF::Box>
{
public:
    using ISOBMFF::Box::Box;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return Box::GetName();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return Box::GetDisplayableProperties();
        }
    }
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            Box::ReadData(parser, stream);
        }
    }
    std::vector<uint8_t> GetData () const override {
        if ( auto GetData = this->get_override("GetData") ) {
            return GetData();
        } else {
            return Box::GetData();
        }
    }
};

void init_ISOBMFF_Box_hpp() {
    boost::python::class_<BoxWrapper, boost::python::bases<ISOBMFF::DisplayableObject>, std::shared_ptr<ISOBMFF::Box>>("Box", boost::python::init<const std::string &>())
        .def("GetName", &ISOBMFF::Box::GetName)
        .def("GetDisplayableProperties", &ISOBMFF::Box::GetDisplayableProperties)
        .def("ReadData", &ISOBMFF::Box::ReadData)
        .def("GetData", &ISOBMFF::Box::GetData)
        ;
}
