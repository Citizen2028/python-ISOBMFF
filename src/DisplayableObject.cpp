// generate by pypp
// original source code: ISOBMFF/DisplayableObject.hpp

#include <boost/python.hpp>

#include "ISOBMFF/DisplayableObject.hpp"



class DisplayableObjectWrapper :
    public ISOBMFF::DisplayableObject,
    public boost::python::wrapper<ISOBMFF::DisplayableObject>
{
public:
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return DisplayableObject::GetDisplayableProperties();
        }
    }
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return DisplayableObject::GetName();
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            DisplayableObject::WriteDescription(os, indentLevel);
        }
    }
    std::string ToString () const override {
        if ( auto ToString = this->get_override("ToString") ) {
            return ToString();
        } else {
            return DisplayableObject::ToString();
        }
    }
};

void init_ISOBMFF_DisplayableObject_hpp() {
    boost::python::class_<DisplayableObjectWrapper, std::shared_ptr<ISOBMFF::DisplayableObject>, boost::noncopyable>("DisplayableObject", boost::python::no_init)
        .def("GetDisplayableProperties", &ISOBMFF::DisplayableObject::GetDisplayableProperties)
        .def("GetName", &ISOBMFF::DisplayableObject::GetName)
        .def("WriteDescription", &ISOBMFF::DisplayableObject::WriteDescription)
        .def("ToString", &ISOBMFF::DisplayableObject::ToString)
        ;
}
