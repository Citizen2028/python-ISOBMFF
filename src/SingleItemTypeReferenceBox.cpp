// generate by pypp
// original source code: ISOBMFF/SingleItemTypeReferenceBox.hpp

#include <boost/python.hpp>

#include "ISOBMFF/SingleItemTypeReferenceBox.hpp"
#include "ISOBMFF/Parser.hpp"



class SingleItemTypeReferenceBoxWrapper :
    public ISOBMFF::SingleItemTypeReferenceBox,
    public boost::python::wrapper<ISOBMFF::SingleItemTypeReferenceBox>
{
public:
    using ISOBMFF::SingleItemTypeReferenceBox::SingleItemTypeReferenceBox;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            SingleItemTypeReferenceBox::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return SingleItemTypeReferenceBox::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_SingleItemTypeReferenceBox_hpp() {
    boost::python::class_<SingleItemTypeReferenceBoxWrapper, boost::python::bases<ISOBMFF::Box>, std::shared_ptr<ISOBMFF::SingleItemTypeReferenceBox>>("SingleItemTypeReferenceBox", boost::python::init<const std::string &>())
        .def("ReadData", &ISOBMFF::SingleItemTypeReferenceBox::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::SingleItemTypeReferenceBox::GetDisplayableProperties)
        .def("GetFromItemID", &ISOBMFF::SingleItemTypeReferenceBox::GetFromItemID)
        .def("GetToItemIDs", &ISOBMFF::SingleItemTypeReferenceBox::GetToItemIDs)
        .def("SetFromItemID", &ISOBMFF::SingleItemTypeReferenceBox::SetFromItemID)
        .def("AddToItemID", &ISOBMFF::SingleItemTypeReferenceBox::AddToItemID)
        ;
}
