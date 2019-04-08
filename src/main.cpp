#include <boost/python.hpp>

/*
extern void init_ISOBMFF_BinaryStream_hpp();
*/
extern void init_ISOBMFF_Box_hpp();
/*
extern void init_ISOBMFF_CDSC_hpp();
extern void init_ISOBMFF_COLR_hpp();
*/
extern void init_ISOBMFF_Container_hpp();
extern void init_ISOBMFF_ContainerBox_hpp();
/*
extern void init_ISOBMFF_DIMG_hpp();
*/
extern void init_ISOBMFF_DisplayableObject_hpp();
/*
extern void init_ISOBMFF_DisplayableObjectContainer_hpp();
extern void init_ISOBMFF_DREF_hpp();
*/
extern void init_ISOBMFF_File_hpp();
/*
extern void init_ISOBMFF_FRMA_hpp();
extern void init_ISOBMFF_FTYP_hpp();
extern void init_ISOBMFF_FullBox_hpp();
extern void init_ISOBMFF_HDLR_hpp();
extern void init_ISOBMFF_HVCC_hpp();
extern void init_ISOBMFF_IINF_hpp();
extern void init_ISOBMFF_ILOC_hpp();
extern void init_ISOBMFF_ImageGrid_hpp();
extern void init_ISOBMFF_INFE_hpp();
extern void init_ISOBMFF_IPCO_hpp();
extern void init_ISOBMFF_IPMA_hpp();
extern void init_ISOBMFF_IREF_hpp();
extern void init_ISOBMFF_IROT_hpp();
extern void init_ISOBMFF_ISPE_hpp();
extern void init_ISOBMFF_Macros_hpp();
extern void init_ISOBMFF_Matrix_hpp();
extern void init_ISOBMFF_META_hpp();
extern void init_ISOBMFF_MVHD_hpp();
*/
extern void init_ISOBMFF_Parser_hpp();
/*
extern void init_ISOBMFF_PITM_hpp();
extern void init_ISOBMFF_PIXI_hpp();
extern void init_ISOBMFF_SCHM_hpp();
extern void init_ISOBMFF_SingleItemTypeReferenceBox_hpp();
extern void init_ISOBMFF_STSD_hpp();
extern void init_ISOBMFF_THMB_hpp();
extern void init_ISOBMFF_TKHD_hpp();
extern void init_ISOBMFF_URL_hpp();
extern void init_ISOBMFF_URN_hpp();
*/
extern void init_ISOBMFF_Utils_hpp();
/*
extern void init_ISOBMFF_WIN32_hpp();
*/

BOOST_PYTHON_MODULE(__ISOBMFF) {
    init_ISOBMFF_Parser_hpp();
    init_ISOBMFF_Utils_hpp();

    init_ISOBMFF_DisplayableObject_hpp();
    init_ISOBMFF_Box_hpp();  // depends on DisplayableObject
    init_ISOBMFF_Container_hpp();
    init_ISOBMFF_ContainerBox_hpp();  // depends on Container, Box
    init_ISOBMFF_File_hpp();  // depends on ContainerBox
}
