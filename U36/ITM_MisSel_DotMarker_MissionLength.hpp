#ifndef UE4SS_SDK_ITM_MisSel_DotMarker_MissionLength_HPP
#define UE4SS_SDK_ITM_MisSel_DotMarker_MissionLength_HPP

class UITM_MisSel_DotMarker_MissionLength_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon1;
    class UImage* Icon2;
    class UImage* Icon3;
    class USizeBox* SizeBox_2;
    class USizeBox* SizeBox_3;
    class USizeBox* SizeBox_4;
    float Size;
    float RenderAngle;

    void PreConstruct(bool IsDesignTime);
    void SetData(int32 Level);
    void ExecuteUbergraph_ITM_MisSel_DotMarker_MissionLength(int32 EntryPoint);
};

#endif
