// generate by pypp
// original source code: ISOBMFF/INFE.hpp

#include <boost/python.hpp>

#include "ISOBMFF/INFE.hpp"
#include "ISOBMFF/Parser.hpp"



class INFEWrapper :
    public ISOBMFF::INFE,
    public boost::python::wrapper<ISOBMFF::INFE>
{
public:
    using ISOBMFF::INFE::INFE;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            INFE::ReadData(parser, stream);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return INFE::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_INFE_hpp() {
    boost::python::class_<INFEWrapper, boost::python::bases<ISOBMFF::FullBox>, std::shared_ptr<ISOBMFF::INFE>>("INFE")
        .def("ReadData", &ISOBMFF::INFE::ReadData)
        .def("GetDisplayableProperties", &ISOBMFF::INFE::GetDisplayableProperties)
        .def("GetItemID", &ISOBMFF::INFE::GetItemID)
        .def("GetItemProtectionIndex", &ISOBMFF::INFE::GetItemProtectionIndex)
        .def("GetItemType", &ISOBMFF::INFE::GetItemType)
        .def("GetItemName", &ISOBMFF::INFE::GetItemName)
        .def("GetContentType", &ISOBMFF::INFE::GetContentType)
        .def("GetContentEncoding", &ISOBMFF::INFE::GetContentEncoding)
        .def("GetItemURIType", &ISOBMFF::INFE::GetItemURIType)
        .def("SetItemID", &ISOBMFF::INFE::SetItemID)
        .def("SetItemProtectionIndex", &ISOBMFF::INFE::SetItemProtectionIndex)
        .def("SetItemType", &ISOBMFF::INFE::SetItemType)
        .def("SetItemName", &ISOBMFF::INFE::SetItemName)
        .def("SetContentType", &ISOBMFF::INFE::SetContentType)
        .def("SetContentEncoding", &ISOBMFF::INFE::SetContentEncoding)
        .def("SetItemURIType", &ISOBMFF::INFE::SetItemURIType)
        ;
}
