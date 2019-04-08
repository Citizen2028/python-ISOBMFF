// generate by pypp
// original source code: ISOBMFF/DisplayableObjectContainer.hpp

#include <boost/python.hpp>

#include "ISOBMFF/DisplayableObjectContainer.hpp"
#include "ISOBMFF/DisplayableObject.hpp"


class DisplayableObjectContainerWrapper :
    public ISOBMFF::DisplayableObjectContainer,
    public boost::python::wrapper<ISOBMFF::DisplayableObjectContainer>
{
public:
    std::vector<std::shared_ptr<ISOBMFF::DisplayableObject> > GetDisplayableObjects () const override {
        if ( auto GetDisplayableObjects = this->get_override("GetDisplayableObjects") ) {
            return GetDisplayableObjects();
        } else {
            return DisplayableObjectContainer::GetDisplayableObjects();
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            DisplayableObjectContainer::WriteDescription(os, indentLevel);
        }
    }
};

void init_ISOBMFF_DisplayableObjectContainer_hpp() {
    boost::python::class_<DisplayableObjectContainerWrapper, std::shared_ptr<ISOBMFF::DisplayableObjectContainer>, boost::noncopyable>("DisplayableObjectContainer", boost::python::no_init)
        .def("GetDisplayableObjects", &ISOBMFF::DisplayableObjectContainer::GetDisplayableObjects)
        .def("WriteDescription", &ISOBMFF::DisplayableObjectContainer::WriteDescription)
        ;
}
