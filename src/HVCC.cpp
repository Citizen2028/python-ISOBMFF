// generate by pypp
// original source code: ISOBMFF/HVCC.hpp

#include <boost/python.hpp>

#include "ISOBMFF/HVCC.hpp"
#include "ISOBMFF/Parser.hpp"



class HVCCWrapper :
    public ISOBMFF::HVCC,
    public boost::python::wrapper<ISOBMFF::HVCC>
{
public:
    using ISOBMFF::HVCC::HVCC;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            HVCC::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            HVCC::WriteDescription(os, indentLevel);
        }
    }
    std::vector<std::shared_ptr<DisplayableObject> > GetDisplayableObjects () const override {
        if ( auto GetDisplayableObjects = this->get_override("GetDisplayableObjects") ) {
            return GetDisplayableObjects();
        } else {
            return HVCC::GetDisplayableObjects();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return HVCC::GetDisplayableProperties();
        }
    }
};
class ArrayWrapper :
    public ISOBMFF::HVCC::Array,
    public boost::python::wrapper<ISOBMFF::HVCC::Array>
{
public:
    using ISOBMFF::HVCC::Array::Array;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return Array::GetName();
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            Array::WriteDescription(os, indentLevel);
        }
    }
    std::vector<std::shared_ptr<DisplayableObject> > GetDisplayableObjects () const override {
        if ( auto GetDisplayableObjects = this->get_override("GetDisplayableObjects") ) {
            return GetDisplayableObjects();
        } else {
            return Array::GetDisplayableObjects();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return Array::GetDisplayableProperties();
        }
    }
};
class NALUnitWrapper :
    public ISOBMFF::HVCC::Array::NALUnit,
    public boost::python::wrapper<ISOBMFF::HVCC::Array::NALUnit>
{
public:
    using ISOBMFF::HVCC::Array::NALUnit::NALUnit;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return NALUnit::GetName();
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return NALUnit::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_HVCC_hpp() {
    boost::python::class_<HVCCWrapper, boost::python::bases<ISOBMFF::Box, ISOBMFF::DisplayableObjectContainer>, std::shared_ptr<ISOBMFF::HVCC>>("HVCC")
        .def("ReadData", &ISOBMFF::HVCC::ReadData)
        .def("WriteDescription", &ISOBMFF::HVCC::WriteDescription)
        .def("GetDisplayableObjects", &ISOBMFF::HVCC::GetDisplayableObjects)
        .def("GetDisplayableProperties", &ISOBMFF::HVCC::GetDisplayableProperties)
        .def("GetConfigurationVersion", &ISOBMFF::HVCC::GetConfigurationVersion)
        .def("GetGeneralProfileSpace", &ISOBMFF::HVCC::GetGeneralProfileSpace)
        .def("GetGeneralTierFlag", &ISOBMFF::HVCC::GetGeneralTierFlag)
        .def("GetGeneralProfileIDC", &ISOBMFF::HVCC::GetGeneralProfileIDC)
        .def("GetGeneralProfileCompatibilityFlags", &ISOBMFF::HVCC::GetGeneralProfileCompatibilityFlags)
        .def("GetGeneralConstraintIndicatorFlags", &ISOBMFF::HVCC::GetGeneralConstraintIndicatorFlags)
        .def("GetGeneralLevelIDC", &ISOBMFF::HVCC::GetGeneralLevelIDC)
        .def("GetMinSpatialSegmentationIDC", &ISOBMFF::HVCC::GetMinSpatialSegmentationIDC)
        .def("GetParallelismType", &ISOBMFF::HVCC::GetParallelismType)
        .def("GetChromaFormat", &ISOBMFF::HVCC::GetChromaFormat)
        .def("GetBitDepthLumaMinus8", &ISOBMFF::HVCC::GetBitDepthLumaMinus8)
        .def("GetBitDepthChromaMinus8", &ISOBMFF::HVCC::GetBitDepthChromaMinus8)
        .def("GetAvgFrameRate", &ISOBMFF::HVCC::GetAvgFrameRate)
        .def("GetConstantFrameRate", &ISOBMFF::HVCC::GetConstantFrameRate)
        .def("GetNumTemporalLayers", &ISOBMFF::HVCC::GetNumTemporalLayers)
        .def("GetTemporalIdNested", &ISOBMFF::HVCC::GetTemporalIdNested)
        .def("GetLengthSizeMinusOne", &ISOBMFF::HVCC::GetLengthSizeMinusOne)
        .def("SetConfigurationVersion", &ISOBMFF::HVCC::SetConfigurationVersion)
        .def("SetGeneralProfileSpace", &ISOBMFF::HVCC::SetGeneralProfileSpace)
        .def("SetGeneralTierFlag", &ISOBMFF::HVCC::SetGeneralTierFlag)
        .def("SetGeneralProfileIDC", &ISOBMFF::HVCC::SetGeneralProfileIDC)
        .def("SetGeneralProfileCompatibilityFlags", &ISOBMFF::HVCC::SetGeneralProfileCompatibilityFlags)
        .def("SetGeneralConstraintIndicatorFlags", &ISOBMFF::HVCC::SetGeneralConstraintIndicatorFlags)
        .def("SetGeneralLevelIDC", &ISOBMFF::HVCC::SetGeneralLevelIDC)
        .def("SetMinSpatialSegmentationIDC", &ISOBMFF::HVCC::SetMinSpatialSegmentationIDC)
        .def("SetParallelismType", &ISOBMFF::HVCC::SetParallelismType)
        .def("SetChromaFormat", &ISOBMFF::HVCC::SetChromaFormat)
        .def("SetBitDepthLumaMinus8", &ISOBMFF::HVCC::SetBitDepthLumaMinus8)
        .def("SetBitDepthChromaMinus8", &ISOBMFF::HVCC::SetBitDepthChromaMinus8)
        .def("SetAvgFrameRate", &ISOBMFF::HVCC::SetAvgFrameRate)
        .def("SetConstantFrameRate", &ISOBMFF::HVCC::SetConstantFrameRate)
        .def("SetNumTemporalLayers", &ISOBMFF::HVCC::SetNumTemporalLayers)
        .def("SetTemporalIdNested", &ISOBMFF::HVCC::SetTemporalIdNested)
        .def("SetLengthSizeMinusOne", &ISOBMFF::HVCC::SetLengthSizeMinusOne)
        .def("GetArrays", &ISOBMFF::HVCC::GetArrays)
        .def("AddArray", &ISOBMFF::HVCC::AddArray)
        ;
    boost::python::class_<ArrayWrapper, boost::python::bases<XS::PIMPL::Object<ISOBMFF::HVCC::Array>, ISOBMFF::DisplayableObject, ISOBMFF::DisplayableObjectContainer>, std::shared_ptr<ISOBMFF::HVCC::Array>>("Array")
        .def(boost::python::init<ISOBMFF::BinaryStream &>())
        .def("GetName", &ISOBMFF::HVCC::Array::GetName)
        .def("GetArrayCompleteness", &ISOBMFF::HVCC::Array::GetArrayCompleteness)
        .def("GetNALUnitType", &ISOBMFF::HVCC::Array::GetNALUnitType)
        .def("SetArrayCompleteness", &ISOBMFF::HVCC::Array::SetArrayCompleteness)
        .def("SetNALUnitType", &ISOBMFF::HVCC::Array::SetNALUnitType)
        .def("WriteDescription", &ISOBMFF::HVCC::Array::WriteDescription)
        .def("GetDisplayableObjects", &ISOBMFF::HVCC::Array::GetDisplayableObjects)
        .def("GetDisplayableProperties", &ISOBMFF::HVCC::Array::GetDisplayableProperties)
        .def("GetNALUnits", &ISOBMFF::HVCC::Array::GetNALUnits)
        .def("AddNALUnit", &ISOBMFF::HVCC::Array::AddNALUnit)
        ;
    boost::python::class_<NALUnitWrapper, boost::python::bases<XS::PIMPL::Object<ISOBMFF::HVCC::Array::NALUnit>, ISOBMFF::DisplayableObject>, std::shared_ptr<ISOBMFF::HVCC::Array::NALUnit>>("NALUnit")
        .def(boost::python::init<ISOBMFF::BinaryStream &>())
        .def("GetName", &ISOBMFF::HVCC::Array::NALUnit::GetName)
        .def("GetData", &ISOBMFF::HVCC::Array::NALUnit::GetData)
        .def("SetData", &ISOBMFF::HVCC::Array::NALUnit::SetData)
        .def("GetDisplayableProperties", &ISOBMFF::HVCC::Array::NALUnit::GetDisplayableProperties)
        ;
}
