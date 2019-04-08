// generate by pypp
// original source code: ISOBMFF/ContainerBox.hpp

#include <boost/python.hpp>

#include "ISOBMFF/ContainerBox.hpp"
#include "ISOBMFF/Parser.hpp"



class ContainerBoxWrapper :
    public ISOBMFF::ContainerBox,
    public boost::python::wrapper<ISOBMFF::ContainerBox>
{
public:
    using ISOBMFF::ContainerBox::ContainerBox;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            ContainerBox::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            ContainerBox::WriteDescription(os, indentLevel);
        }
    }
    void AddBox (std::shared_ptr<Box> box) override {
        if ( auto AddBox = this->get_override("AddBox") ) {
            AddBox(box);
        } else {
            ContainerBox::AddBox(box);
        }
    }
    std::vector<std::shared_ptr<Box> > GetBoxes () const override {
        if ( auto GetBoxes = this->get_override("GetBoxes") ) {
            return GetBoxes();
        } else {
            return ContainerBox::GetBoxes();
        }
    }
};

void init_ISOBMFF_ContainerBox_hpp() {
    boost::python::class_<ContainerBoxWrapper, boost::python::bases<ISOBMFF::Box, ISOBMFF::Container>, std::shared_ptr<ISOBMFF::ContainerBox>>("ContainerBox", boost::python::init<const std::string &>())
        .def("ReadData", &ISOBMFF::ContainerBox::ReadData)
        .def("WriteDescription", &ISOBMFF::ContainerBox::WriteDescription)
        .def("AddBox", &ISOBMFF::ContainerBox::AddBox)
        .def("GetBoxes", &ISOBMFF::ContainerBox::GetBoxes)
        ;
}
