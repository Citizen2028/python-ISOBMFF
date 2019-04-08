// generate by pypp
// original source code: ISOBMFF/PIXI.hpp

#include <boost/python.hpp>

#include "ISOBMFF/PIXI.hpp"
#include "ISOBMFF/Parser.hpp"



class PIXIWrapper :
    public ISOBMFF::PIXI,
    public boost::python::wrapper<ISOBMFF::PIXI>
{
public:
    using ISOBMFF::PIXI::PIXI;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            PIXI::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            PIXI::WriteDescription(os, indentLevel);
        }
    }
    std::vector<std::shared_ptr<DisplayableObject> > GetDisplayableObjects () const override {
        if ( auto GetDisplayableObjects = this->get_override("GetDisplayableObjects") ) {
            return GetDisplayableObjects();
        } else {
            return PIXI::GetDisplayableObjects();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return PIXI::GetDisplayableProperties();
        }
    }
};
class ChannelWrapper :
    public ISOBMFF::PIXI::Channel,
    public boost::python::wrapper<ISOBMFF::PIXI::Channel>
{
public:
    using ISOBMFF::PIXI::Channel::Channel;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return Channel::GetName();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return Channel::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_PIXI_hpp() {
    boost::python::class_<PIXIWrapper, boost::python::bases<ISOBMFF::FullBox, ISOBMFF::DisplayableObjectContainer>, std::shared_ptr<ISOBMFF::PIXI>>("PIXI")
        .def("ReadData", &ISOBMFF::PIXI::ReadData)
        .def("WriteDescription", &ISOBMFF::PIXI::WriteDescription)
        .def("GetDisplayableObjects", &ISOBMFF::PIXI::GetDisplayableObjects)
        .def("GetDisplayableProperties", &ISOBMFF::PIXI::GetDisplayableProperties)
        .def("GetChannels", &ISOBMFF::PIXI::GetChannels)
        .def("AddChannel", &ISOBMFF::PIXI::AddChannel)
        ;
    boost::python::class_<ChannelWrapper, boost::python::bases<ISOBMFF::DisplayableObject>, std::shared_ptr<ISOBMFF::PIXI::Channel>>("Channel")
        .def(boost::python::init<ISOBMFF::BinaryStream &>())
        .def("GetName", &ISOBMFF::PIXI::Channel::GetName)
        .def("GetBitsPerChannel", &ISOBMFF::PIXI::Channel::GetBitsPerChannel)
        .def("SetBitsPerChannel", &ISOBMFF::PIXI::Channel::SetBitsPerChannel)
        .def("GetDisplayableProperties", &ISOBMFF::PIXI::Channel::GetDisplayableProperties)
        ;
}
