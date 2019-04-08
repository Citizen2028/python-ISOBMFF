// generate by pypp
// original source code: ISOBMFF/Container.hpp

#include <boost/python.hpp>

#include "ISOBMFF/Container.hpp"



class ContainerWrapper :
    public ISOBMFF::Container,
    public boost::python::wrapper<ISOBMFF::Container>
{
public:
    void AddBox (std::shared_ptr<ISOBMFF::Box> box) override {
        if ( auto AddBox = this->get_override("AddBox") ) {
            AddBox(box);
        } else {
            Container::AddBox(box);
        }
    }
    std::vector<std::shared_ptr<ISOBMFF::Box> > GetBoxes () const override {
        if ( auto GetBoxes = this->get_override("GetBoxes") ) {
            return GetBoxes();
        } else {
            return Container::GetBoxes();
        }
    }
};

void init_ISOBMFF_Container_hpp() {
    boost::python::class_<ContainerWrapper, std::shared_ptr<ISOBMFF::Container>, boost::noncopyable>("Container", boost::python::no_init)
        .def("WriteBoxes", static_cast<void(*)(const std::vector<std::shared_ptr<ISOBMFF::Box> > &, std::ostream &, std::size_t)>(&ISOBMFF::Container::WriteBoxes))
        .def("WriteBoxes", static_cast<void(ISOBMFF::Container::*)(std::ostream &, std::size_t) const>(&ISOBMFF::Container::WriteBoxes))
        .def("AddBox", &ISOBMFF::Container::AddBox)
        .def("GetBoxes", static_cast<std::vector<std::shared_ptr<ISOBMFF::Box> >(ISOBMFF::Container::*)() const>(&ISOBMFF::Container::GetBoxes))
        .def("GetBoxes", static_cast<std::vector<std::shared_ptr<ISOBMFF::Box> >(ISOBMFF::Container::*)(const std::string &) const>(&ISOBMFF::Container::GetBoxes))
        .def("GetBox", &ISOBMFF::Container::GetBox)
        .staticmethod("WriteBoxes")
        ;
}
