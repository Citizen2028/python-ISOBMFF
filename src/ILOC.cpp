// generate by pypp
// original source code: ISOBMFF/ILOC.hpp

#include <boost/python.hpp>

#include "ISOBMFF/ILOC.hpp"
#include "ISOBMFF/Parser.hpp"



class ILOCWrapper :
    public ISOBMFF::ILOC,
    public boost::python::wrapper<ISOBMFF::ILOC>
{
public:
    using ISOBMFF::ILOC::ILOC;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            ILOC::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            ILOC::WriteDescription(os, indentLevel);
        }
    }
    std::vector<std::shared_ptr<DisplayableObject> > GetDisplayableObjects () const override {
        if ( auto GetDisplayableObjects = this->get_override("GetDisplayableObjects") ) {
            return GetDisplayableObjects();
        } else {
            return ILOC::GetDisplayableObjects();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return ILOC::GetDisplayableProperties();
        }
    }
};
class ItemWrapper :
    public ISOBMFF::ILOC::Item,
    public boost::python::wrapper<ISOBMFF::ILOC::Item>
{
public:
    using ISOBMFF::ILOC::Item::Item;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return Item::GetName();
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            Item::WriteDescription(os, indentLevel);
        }
    }
    std::vector<std::shared_ptr<DisplayableObject> > GetDisplayableObjects () const override {
        if ( auto GetDisplayableObjects = this->get_override("GetDisplayableObjects") ) {
            return GetDisplayableObjects();
        } else {
            return Item::GetDisplayableObjects();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return Item::GetDisplayableProperties();
        }
    }
};
class ExtentWrapper :
    public ISOBMFF::ILOC::Item::Extent,
    public boost::python::wrapper<ISOBMFF::ILOC::Item::Extent>
{
public:
    using ISOBMFF::ILOC::Item::Extent::Extent;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return Extent::GetName();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return Extent::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_ILOC_hpp() {
    boost::python::class_<ILOCWrapper, boost::python::bases<ISOBMFF::FullBox, ISOBMFF::DisplayableObjectContainer>, std::shared_ptr<ISOBMFF::ILOC>>("ILOC")
        .def("ReadData", &ISOBMFF::ILOC::ReadData)
        .def("WriteDescription", &ISOBMFF::ILOC::WriteDescription)
        .def("GetDisplayableObjects", &ISOBMFF::ILOC::GetDisplayableObjects)
        .def("GetDisplayableProperties", &ISOBMFF::ILOC::GetDisplayableProperties)
        .def("GetOffsetSize", &ISOBMFF::ILOC::GetOffsetSize)
        .def("GetLengthSize", &ISOBMFF::ILOC::GetLengthSize)
        .def("GetBaseOffsetSize", &ISOBMFF::ILOC::GetBaseOffsetSize)
        .def("GetIndexSize", &ISOBMFF::ILOC::GetIndexSize)
        .def("SetOffsetSize", &ISOBMFF::ILOC::SetOffsetSize)
        .def("SetLengthSize", &ISOBMFF::ILOC::SetLengthSize)
        .def("SetBaseOffsetSize", &ISOBMFF::ILOC::SetBaseOffsetSize)
        .def("SetIndexSize", &ISOBMFF::ILOC::SetIndexSize)
        .def("GetItems", &ISOBMFF::ILOC::GetItems)
        .def("GetItem", &ISOBMFF::ILOC::GetItem)
        .def("AddItem", &ISOBMFF::ILOC::AddItem)
        ;
    boost::python::class_<ItemWrapper, boost::python::bases<ISOBMFF::DisplayableObject, ISOBMFF::DisplayableObjectContainer>, std::shared_ptr<ISOBMFF::ILOC::Item>>("Item")
        .def(boost::python::init<ISOBMFF::BinaryStream &, const ISOBMFF::ILOC &>())
        .def("GetName", &ISOBMFF::ILOC::Item::GetName)
        .def("GetItemID", &ISOBMFF::ILOC::Item::GetItemID)
        .def("GetConstructionMethod", &ISOBMFF::ILOC::Item::GetConstructionMethod)
        .def("GetDataReferenceIndex", &ISOBMFF::ILOC::Item::GetDataReferenceIndex)
        .def("GetBaseOffset", &ISOBMFF::ILOC::Item::GetBaseOffset)
        .def("SetItemID", &ISOBMFF::ILOC::Item::SetItemID)
        .def("SetConstructionMethod", &ISOBMFF::ILOC::Item::SetConstructionMethod)
        .def("SetDataReferenceIndex", &ISOBMFF::ILOC::Item::SetDataReferenceIndex)
        .def("SetBaseOffset", &ISOBMFF::ILOC::Item::SetBaseOffset)
        .def("WriteDescription", &ISOBMFF::ILOC::Item::WriteDescription)
        .def("GetDisplayableObjects", &ISOBMFF::ILOC::Item::GetDisplayableObjects)
        .def("GetDisplayableProperties", &ISOBMFF::ILOC::Item::GetDisplayableProperties)
        .def("GetExtents", &ISOBMFF::ILOC::Item::GetExtents)
        .def("AddExtent", &ISOBMFF::ILOC::Item::AddExtent)
        ;
    boost::python::class_<ExtentWrapper, boost::python::bases<ISOBMFF::DisplayableObject>, std::shared_ptr<ISOBMFF::ILOC::Item::Extent>>("Extent")
        .def(boost::python::init<ISOBMFF::BinaryStream &, const ISOBMFF::ILOC &>())
        .def("GetName", &ISOBMFF::ILOC::Item::Extent::GetName)
        .def("GetIndex", &ISOBMFF::ILOC::Item::Extent::GetIndex)
        .def("GetOffset", &ISOBMFF::ILOC::Item::Extent::GetOffset)
        .def("GetLength", &ISOBMFF::ILOC::Item::Extent::GetLength)
        .def("SetIndex", &ISOBMFF::ILOC::Item::Extent::SetIndex)
        .def("SetOffset", &ISOBMFF::ILOC::Item::Extent::SetOffset)
        .def("SetLength", &ISOBMFF::ILOC::Item::Extent::SetLength)
        .def("GetDisplayableProperties", &ISOBMFF::ILOC::Item::Extent::GetDisplayableProperties)
        ;
}
