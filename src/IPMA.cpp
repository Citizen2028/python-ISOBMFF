// generate by pypp
// original source code: ISOBMFF/IPMA.hpp

#include <boost/python.hpp>

#include "ISOBMFF/IPMA.hpp"
#include "ISOBMFF/Parser.hpp"



class IPMAWrapper :
    public ISOBMFF::IPMA,
    public boost::python::wrapper<ISOBMFF::IPMA>
{
public:
    using ISOBMFF::IPMA::IPMA;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            IPMA::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            IPMA::WriteDescription(os, indentLevel);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return IPMA::GetDisplayableProperties();
        }
    }
    std::vector<std::shared_ptr<DisplayableObject> > GetDisplayableObjects () const override {
        if ( auto GetDisplayableObjects = this->get_override("GetDisplayableObjects") ) {
            return GetDisplayableObjects();
        } else {
            return IPMA::GetDisplayableObjects();
        }
    }
};
class EntryWrapper :
    public ISOBMFF::IPMA::Entry,
    public boost::python::wrapper<ISOBMFF::IPMA::Entry>
{
public:
    using ISOBMFF::IPMA::Entry::Entry;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return Entry::GetName();
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            Entry::WriteDescription(os, indentLevel);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return Entry::GetDisplayableProperties();
        }
    }
    std::vector<std::shared_ptr<DisplayableObject> > GetDisplayableObjects () const override {
        if ( auto GetDisplayableObjects = this->get_override("GetDisplayableObjects") ) {
            return GetDisplayableObjects();
        } else {
            return Entry::GetDisplayableObjects();
        }
    }
};
class AssociationWrapper :
    public ISOBMFF::IPMA::Entry::Association,
    public boost::python::wrapper<ISOBMFF::IPMA::Entry::Association>
{
public:
    using ISOBMFF::IPMA::Entry::Association::Association;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return Association::GetName();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return Association::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_IPMA_hpp() {
    boost::python::class_<IPMAWrapper, boost::python::bases<ISOBMFF::FullBox, ISOBMFF::DisplayableObjectContainer>, std::shared_ptr<ISOBMFF::IPMA>>("IPMA")
        .def("ReadData", &ISOBMFF::IPMA::ReadData)
        .def("WriteDescription", &ISOBMFF::IPMA::WriteDescription)
        .def("GetDisplayableProperties", &ISOBMFF::IPMA::GetDisplayableProperties)
        .def("GetDisplayableObjects", &ISOBMFF::IPMA::GetDisplayableObjects)
        .def("GetEntries", &ISOBMFF::IPMA::GetEntries)
        .def("GetEntry", &ISOBMFF::IPMA::GetEntry)
        .def("AddEntry", &ISOBMFF::IPMA::AddEntry)
        ;
    boost::python::class_<EntryWrapper, boost::python::bases<ISOBMFF::DisplayableObject, ISOBMFF::DisplayableObjectContainer>, std::shared_ptr<ISOBMFF::IPMA::Entry>>("Entry")
        .def(boost::python::init<ISOBMFF::BinaryStream &, const ISOBMFF::IPMA &>())
        .def("GetName", &ISOBMFF::IPMA::Entry::GetName)
        .def("GetItemID", &ISOBMFF::IPMA::Entry::GetItemID)
        .def("SetItemID", &ISOBMFF::IPMA::Entry::SetItemID)
        .def("WriteDescription", &ISOBMFF::IPMA::Entry::WriteDescription)
        .def("GetDisplayableProperties", &ISOBMFF::IPMA::Entry::GetDisplayableProperties)
        .def("GetDisplayableObjects", &ISOBMFF::IPMA::Entry::GetDisplayableObjects)
        .def("GetAssociations", &ISOBMFF::IPMA::Entry::GetAssociations)
        .def("AddAssociation", &ISOBMFF::IPMA::Entry::AddAssociation)
        ;
    boost::python::class_<AssociationWrapper, boost::python::bases<ISOBMFF::DisplayableObject>, std::shared_ptr<ISOBMFF::IPMA::Entry::Association>>("Association")
        .def(boost::python::init<ISOBMFF::BinaryStream &, const ISOBMFF::IPMA &>())
        .def("GetName", &ISOBMFF::IPMA::Entry::Association::GetName)
        .def("GetEssential", &ISOBMFF::IPMA::Entry::Association::GetEssential)
        .def("GetPropertyIndex", &ISOBMFF::IPMA::Entry::Association::GetPropertyIndex)
        .def("SetEssential", &ISOBMFF::IPMA::Entry::Association::SetEssential)
        .def("SetPropertyIndex", &ISOBMFF::IPMA::Entry::Association::SetPropertyIndex)
        .def("GetDisplayableProperties", &ISOBMFF::IPMA::Entry::Association::GetDisplayableProperties)
        ;
}
