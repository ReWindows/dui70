#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 107 member(s).
namespace DirectUI {
class Value {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@Value@DirectUI@@QEAAXXZ
    void AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?CreateAtom@Value@DirectUI@@SAPEAV12@PEBG@Z
    static Value * CreateAtom(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateAtom@Value@DirectUI@@SAPEAV12@G@Z
    static Value * CreateAtom(unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateBool@Value@DirectUI@@SAPEAV12@_N@Z
    static Value * CreateBool(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateColor@Value@DirectUI@@SAPEAV12@K@Z
    static Value * CreateColor(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateColor@Value@DirectUI@@SAPEAV12@KKKE@Z
    static Value * CreateColor(unsigned long, unsigned long, unsigned long, unsigned char);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateColor@Value@DirectUI@@SAPEAV12@KKE@Z
    static Value * CreateColor(unsigned long, unsigned long, unsigned char);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateCursor@Value@DirectUI@@SAPEAV12@PEAUHICON__@@@Z
    static Value * CreateCursor(HICON__*);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateCursor@Value@DirectUI@@SAPEAV12@PEBG@Z
    static Value * CreateCursor(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateDFCFill@Value@DirectUI@@SAPEAV12@II@Z
    static Value * CreateDFCFill(unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateDTBFill@Value@DirectUI@@SAPEAV12@PEBGHH@Z
    static Value * CreateDTBFill(unsigned short const *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateDoubleList@Value@DirectUI@@SAPEAV12@PEBNH@Z
    static Value * CreateDoubleList(double const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateDoubleList@Value@DirectUI@@SAPEAV12@PEAV?$DynamicArray@N$0A@@2@@Z
    static Value * CreateDoubleList(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateElementList@Value@DirectUI@@SAPEAV12@PEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@@Z
    static Value * CreateElementList(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateElementRef@Value@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static Value * CreateElementRef(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateElementScaledValue@Value@DirectUI@@SAPEAV12@PEAVElement@2@PEAV12@@Z
    static Value * CreateElementScaledValue(::DirectUI::Element *, Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateEncodedString@Value@DirectUI@@SAPEAV12@PEBG@Z
    static Value * CreateEncodedString(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateExpression@Value@DirectUI@@SAPEAV12@PEAVExpression@2@@Z
    static Value * CreateExpression(::DirectUI::Expression *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateFill@Value@DirectUI@@SAPEAV12@AEBUFill@2@@Z
    static Value * CreateFill(::DirectUI::Fill const &);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateFloat@Value@DirectUI@@SAPEAV12@MW4DynamicScaleValue@@@Z
    static Value * CreateFloat(float, int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateGraphic@Value@DirectUI@@SAPEAV12@PEBGGGPEAUHINSTANCE__@@_N2@Z
    static Value * CreateGraphic(unsigned short const *, unsigned short, unsigned short, HINSTANCE__*, bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateGraphic@Value@DirectUI@@SAPEAV12@PEBGUScaledSIZE@2@PEAUHINSTANCE__@@_N3@Z
    static Value * CreateGraphic(unsigned short const *, ::DirectUI::ScaledSIZE, HINSTANCE__*, bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateGraphic@Value@DirectUI@@SAPEAV12@PEBGEIGGPEAUHINSTANCE__@@_N2@Z
    static Value * CreateGraphic(unsigned short const *, unsigned char, unsigned int, unsigned short, unsigned short, HINSTANCE__*, bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateGraphic@Value@DirectUI@@SAPEAV12@PEAUHBITMAP__@@EI_N11@Z
    static Value * CreateGraphic(HBITMAP__*, unsigned char, unsigned int, bool, bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateGraphic@Value@DirectUI@@SAPEAV12@PEAUHICON__@@_N11@Z
    static Value * CreateGraphic(HICON__*, bool, bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateGraphic@Value@DirectUI@@SAPEAV12@PEAUHENHMETAFILE__@@0@Z
    static Value * CreateGraphic(HENHMETAFILE__*, HENHMETAFILE__*);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateGraphic@Value@DirectUI@@SAPEAV12@PEAUISharedBitmap@@EI@Z
    static Value * CreateGraphic(ISharedBitmap *, unsigned char, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateInt@Value@DirectUI@@SAPEAV12@HW4DynamicScaleValue@@@Z
    static Value * CreateInt(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateLayout@Value@DirectUI@@SAPEAV12@PEAVLayout@2@@Z
    static Value * CreateLayout(::DirectUI::Layout *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreatePoint@Value@DirectUI@@SAPEAV12@HHW4DynamicScaleValue@@@Z
    static Value * CreatePoint(int, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateRect@Value@DirectUI@@SAPEAV12@HHHHW4DynamicScaleValue@@@Z
    static Value * CreateRect(int, int, int, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateScaledValue@Value@DirectUI@@SAPEAV12@MPEAV12@@Z
    static Value * CreateScaledValue(float, Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateSize@Value@DirectUI@@SAPEAV12@HHW4DynamicScaleValue@@@Z
    static Value * CreateSize(int, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateString@Value@DirectUI@@SAPEAV12@PEBGPEAUHINSTANCE__@@@Z
    static Value * CreateString(unsigned short const *, HINSTANCE__*);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateStringRP@Value@DirectUI@@SAPEAV12@PEBGPEAUHINSTANCE__@@@Z
    static Value * CreateStringRP(unsigned short const *, HINSTANCE__*);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateStyleSheet@Value@DirectUI@@SAPEAV12@PEAVStyleSheet@2@@Z
    static Value * CreateStyleSheet(::DirectUI::StyleSheet *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateValueList@Value@DirectUI@@SAPEAV12@PEAV?$DynamicArray@PEAVValue@DirectUI@@$0A@@2@@Z
    static Value * CreateValueList(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateValueList@Value@DirectUI@@SAPEAV12@PEAV12@@Z
    static Value * CreateValueList(Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAtom@Value@DirectUI@@QEAAGXZ
    unsigned short GetAtom();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAtomZero@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetAtomZero();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBool@Value@DirectUI@@QEAA_NXZ
    bool GetBool();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBoolFalse@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetBoolFalse();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBoolTrue@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetBoolTrue();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColorTrans@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetColorTrans();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCursor@Value@DirectUI@@QEAAPEAUCursor@2@XZ
    ::DirectUI::Cursor * GetCursor();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCursorNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetCursorNull();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDblListEmpty@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetDblListEmpty();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDoubleList@Value@DirectUI@@QEAAPEAV?$DynamicArray@N$0A@@2@XZ
    WindissectOpaque * GetDoubleList();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElListNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetElListNull();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElement@Value@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementList@Value@DirectUI@@QEAAPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@XZ
    WindissectOpaque * GetElementList();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetElementNull();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementScaledFloat@Value@DirectUI@@QEAAMPEAVElement@2@@Z
    float GetElementScaledFloat(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementScaledInt@Value@DirectUI@@QEAAHPEAVElement@2@@Z
    int GetElementScaledInt(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementScaledPoint@Value@DirectUI@@QEAAXPEAVElement@2@PEAUtagPOINT@@@Z
    void GetElementScaledPoint(::DirectUI::Element *, tagPOINT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementScaledRect@Value@DirectUI@@QEAAXPEAVElement@2@PEAUtagRECT@@@Z
    void GetElementScaledRect(::DirectUI::Element *, tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementScaledSize@Value@DirectUI@@QEAAXPEAVElement@2@PEAUtagSIZE@@@Z
    void GetElementScaledSize(::DirectUI::Element *, tagSIZE *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEncodedString@Value@DirectUI@@QEAAJPEAG_K@Z
    long GetEncodedString(unsigned short *, uint64_t);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEncodedStringLength@Value@DirectUI@@QEAA_KXZ
    uint64_t GetEncodedStringLength();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetExprNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetExprNull();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetExpression@Value@DirectUI@@QEAAPEAVExpression@2@XZ
    ::DirectUI::Expression * GetExpression();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFill@Value@DirectUI@@QEAAPEBUFill@2@XZ
    ::DirectUI::Fill const * GetFill();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFloat@Value@DirectUI@@QEAAMXZ
    float GetFloat();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFloatOne@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetFloatOne();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFloatZero@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetFloatZero();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetGraphic@Value@DirectUI@@QEAAPEAUGraphic@2@XZ
    ::DirectUI::Graphic * GetGraphic();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetImage@Value@DirectUI@@QEAAPEAX_NM@Z
    void * GetImage(bool, float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInt@Value@DirectUI@@QEAAHXZ
    int GetInt();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIntMinusOne@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetIntMinusOne();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIntZero@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetIntZero();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLayout@Value@DirectUI@@QEAAPEAVLayout@2@XZ
    ::DirectUI::Layout * GetLayout();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLayoutNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetLayoutNull();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetNull();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPoint@Value@DirectUI@@QEAAPEBUtagPOINT@@XZ
    tagPOINT const * GetPoint();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPointZero@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetPointZero();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRect@Value@DirectUI@@QEAAPEBUtagRECT@@XZ
    tagRECT const * GetRect();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRectZero@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetRectZero();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRefCount@Value@DirectUI@@QEBAHXZ
    int GetRefCount() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScaledFloat@Value@DirectUI@@QEAAMM@Z
    float GetScaledFloat(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScaledInt@Value@DirectUI@@QEAAHM@Z
    int GetScaledInt(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScaledInt@Value@DirectUI@@QEAAPEBUScaledInt@2@XZ
    ::DirectUI::ScaledInt const * GetScaledInt();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScaledPoint@Value@DirectUI@@QEAAXMPEAUtagPOINT@@@Z
    void GetScaledPoint(float, tagPOINT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScaledRect@Value@DirectUI@@QEAAXMPEAUtagRECT@@@Z
    void GetScaledRect(float, tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScaledSize@Value@DirectUI@@QEAAXMPEAUtagSIZE@@@Z
    void GetScaledSize(float, tagSIZE *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSheetNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetSheetNull();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSize@Value@DirectUI@@QEAAPEBUtagSIZE@@XZ
    tagSIZE const * GetSize();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSizeZero@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetSizeZero();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetString@Value@DirectUI@@QEAAPEBGXZ
    unsigned short const * GetString();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetStringDynamicScaling@Value@DirectUI@@QEAAPEBGXZ
    unsigned short const * GetStringDynamicScaling();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetStringNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetStringNull();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetStringRPNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetStringRPNull();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetStyleSheet@Value@DirectUI@@QEAAPEAVStyleSheet@2@XZ
    ::DirectUI::StyleSheet * GetStyleSheet();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetType@Value@DirectUI@@QEBAHXZ
    int GetType() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetUnavailable@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetUnavailable();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetUnset@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetUnset();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetValueList@Value@DirectUI@@QEAAPEAV?$DynamicArray@PEAVValue@DirectUI@@$0A@@2@XZ
    WindissectOpaque * GetValueList();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDynamicScaled@Value@DirectUI@@QEAA_NXZ
    bool IsDynamicScaled();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsEqual@Value@DirectUI@@QEAA_NPEAV12@@Z
    bool IsEqual(Value *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@Value@DirectUI@@QEAAXXZ
    void Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLayoutPointerToNull@Value@DirectUI@@QEAAXXZ
    void SetLayoutPointerToNull();
    // Category: Method | Source: PE Export
    // Symbol: ?ToString@Value@DirectUI@@QEBAPEAGPEAGI@Z
    unsigned short * ToString(unsigned short *, unsigned int) const;
private:
    // Category: Method | Source: PE Export
    // Symbol: ?CreateIconGraphicHelper@Value@DirectUI@@CAPEAV12@PEAUHICON__@@_N11@Z
    static Value * CreateIconGraphicHelper(HICON__*, bool, bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?ReloadIcon@Value@DirectUI@@CAPEAUHICON__@@PEAUGraphic@2@M@Z
    static HICON__* ReloadIcon(::DirectUI::Graphic *, float);
    // Category: Method | Source: PE Export
    // Symbol: ?StrDupW@Value@DirectUI@@CAJPEBGPEAPEAG@Z
    static long StrDupW(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_ZeroRelease@Value@DirectUI@@AEAAXXZ
    void _ZeroRelease();
};
} // namespace DirectUI
