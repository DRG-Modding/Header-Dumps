#ifndef UE4SS_SDK_ITM_MisSel_DotMarker_WorkEnvironment_HPP
#define UE4SS_SDK_ITM_MisSel_DotMarker_WorkEnvironment_HPP

class UITM_MisSel_DotMarker_WorkEnvironment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_0;
    class UImage* Icon1;
    class UImage* Icon2;
    class UImage* Icon3;
    class UImage* Icon4;
    class UImage* Icon5;
    class USizeBox* SizeBox_1;
    class USizeBox* SizeBox_2;
    class USizeBox* SizeBox_3;
    class USizeBox* SizeBox_4;
    class USizeBox* SizeBox_5;
    float Size;
    float RenderAngle;

    void PreConstruct(bool IsDesignTime);
    void SetData(class UDifficultySetting* Difficulty);
    void ExecuteUbergraph_ITM_MisSel_DotMarker_WorkEnvironment(int32 EntryPoint);
};

#endif
