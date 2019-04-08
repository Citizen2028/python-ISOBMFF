// generate by pypp
// original source code: ISOBMFF/ImageGrid.hpp

#include <boost/python.hpp>

#include "ISOBMFF/ImageGrid.hpp"



class ImageGridWrapper :
    public ISOBMFF::ImageGrid,
    public boost::python::wrapper<ISOBMFF::ImageGrid>
{
public:
    using ISOBMFF::ImageGrid::ImageGrid;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return ImageGrid::GetName();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return ImageGrid::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_ImageGrid_hpp() {
    boost::python::class_<ImageGridWrapper, boost::python::bases<ISOBMFF::DisplayableObject>, std::shared_ptr<ISOBMFF::ImageGrid>>("ImageGrid")
        .def(boost::python::init<ISOBMFF::BinaryStream &>())
        .def("GetName", &ISOBMFF::ImageGrid::GetName)
        .def("GetVersion", &ISOBMFF::ImageGrid::GetVersion)
        .def("GetFlags", &ISOBMFF::ImageGrid::GetFlags)
        .def("GetRows", &ISOBMFF::ImageGrid::GetRows)
        .def("GetColumns", &ISOBMFF::ImageGrid::GetColumns)
        .def("GetOutputWidth", &ISOBMFF::ImageGrid::GetOutputWidth)
        .def("GetOutputHeight", &ISOBMFF::ImageGrid::GetOutputHeight)
        .def("SetVersion", &ISOBMFF::ImageGrid::SetVersion)
        .def("SetFlags", &ISOBMFF::ImageGrid::SetFlags)
        .def("SetRows", &ISOBMFF::ImageGrid::SetRows)
        .def("SetColumns", &ISOBMFF::ImageGrid::SetColumns)
        .def("SetOutputWidth", &ISOBMFF::ImageGrid::SetOutputWidth)
        .def("SetOutputHeight", &ISOBMFF::ImageGrid::SetOutputHeight)
        .def("GetDisplayableProperties", &ISOBMFF::ImageGrid::GetDisplayableProperties)
        ;
}
