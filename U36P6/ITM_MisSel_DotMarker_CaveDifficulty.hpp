#ifndef UE4SS_SDK_ITM_MisSel_DotMarker_CaveDifficulty_HPP
#define UE4SS_SDK_ITM_MisSel_DotMarker_CaveDifficulty_HPP

class UITM_MisSel_DotMarker_CaveDifficulty_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon1;
    class UImage* Icon2;
    class UImage* Icon3;
    class USizeBox* SizeBox_1;
    class USizeBox* SizeBox_2;
    class USizeBox* SizeBox_3;
    float Size;
    float RenderAngle;
    int32 CurrentLevel;
    TArray<class UImage*> Icons;

    void PreConstruct(bool IsDesignTime);
    void SetData(int32 Level);
    void Construct();
    void ExecuteUbergraph_ITM_MisSel_DotMarker_CaveDifficulty(int32 EntryPoint);
};

#endif
