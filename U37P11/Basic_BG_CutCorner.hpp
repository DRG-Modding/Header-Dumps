#ifndef UE4SS_SDK_Basic_BG_CutCorner_HPP
#define UE4SS_SDK_Basic_BG_CutCorner_HPP

class UBasic_BG_CutCorner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UBorder* Border_100;
    class UBorder* Border_107;
    class UImage* Corner;
    class UHorizontalBox* HorizontalBox_Border;
    class USizeBox* SizeBox_0;
    float CornerSize;
    class UMaterialInstanceDynamic* DynBackgroundMaterial;

    void PreConstruct(bool IsDesignTime);
    void SetBorderColor(FLinearColor InputPin);
    void ExecuteUbergraph_Basic_BG_CutCorner(int32 EntryPoint);
};

#endif
