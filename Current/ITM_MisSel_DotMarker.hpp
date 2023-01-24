#ifndef UE4SS_SDK_ITM_MisSel_DotMarker_HPP
#define UE4SS_SDK_ITM_MisSel_DotMarker_HPP

class UITM_MisSel_DotMarker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon1;
    class UImage* Icon2;
    class UImage* Icon3;
    class USizeBox* SizeBox_1;
    class USizeBox* SizeBox_2;
    class USizeBox* SizeBox_3;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void SetData(int32 Level);
    void ExecuteUbergraph_ITM_MisSel_DotMarker(int32 EntryPoint);
};

#endif
